;;; cognate-ts-mode.el --- tree-sitter support for the Cognate programming language                     -*- lexical-binding: t; -*-

;; Copyright (C) 2024 hedy

;; Author: hedy
;; Keywords: cognate highlighting
;; Version: 0.1.0

;;; Commentary:

;;; Code:

(require 'treesit)
(eval-when-compile (require 'rx))

(declare-function treesit-parser-create "treesit.c")
(declare-function treesit-induce-sparse-tree "treesit.c")
(declare-function treesit-node-child "treesit.c")
(declare-function treesit-node-child-by-field-name "treesit.c")
(declare-function treesit-node-start "treesit.c")
(declare-function treesit-node-end "treesit.c")
(declare-function treesit-node-type "treesit.c")
(declare-function treesit-node-parent "treesit.c")
(declare-function treesit-query-compile "treesit.c")

(defvar cognate-ts-mode--syntax-table
  (let ((st (make-syntax-table)))
    (modify-syntax-entry ?\; "w" st)
    (modify-syntax-entry ?' "w" st)
    (modify-syntax-entry ?- "w" st)
    (modify-syntax-entry ?! "w" st)
    (modify-syntax-entry ?? "w" st)
    (modify-syntax-entry ?~ "! 12" st)
    (modify-syntax-entry ?\n ">" st)
    (modify-syntax-entry ?\" "\"" st)
    (modify-syntax-entry ?\( "()" st)
    (modify-syntax-entry ?\) ")(" st)
    (modify-syntax-entry ?\\ "'" st)
    st)
  "Syntax table for `cognate-ts-mode'")

(defcustom cognate-ts-mode-indent-offset 4
  "Number of spaces for each indentation step in `cognate-ts-mode'."
  :version "29.1"
  :type 'integer
  :safe 'integerp
  :group 'json)

(defvar cognate--treesit-indent-rules
  '((cognate
     ((node-is ")") parent-bol 0)
     ((parent-is "block") parent-bol cognate-ts-mode-indent-offset)
     ))
  "Tree-sitter indentation rules for `cognate-ts-mode'.")

(defvar cognate-ts-mode--keywords
  '("For" "While" "Let" "Def" "When" "If"
    "Case" "When" "Unless" "Do" "With"
    "Set" "Take-while" "Until")
  "Cognate builtin keywords for font-locking.")

(defvar cognate-ts-mode--operators
  '("+" "-" "*" "/" ">" "<" "<=" ">="
    "==" "!=" "Modulo" "Exp" "Not" "And"
    "Or" "Xor")
  "Cognate operators for font-locking.")

(defvar cognate-ts-mode--builtins
  '("Path" "Close" "Read-file" "Open" "Input" "Parameters" "Get" "Insert" "Dict" "Tanh" "Cosh" "Sinh" "Tanhd" "Coshd" "Sinhd" "Atan" "Acos" "Asin" "Atand" "Acosd" "Asind" "Ln" "Log" "Exp" "Tan" "Cos" "Sin" "Tand" "Cosd" "Sind" "Begin" "Debug" "Set" "Unbox" "Box" "Clear" "Stack" "Show" "Stop" "Wait" "Number" "List" "Error" "Ceiling" "Round" "Floor" "Split" "Character" "Ordinal" "Regex" "Substring" "String-length" "Join" "Empty?" "Push" "Tail" "Head" "Rest" "First" "Boolean!" "Block!" "String!" "List!" "Any!" "Zero!" "Integer!" "Io!" "Symbol!" "Number!" "Boolean?" "Block?" "String?" "List?" "Any?" "Zero?" "Integer?" "Symbol?" "Io?" "Number?" "Not" "Xor" "And" "Or" "Sqrt" "Modulo" "Random" "Do" "Put" "Print" "Match" "False" "True" "Empty" "Drop" "Prepend" "Index" "All" "Discard" "None" "Append" "Swap" "Fold" "Prints" "Times" "Range" "Twin" "Take" "Triplet" "Min" "Reverse" "Filter" "Max" "When" "Case" "Map" "Puts" "Sort" "Assert" "Length")
  "Cognate built-in functions for font-locking.")

(defvar cognate-ts-mode--types
  '("List" "Box" "Number"))

(defvar cognate--treesit-settings
  (treesit-font-lock-rules
   :feature 'comment
   :language 'cognate
   '((line_comment) @font-lock-comment-face
     (inline_comment) @font-lock-comment-face
     (multiline_comment) @font-lock-comment-face)

   :feature 'string
   :language 'cognate
   '((string) @font-lock-string-face)

   :feature 'escape
   :language 'cognate
   :override t
   '((escape_sequence) @font-lock-escape-face)

   :feature 'keyword
   :language 'cognate
   `((statement
      ((identifier) @font-lock-keyword-face
       (:match ,(rx-to-string
                 `(seq bol
                       (or ,@cognate-ts-mode--keywords)
                       eol))
               @font-lock-keyword-face))))

   :feature 'operator
   :language 'cognate
   `((statement
      ((identifier) @font-lock-operator-face
       (:match ,(rx-to-string
                 `(seq bol
                       (or ,@cognate-ts-mode--operators)
                       eol))
               @font-lock-operator-face))))

   :feature 'delimiter
   :language 'cognate
   '([";"] @font-lock-delimiter-face)

   :feature 'builtin
   :language 'cognate
   `((statement
      ((identifier) @font-lock-type-face
       (:match ,(rx-to-string
                 `(seq bol
                       (or ,@cognate-ts-mode--types)
                       eol))
               @font-lock-type-face)))
    (statement
      ((identifier) @font-lock-builtin-face
       (:match ,(rx-to-string
                 `(seq bol
                       (or ,@cognate-ts-mode--builtins)
                       eol))
               @font-lock-builtin-face))))

   :feature 'constant
   :language 'cognate
   '((number) @font-lock-number-face
     (symbol) @font-lock-constant-face)
    
   :feature 'bracket
   :language 'cognate
   '((["(" ")"]) @font-lock-bracket-face)

   :feature 'error
   :language 'cognate
   '((ERROR) @error))
  "Tree-sitter font-lock settings for `cognate-ts-mode'.")

;;;###autoload
(define-derived-mode cognate-ts-mode prog-mode "Cognate[ts]"
  "Major mode to edit Cognate files that uses Tree-Sitter."
  :group 'cognate
  :syntax-table cognate-ts-mode--syntax-table
  (setq-local comment-start "~~")
  (setq-local comment-start-skip "~~[ \t]*")
  (setq-local comment-end "")
  (setq-local comment-end-skip "[ \t]*")

  (when (treesit-ready-p 'cognate)
    (treesit-parser-create 'cognate)

    ;; Indent
    (setq-local treesit-simple-indent-rules cognate--treesit-indent-rules)

    ;; Highlight
    (setq-local treesit-font-lock-settings cognate--treesit-settings)
    (setq-local treesit-font-lock-feature-list
                '((comment builtin keyword)
                  (constant string escape)
                  (error operator bracket delimiter)))

    ;; Electric
    ;;(setq-local electric-indent-chars
    ;;            (append "()" electric-indent-chars))

    (treesit-major-mode-setup)))

(if (treesit-ready-p 'cognate)
    (add-to-list 'auto-mode-alist '("\\.cog\\'" . cognate-ts-mode)))

(provide 'cognate-ts-mode)

;;; cognate-ts-mode.el ends here
