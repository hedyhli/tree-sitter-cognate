(number) @constant.numeric
(string) @string
(escape_sequence) @constant.character.escape
(symbol) @string.special.symbol
(boolean) @constant.builtin.boolean

(inline_comment) @comment
(line_comment) @comment.line
(multiline_comment) @comment.block


["(" ")"] @punctuation.bracket
";" @punctuation.delimiter

(statement
 (identifier) @keyword.storage (#eq? @keyword.storage "Def")
 .
 (identifier) @function)

;; ((identifier) @function (#is-not? local))

((identifier) @keyword.storage.type
 (#match? @keyword.storage.type "^(Let|Def)$"))

((identifier) @keyword.storage.modifier
 (#match? @keyword.storage.modifier "^(Set)$"))

((identifier) @keyword.control.conditional
 (#match? @keyword.control.conditional "^(If|Case|When|Unless)$"))

((identifier) @keyword.control.repeat
 (#match? @keyword.control.repeat "^(For|While|Take-while|Until)$"))

((identifier) @keyword.control
 (#match? @keyword.control "^(With)$"))
;
; ((identifier) @function.builtin (#any-of? @function.builtin
;                                  "Print" "Prints" "Puts" "Put" "Fold" "Show"
;                                  "Reverse" "Twin" "Drop" "Swap" "Case" "When"
;                                  "Do" "Map" "Range" "Read-file" "Unbox" "Floor"
;                                  "Ceiling" "Round" "Ln" "Log" "Triplet" "Head"
;                                  "Tail" "First" "Rest" "Sin" "Cos" "Tan" "Asin"
;                                  "Acos" "Atan" "Sind" "Cosd" "Tand" "Asind"
;                                  "Acosd" "Atand" "Sinh" "Cosh" "Tanh" "Sinhd"
;                                  "Coshd" "Tanhd" "Filter" "Number?" "Zero?"
;                                  "Empty?" "Empty" "Any?" "None" "All" "Sort"
;                                  "Append" "Prepend" "Min" "Max" "Times"
;                                  "Integer!" "Number!" "Boolean!" "Block!"
;                                  "Zero!" "String!" "List!" "Index" "Length"
;                                  "Push"))

((identifier) @operator (#match? @operator "^(\\+|-|\\*|/|>|<|<=|>=|==|!=)$"))

((identifier) @keyword.operator
 (#match? @keyword.operator "^(Modulo|Exp|Not|And|Or|Xor)$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(List|Box|Regex|Character|Number)$"))

(identifier) @variable
