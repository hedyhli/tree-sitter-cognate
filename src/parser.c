#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_SEMI = 4,
  sym_number = 5,
  sym_string = 6,
  anon_sym_TILDE_TILDE = 7,
  aux_sym_line_comment_token1 = 8,
  sym_inline_comment = 9,
  sym_source_file = 10,
  sym_block = 11,
  sym_statement = 12,
  aux_sym__statement = 13,
  sym__many_statements = 14,
  sym__literal = 15,
  sym_line_comment = 16,
  aux_sym__many_statements_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_inline_comment] = "inline_comment",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [aux_sym__statement] = "_statement",
  [sym__many_statements] = "_many_statements",
  [sym__literal] = "_literal",
  [sym_line_comment] = "line_comment",
  [aux_sym__many_statements_repeat1] = "_many_statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_inline_comment] = sym_inline_comment,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [aux_sym__statement] = aux_sym__statement,
  [sym__many_statements] = sym__many_statements,
  [sym__literal] = sym__literal,
  [sym_line_comment] = sym_line_comment,
  [aux_sym__many_statements_repeat1] = aux_sym__many_statements_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym__many_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__many_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_statement,
  },
  [2] = {
    [1] = sym_statement,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__statement, 2,
    aux_sym__statement,
    sym_statement,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'!', '!'}, {'\'', '\''}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'<', '?'}, {'A', 'Z'}, {'^', '^'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '~') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_inline_comment);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 0},
  [20] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_block] = STATE(10),
    [sym_statement] = STATE(14),
    [aux_sym__statement] = STATE(2),
    [sym__many_statements] = STATE(17),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(1),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_block] = STATE(10),
    [aux_sym__statement] = STATE(5),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_block] = STATE(10),
    [aux_sym__statement] = STATE(5),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_block] = STATE(10),
    [sym_statement] = STATE(14),
    [aux_sym__statement] = STATE(2),
    [sym__many_statements] = STATE(19),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(4),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_block] = STATE(10),
    [aux_sym__statement] = STATE(5),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_block] = STATE(10),
    [sym_statement] = STATE(14),
    [aux_sym__statement] = STATE(3),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(6),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_block] = STATE(10),
    [sym_statement] = STATE(14),
    [aux_sym__statement] = STATE(8),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(7),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_block] = STATE(10),
    [aux_sym__statement] = STATE(5),
    [sym__literal] = STATE(10),
    [sym_line_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(41),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(51), 4,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
  [20] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(51), 4,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
  [40] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(55), 4,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
  [56] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(51), 4,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
  [72] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_line_comment,
  [85] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_line_comment,
  [98] = 4,
    ACTIONS(61), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(63), 1,
      aux_sym_line_comment_token1,
    ACTIONS(65), 1,
      sym_inline_comment,
    STATE(18), 1,
      sym_line_comment,
  [111] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_line_comment,
  [124] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 20,
  [SMALL_STATE(14)] = 40,
  [SMALL_STATE(15)] = 56,
  [SMALL_STATE(16)] = 72,
  [SMALL_STATE(17)] = 85,
  [SMALL_STATE(18)] = 98,
  [SMALL_STATE(19)] = 111,
  [SMALL_STATE(20)] = 124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 1, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 3, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cognate(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
