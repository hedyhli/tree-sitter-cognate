vim.filetype.add({ extension = { cog = "cognate" } })

-- FIXME: Is there no way to get the *current* script filename here?
local root = vim.fn.expand("%:p:h")
if vim.o.autochdir then
  root = vim.fn.expand("%:p:h:h")
end
if vim.fn.expand("%:e") == "cog" then
  -- TODO: Other file extensions (than dylib)
  vim.treesitter.language.add('cognate', { path = root .. "/cognate.dylib" })
end
