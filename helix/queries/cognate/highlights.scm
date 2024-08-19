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

((identifier) @function.builtin
 (#match? @function.builtin "^(Empty|Match|Print|Put|Do|Random|Modulo|Sqrt|Integer\\?|Zero\\?|Integer!|Zero!|First|Rest|Head|Tail|Push|Empty\\?|Join|String-length|Substring|Regex|Ordinal|Character|Split|Floor|Round|Ceiling|Error|Wait|Stop|Show|Stack|Clear|Unbox|Set|Debug|Begin|Sind|Cosd|Tand|Sin|Cos|Tan|Exp|Log|Ln|Asind|Acosd|Atand|Asin|Acos|Atan|Sinhd|Coshd|Tanhd|Sinh|Cosh|Tanh|Dict|Insert|Get|Parameters|Input|Open|Read-file|Close|Path|Drop|Prepend|Index|All|Discard|None|Append|Swap|Fold|Prints|Times|Range|Twin|Take|Triplet|Min|Reverse|Filter|Max|When|Case|Map|Puts|Sort|Assert|Length|)$"))

((identifier) @operator (#match? @operator "^(\\+|-|\\*|/|>|<|<=|>=|==|!=|\\^)$"))

((identifier) @keyword.operator
 (#match? @keyword.operator "^(Not|And|Or|Xor)$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(List|Box|Number|Number!|String!|List!|Block!|Boolean!|Symbol!|Box!|Io!|Any!|Number?|String?|List?|Block?|Boolean?|Symbol?|Box?|Io?|Any?|)$"))

(identifier) @variable
