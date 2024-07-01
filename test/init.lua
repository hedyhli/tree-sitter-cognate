local root = vim.fn.expand("%:p:h:h")
vim.treesitter.language.add('cognate', { path = root .. "/cognate.dylib" })
-- vim.treesitter.query.set('cognate', 'highlights', io.open(root .. '/queries/cognate/highlights.scm'):read())
