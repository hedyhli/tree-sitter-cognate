vim.filetype.add({ extension = { cognate = "cognate", cog = "cognate" } })

vim.api.nvim_create_autocmd("FileType", {
  pattern = "cognate",
  callback = function(event) vim.bo[event.buf].commentstring = "~~ %s" end,
})

require("nvim-treesitter.parsers").get_parser_configs().cognate = {
  install_info = {
    url = "https://github.com/hedyhli/tree-sitter-cognate",
    files = { "src/parser.c" },
    branch = "main",
  },
  filetype = "cognate",
}
