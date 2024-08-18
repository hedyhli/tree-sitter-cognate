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
((identifier) @keyword.builtin
 (#match? @keyword.builtin "^(Path|Close|Read-file|Open|Input|Parameters|Get|Insert|Dict|Tanh|Cosh|Sinh|Tanhd|Coshd|Sinhd|Atan|Acos|Asin|Atand|Acosd|Asind|Ln|Log|Exp|Tan|Cos|Sin|Tand|Cosd|Sind|Begin|Debug|Set|Unbox|Box|Clear|Stack|Show|Stop|Wait|Number|List|Error|Ceiling|Round|Floor|Uppercase|Split|Character|Ordinal|Regex|Substring|String-length|Join|Empty\\?|Push|Tail|Head|Rest|First|Boolean!|Block!|String!|List!|Any!|Zero!|Integer!|Io!|Symbol!|Number!|Boolean\\?|Block\\?|String\\?|List\\?|Any\\?|Zero\\?|Integer\\?|Symbol\\?|Io\\?|Number\\?|Not|Xor|And|Or|Sqrt|Modulo|Random|Do|Put|Print|Match|False|True|Empty|Drop|Prepend|Index|All|Discard|None|Append|Swap|Fold|Prints|Times|Range|Twin|Take|Triplet|Min|Reverse|Filter|Max|When|Case|Map|Puts|Sort|Assert|Length|)$"))

((identifier) @operator (#match? @operator "^(\\+|-|\\*|/|>|<|<=|>=|==|!=)$"))

((identifier) @keyword.operator
 (#match? @keyword.operator "^(Modulo|Exp|Not|And|Or|Xor)$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(List|Box|Regex|Character|Number)$"))

(identifier) @variable
