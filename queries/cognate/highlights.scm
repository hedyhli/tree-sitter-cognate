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
                                 "Path" "Close" "Read-file" "Open" "Input"
                                 "Parameters" "Get" "Insert" "Dict" "Tanh"
                                 "Cosh" "Sinh" "Tanhd" "Coshd" "Sinhd" "Atan"
                                 "Acos" "Asin" "Atand" "Acosd" "Asind" "Ln"
                                 "Log" "Exp" "Tan" "Cos" "Sin" "Tand" "Cosd"
                                 "Sind" "Begin" "Debug" "Set" "Unbox" "Box"
                                 "Clear" "Stack" "Show" "Stop" "Wait" "Number"
                                 "List" "Error" "Ceiling" "Round" "Floor"
                                 "Uppercase" "Split" "Character" "Ordinal"
                                 "Regex" "Substring" "String-length" "Join"
                                 "Empty?" "Push" "Tail" "Head" "Rest" "First"
                                 "Boolean!" "Block!" "String!" "List!" "Any!"
                                 "Zero!" "Integer!" "Io!" "Symbol!" "Number!"
                                 "Boolean?" "Block?" "String?" "List?" "Any?"
                                 "Zero?" "Integer?" "Symbol?" "Io?" "Number?"
                                 "Not" "Xor" "And" "Or" "Sqrt" "Modulo"
                                 "Random" "Do" "Put" "Print" "Match" "False"
                                 "True" "Empty" "Drop" "Prepend" "Index" "All"
                                 "Discard" "None" "Append" "Swap" "Fold"
                                 "Prints" "Times" "Range" "Twin" "Take"
                                 "Triplet" "Min" "Reverse" "Filter" "Max"
                                 "When" "Case" "Map" "Puts" "Sort" "Assert"
                                 "Length"
                                 ))
((identifier) @operator (#any-of? @operator "+" "-" "*" "/" ">" "<" "<=" ">="
                         "==" "!=" "Modulo" "Exp" "Not" "And" "Or" "Xor"))
((identifier) @type.builtin (#any-of? @type.builtin "List" "Box" "Number"))
