-- vim.filetype.add({ extension = { cog = "cognate" } })

require("nvim-treesitter.parsers").get_parser_configs().cognate = {
  install_info = {
    url = "https://github.com/hedyhli/tree-sitter-cognate",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "cognate",
}

vim.api.nvim_create_autocmd("FileType", {
  pattern = "cognate",
  callback = function(event) vim.bo[event.buf].commentstring = "~~ %s" end,
})

local mod, ok
-- Comment.nvim
ok, mod = pcall(require, "Comment.ft")
if ok then
  mod.set("cognate", {"~~ %s", "~%s~"})
end
-- kommentary
ok, mod = pcall(require, "kommentary.config")
if ok then
  mod.configure_language("cognate", {
      single_line_comment_string = "~~",
      multi_line_comment_strings = {"~", "~"},
  })
end
