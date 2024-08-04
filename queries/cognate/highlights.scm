(number) @number
(string) @string
(symbol) @constant
(boolean) @boolean

(inline_comment) @comment
(line_comment) @comment
(multiline_comment) @comment

[
 ";"
 "("
 ")"
] @punctuation.special

((identifier) @keyword (#any-of? @keyword "For" "Let" "Def" "When" "If" "Case" "When" "Do"))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">="))

