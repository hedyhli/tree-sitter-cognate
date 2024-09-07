set shell := ["bash", "-c"]

build:
  pnpm build
  make

wasm:
  pnpm tree-sitter build --wasm

test:
  pnpm test

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

update-builtins:
  ../cognate/cognac generate-builtins.cog
  cp ../cognate/src/builtins.c builtins.c
  ./generate-builtins | awk -v nvim=queries/cognate/highlights.scm -v helix=helix/queries/cognate/highlights.scm -v emacs=cognate-ts-mode.el -f update-builtins.awk
  rm builtins.c
  rm generate-builtins
  rm generate-builtins.c
