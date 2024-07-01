module.exports = grammar({
  name: 'cognate',

  extras: $ => [
    $.line_comment,
    $.inline_comment,
    /\s/,  // FIXME: How whitespace-sensitive is Cognate?
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => $._block,
    _block: $ => repeat1($._statement),
    /* Statements */
    _statement: $ => seq(
      choice(
        $.def_stmt,
        $.fn_stmt,
      ),
      ';'
    ),
    def_stmt: $ => seq(
      'Def',
      field("name", $.identifier),
      field("body", $.def_body),
    ),
    def_body: $ => seq('(', $._block,')'),
    fn_stmt: $ => seq(
      field("name", $.identifier),
      optional(field("args", $.expression)),
    ),

    /* Expressions */
    _expression_item: $ => choice(
      $._paren_expression,
      $.number,
      $.string,
      $.identifier,
      $.operator,
    ),
    _paren_expression: $ => seq('(', optional($.expression), ')'),
    expression: $ => repeat1($._expression_item),

    operator: $ => choice('+', '-', '*', '/', '>=', '<=', '<', '>', '=='),
    line_comment: $ => seq('~~', /[^\r\n]*/),
    // TODO: Support A-Z after the initial a-z *and* spaces in between.
    inline_comment: $ => choice(/[a-z][ a-z0-9-?!'+/*>=<^]*[a-z-?!'+/*>=<^]/, /[a-z]/),
    identifier: $ => /[A-Z][a-zA-Z0-9-?!'+/*>=<^]*/,
    number: $ => /\d+/,
    string: $ => /".+"/,
  }
});
