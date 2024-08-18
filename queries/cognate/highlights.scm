(number) @number
(string) @string
(escape_sequence) @string.escape
(symbol) @constant
(boolean) @boolean

[(inline_comment) (line_comment) (multiline_comment)] @comment

[
 ";"
 "("
 ")"
] @punctuation.special

(statement
 (identifier) @keyword (#eq? @keyword "Def")
 .
 (identifier) @function)

;; TODO: Update once neovim supports this.
; ((identifier) @function (#is-not? local))

((identifier) @keyword (#any-of? @keyword "For" "While" "Let" "Def" "When" "If"
                        "Case" "When" "Unless" "Do" "With" "Set" "Take-while"
                        "Until"))

((identifier) @function.builtin (#any-of? @function.builtin
                                 "Empty" "True" "False" "Match" "Print" "Put"
                                 "Do" "Random" "Modulo" "Sqrt" "Or" "And" "Xor"
                                 "Not" "Number?" "Io?" "Symbol?" "Integer?"
                                 "Zero?" "Any?" "List?" "String?" "Block?"
                                 "Boolean?" "Number!" "Symbol!" "Io!"
                                 "Integer!" "Zero!" "Any!" "List!" "String!"
                                 "Block!" "Boolean!" "First" "Rest" "Head"
                                 "Tail" "Push" "Empty?" "Join" "String-length"
                                 "Substring" "Regex" "Ordinal" "Character"
                                 "Split" "Uppercase" "Floor" "Round" "Ceiling"
                                 "Error" "List" "Number" "Wait" "Stop" "Show"
                                 "Stack" "Clear" "Box" "Unbox" "Set" "Debug"
                                 "Begin" "Sind" "Cosd" "Tand" "Sin" "Cos" "Tan"
                                 "Exp" "Log" "Ln" "Asind" "Acosd" "Atand"
                                 "Asin" "Acos" "Atan" "Sinhd" "Coshd" "Tanhd"
                                 "Sinh" "Cosh" "Tanh" "Dict" "Insert" "Get"
                                 "Parameters" "Input" "Open" "Read-file"
                                 "Close" "Path"
                                 ))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">="
                         "==" "!=" "Modulo" "Exp" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Number"))
