(statement
  (identifier) @keyword (#match? @keyword "^(Def)$")
  .
  (identifier) @function
  .
  (block) @function.inside) @function.around

[
  (line_comment)
  (multiline_comment)
] @comment.inside

(line_comment)+ @comment.around

(multiline_comment) @comment.around

;; It doesn't seem like selecting "entries" is actualy bound? Alternatively,
;; just use mi) / mim instead to match the parentheses.
; (block (statement)+ @entry.inside) @entry.around
