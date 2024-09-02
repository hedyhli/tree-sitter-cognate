module.exports = grammar({
  name: 'cognate',

  extras: $ => [
    $.inline_comment,
    $.multiline_comment,
    $.line_comment,
    /\s/,  // FIXME: How whitespace-sensitive is Cognate?
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => $._many_statements,

    /* Statements */
    _statement: $ => repeat1(choice($.identifier, $._literal, $.block)),
    statement: $ => seq($._statement, ';'),
    _many_statements: $ => seq(repeat($.statement), alias($._statement, $.statement), optional(';')),

    block: $ => seq('(', optional($._many_statements), ')'),

    /* Literals */
    number: $ => token(choice(
      /-?[0-9]+/,
      /-?[0-9]+\.[0-9]+/,
    )),

    string: $ => seq(
      '"',
      repeat(choice($._string_content, $.escape_sequence)),
      token.immediate('"'),
    ),

    _string_content: _ => token.immediate(prec(1, /(\\[^abtnvfr\\"]|[^\n"\\])+/)),
    escape_sequence: _ => token.immediate(/\\[abtnvfr\\"]/),

    symbol: $ => /\\[a-zA-Z0-9-?!'+/*>=<^]+/,
    boolean: $ => choice(/T[Rr][Uu][Ee]/, /F[Aa][Ll][Ss][Ee]/),

    _literal: $ => choice($.number, $.string, $.symbol, $.boolean),

    identifier: $ => /[A-Z-?!'+/*>=<^\.][a-zA-Z0-9-?!'+/*>=<^\.]*/,

    /* Others */
    line_comment: $ => token(seq('~~', /[^\r\n]*/)),
    // TODO: Join multiple inline comment words together (adding a repeat1() here panics)
    inline_comment: $ => /[a-z][A-Za-z0-9-?!'+/*>=<^]*/,
    multiline_comment: $ => token(seq('~', repeat1(/[^~]/), '~')),
  }
});
