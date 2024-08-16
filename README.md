# tree-sitter-cognate

[![Checks](https://github.com/hedyhli/tree-sitter-cognate/actions/workflows/checks.yml/badge.svg)](https://github.com/hedyhli/tree-sitter-cognate/actions/workflows/checks.yml)

[What is Cognate?](https://cognate-lang.github.io)

<img src="https://raw.githubusercontent.com/hedyhli/tree-sitter-cognate/main/screenshot.png" width=500/>

The official regex-based highlighting plugins are great, but for a wider
reach of editor support a tree-sitter grammar is needed which gives way to
a more unified approach to supporting indents and code-folding rules.

## Editor setup

### Nvim

Note that the built-in tree-sitter support requires Nvim 0.9+.

- [X] Highlights
- [X] Toggle line comments
- [X] Toggle block comments (for `Comment.nvim` and `kommentary`)
- [X] Injection language for comments
- [X] Indents
- [X] Folds
- [X] Locals
- [X] [Text objects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)
  - [X] Function
  - [X] Block
  - [X] Assignment
  - [X] Statement
  - [X] Comment
  - [X] Number
- [X] [Context](https://github.com/nvim-treesitter/nvim-treesitter-context)

Ensure `nvim-treesitter` is installed, then install this repo as a plugin using
your favorite plugin manager (`hedyhli/tree-sitter-cognate`);

Lazy.nvim example:

```lua
{
  "hedyhli/tree-sitter-cognate",
  dependencies = { "nvim-treesitter/nvim-treesitter" },
  enabled = vim.fn.has('nvim-0.9') == 1,
},
```

If you use `Comment.nvim` or `kommentary`, they will automatically be set up to
be usable for commenting for both line and blocks in Cognate in addition to
`commentstring`.

Parsers and queries will be automatically set up. Finally either put `cognate`
into your `ensure_installed`, or run `:TSInstall cognate`.

### Emacs

- [X] Highlights
- [X] Toggle line comments
- [ ] Toggle block comments
- [X] Indents
- [ ] Imenu

A library for `cognate-ts-mode` is included in this repository, it supports the
built-in tree-sitter feature for Emacs 29 and above. The major mode supports
a few other features using tree-sitter in addition to highlighting, as listed
above.

For other versions, consider using the official cognate-mode package for emacs
(which uses regex-based syntax highlighting), or consult the documentation on
how to add a new grammar for the tree-sitter package you are using.

Details on how to set up tree-sitter-cognate for Emacs 29+ is as follows.

### Step 1

Install the grammar using `M-x treesit-install-language-grammar`, enter
`cognate`, the URL `https://github.com/hedyhli/tree-sitter-cognate`, and
accept default options.

### Step 2

Install this repository as a package using your package manager.

Elpaca example:

```elisp
(use-package cognate-ts-mode
  :ensure (:host "github" :repo "hedyhli/tree-sitter-cognate"))
```

Note that this package is not currently published on ELPA/MELPA.

### Step 3

A restart of emacs might be required after installation. Finally, test
the syntax highlighting on a Cognate file. All `*.cog` files are set
up to automatically use `cognate-ts-mode`.

### Helix

- [X] Highlights
- [X] Toggle line comments
- [X] Toggle block comments
- [X] Injection language for comments
- [X] Indents
- [X] Text objects
  - [X] Functions
  - [X] Comments
  - [ ] Blocks (note that you can simply use `mi)` to select parenthesis)

Add a new language by appending the contents of `helix/language.toml` in this
repository.

Next, download and install the grammar:
```
hx -g fetch
hx -g build
```

Then copy (or link) queries files from `helix/` into the correct
runtime directory. For instance, `helix/queries/cognate` (of this repo) to
`~/.config/helix/runtime/queries/cognate`. Note that Helix should use queries
under the **`helix/`** directory in this repository.

### Vim

Consider using the official vim plugin for vim's regex-based syntax
highlighting: <https://github.com/cognate-lang/cognate-vim>.

## TODO

- [x] Support symbols.
- [x] Support block comments.
- [x] Don't enforce "function" statements -- there's no such thing.
- [x] Floating point numbers.
- [x] String escapes.
- [ ] Case insensitivity for indentifiers (booleans in grammar, keywords
  everywhere else)
- [ ] Use cognac's `builtins.c` rather than hardcoding builtins

## References

- <https://github.com/cognate-lang/cognate-vscode/blob/master/syntaxes/cognate.tmLanguage.json>
- <https://github.com/cognate-lang/cognate-vim/blob/master/syntax/cognate.vim>
