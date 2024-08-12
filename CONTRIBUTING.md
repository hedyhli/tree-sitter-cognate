## Setup

- `tree-sitter init-config`
- `pnpm install`
- (For testing with nvim-treesitter) `just inspect-setup`

## Development

- Edit `grammar.js`
- Update `test/`
- `just`
- Inspect tree for `test/test.cog` with neovim: `just inspect`
  - With an official example: `:e ../path/to/cognate/examples/prime.cog`
- `just test`
