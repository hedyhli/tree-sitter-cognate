(number) @constant.numeric
(string) @string
(escape_sequence) @constant.character.escape
(symbol) @string.special.symbol
(boolean) @constant.builtin.boolean

(inline_comment) @comment.inline
(line_comment) @comment.line
(multiline_comment) @comment.block


["(" ")"] @punctuation.bracket
";" @punctuation.special

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
 (#match? @function.builtin
 ;;BEGIN
 "^(Empty|Match|Print|Put|Random|Modulo|Sqrt|Integer\\?|Zero\\?|First|Rest|Push|Empty\\?|Join|Substring|Regex|Regex-match|Ordinal|Character|Split|Uppercase|Lowercase|Floor|Round|Ceiling|Abs|Error|Wait|Stop|Show|Stack|Clear|Unbox|Begin|Sind|Cosd|Tand|Sin|Cos|Tan|Exp|Log|Ln|Asind|Acosd|Atand|Asin|Acos|Atan|Sinhd|Coshd|Tanhd|Sinh|Cosh|Tanh|Table|Insert|Remove|\\.|Has|Values|Keys|Length|Parameters|Input|Open|Read-file|Read-line|Close|Path|Seek|Drop|Prepend|Index|All|Discard|None|Append|Swap|Fold|Prints|Times|Range|Twin|Take|Triplet|Min|Reverse|Filter|Max|Map|Puts|Sort|Assert|Length|Of)$"
 ;;END
 ))

((identifier) @operator (#match? @operator "^(\\+|-|\\*|/|>|<|<=|>=|==|!=|\\^)$"))

((identifier) @keyword.operator
 (#match? @keyword.operator "^(Not|And|Or|Xor)$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(List|Box|Number|Number!|String!|List!|Block!|Boolean!|Symbol!|Box!|Io!|Any!|Number\?|String\?|List\?|Block\?|Boolean\?|Symbol\?|Box\?|Io\?|Any\?|)$"))

(statement (
  (identifier) @function.builtin (#eq? @function.builtin ".")
  .
  (identifier) @variable.other.member))

(identifier) @variable
