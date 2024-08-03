# tree-sitter-cognate

<img src="https://raw.githubusercontent.com/hedyhli/tree-sitter-cognate/main/screenshot.png" width=300/>

The vim plugin is great but for a wider reach of editor support a tree-sitter
grammar is needed. Working on this instead also lets me procrastinate on my
other WIP project, [an online cognate
playground](https://github.com/hedyhli/cognate-playground), for which I've
decided to not simply use a server and a sandbox and wrap around the official
cognate CLI (and instead make everything purely frontend).

My cognate knowledge is extremely, extremely limited partly due to the
unfinished status of the official tutorial, and partly due to my being an
exceptionally slow reader of C source code. I was quite intrugued by ideas in
this language and since no one else seems to be working on these (tree-sitter
and online playground)... Here we are.

## Editor support

### Nvim

Ensure `nvim-treesitter` is installed, then install this repo as a plugin using
your favorite plugin manager (`hedyhli/tree-sitter-cognate`); Parsers and
queries will be automatically set up. Finally either put `cognate` into your
`ensure_installed`, or run `:TSInstall cognate`.

### Emacs

Ensure your version of emacs either has tree-sitter built-in or you have the
package installed.

You then have to build it yourself and put the resulting library in the correct
place depending on your setup (this might be, for instance
`~/path-to-emacs-config/tree-sitter/libtree-sitter-cognate.dylib`.

### Helix

Setup new grammar for cognate files by pointing to this repo, then copy the
query files into the correct runtime directories.

<https://docs.helix-editor.com/guides/adding_languages.html>

### Vim

Consider using the official vim plugin for vim's regex-based syntax
highlighting: <https://github.com/cognate-lang/cognate-vim>.

## TODO

- [ ] Support symbols.
- [x] Support block comments.
- [x] Don't enforce "function" statements -- there's no such thing.
  - Figure out whether to remove "functions" entirely, or treat all identifiers
    as functions.
- [ ] Floating point numbers.

## References

- <https://github.com/cognate-lang/cognate-vscode/blob/master/syntaxes/cognate.tmLanguage.json>
- <https://github.com/cognate-lang/cognate-vim/blob/master/syntax/cognate.vim>
