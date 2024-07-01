default:
  tree-sitter gen && tree-sitter build

# InspectTree using nvim-treesitter
inspect-setup:
  nvim "+luafile $PWD/test/init.lua" "+set ft=cognate" "+InspectTree" test/test.cog

inspect:
  nvim "+set ft=cognate" "+InspectTree" test/test.cog
