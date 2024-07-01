(operator) @operator
(number) @number
(inline_comment) @comment
(line_comment) @comment
(expression (identifier) @variable)

[
 ";"
 "("
 ")"
] @punctuation.special

(fn_stmt (identifier) @function)

(fn_stmt (identifier) @keyword (#any-of? @keyword "For" "Let" "Def" "When"))

(def_stmt "Def" @keyword)
(def_stmt name: _ @function)

(string) @string
