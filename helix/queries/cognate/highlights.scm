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

;; TODO: highlight builtins

((identifier) @operator (#match? @operator "^(\\+|-|\\*|/|>|<|<=|>=|==|!=)$"))

((identifier) @keyword.operator
 (#match? @keyword.operator "^(Modulo|Exp|Not|And|Or|Xor)$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(List|Box|Regex|Character|Number)$"))

(identifier) @variable
