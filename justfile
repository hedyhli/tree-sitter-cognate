set shell := ["bash", "-c"]

build:
  tree-sitter gen
  tree-sitter build
  make

wasm:
  tree-sitter build --wasm

test:
  tree-sitter test

# Link queries and parser for neovim
inspect-setup:
  #!/usr/bin/env bash
  if ! [ -d ~/.config/nvim/queries ]; then
    echo
    echo '>>>' mkdir ~/.config/nvim/queries
    echo
    mkdir ~/.config/nvim/queries
  fi
  if ! [ -d ~/.config/nvim/queries/cognate ]; then
    echo
    echo '>>>' ln -s \$PWD/queries/cognate ~/.config/nvim/queries/cognate
    echo
    ln -s $PWD/queries/cognate ~/.config/nvim/queries/cognate
  else
    echo "queries/cognate already in neovim runtime, will not be symlinking!"
  fi
  if ! [ -f .nvim.lua ]; then
    echo
    echo '>>>' cp .example.nvim.lua .nvim.lua
    echo
    cp .example.nvim.lua .nvim.lua
    echo "Press enter to continue to nvim, where you will be asked to trust '.nvim.lua'"
    echo "You should then see syntax highlighting in the cognate file."
    read -p "(ctrl-c to quit) "
    nvim test/test.cog
  else
    echo ".nvim.lua already exists, will not be copying .example.nvim.lua"
  fi
  echo
  echo "done"

# InspectTree using nvim-treesitter
inspect:
  nvim "+InspectTree" test/test.cog
