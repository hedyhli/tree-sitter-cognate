module.exports = grammar({
  name: 'cognate',

  extras: $ => [
    $.line_comment,
    $.inline_comment,
    /\s/,  // FIXME: How whitespace-sensitive is Cognate?
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => $._many_statements,
    block: $ => seq('(', $._many_statements, ')'),

    /* Statements */
    statement: $ => seq($._statement, ';'),
    _statement: $ => repeat1(choice($.identifier, $._literal, $.block)),
    _many_statements: $ => seq(repeat($.statement), alias($._statement, $.statement), optional(';')),

    /* Atoms */
    identifier: $ => /[A-Z-?!'+/*>=<^][a-zA-Z0-9-?!'+/*>=<^]*/,
    number: $ => /\d+/,
    string: $ => /".+"/,
    _literal: $ => choice($.number, $.string),

    /* Others things */
    // operator: $ => choice('+', '-', '*', '/', '>=', '<=', '<', '>', '==', '!='),
    line_comment: $ => seq('~~', /[^\r\n]*/),
    // TODO: Join multiple inline comment words together (adding a repeat1() here panics)
    inline_comment: $ => /[a-z][A-Za-z0-9-?!'+/*>=<^]*/,
  }
});
