# tree-sitter-cognate

<img src="https://raw.githubusercontent.com/hedyhli/tree-sitter-cognate/main/screenshot.png" width=500/>

The official regex-based highlighting plugins are great, but for a wider
reach of editor support a tree-sitter grammar is needed.

## Editor setup

### Nvim

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

A library for `cognate-ts-mode` comes with this repository, it supports the
built-in tree-sitter feature for Emacs 29 and above. For other versions,
consider using the official cognate-mode package for emacs, or consult the
documentation on how to add a new grammar for the tree-sitter package you
are using.

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

Setup new grammar for cognate files by pointing to this repo, then copy the
query files into the correct runtime directories.

<https://docs.helix-editor.com/guides/adding_languages.html>

### Vim

Consider using the official vim plugin for vim's regex-based syntax
highlighting: <https://github.com/cognate-lang/cognate-vim>.

## TODO

- [x] Support symbols.
- [x] Support block comments.
- [x] Don't enforce "function" statements -- there's no such thing.
- [x] Floating point numbers.
- [ ] String escapes.

## References

- <https://github.com/cognate-lang/cognate-vscode/blob/master/syntaxes/cognate.tmLanguage.json>
- <https://github.com/cognate-lang/cognate-vim/blob/master/syntax/cognate.vim>
