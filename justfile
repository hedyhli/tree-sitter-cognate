build:
  tree-sitter gen
  tree-sitter build

# Link queries and parser for neovim
inspect-setup:
  mkdir ~/.config/nvim/queries
  ln -s $PWD/queries/cognate ~/.config/nvim/queries/cognate
  nvim "+luafile $PWD/test/init.lua" "+set ft=cognate" "+InspectTree" test/test.cog

# InspectTree using nvim-treesitter
inspect:
  nvim "+set ft=cognate" "+InspectTree" test/test.cog
