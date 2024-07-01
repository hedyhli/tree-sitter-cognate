local root = vim.fn.expand("%:p:h:h")
-- TODO: Other file extensions
vim.treesitter.language.add('cognate', { path = root .. "/cognate.dylib" })
