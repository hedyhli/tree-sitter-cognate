#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_Def = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_GT_EQ = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_TILDE_TILDE = 15,
  aux_sym_line_comment_token1 = 16,
  aux_sym_inline_comment_token1 = 17,
  aux_sym_inline_comment_token2 = 18,
  sym_number = 19,
  sym_string = 20,
  sym_source_file = 21,
  aux_sym__block = 22,
  sym__statement = 23,
  sym_def_stmt = 24,
  sym_def_body = 25,
  sym_fn_stmt = 26,
  sym__expression_item = 27,
  sym__paren_expression = 28,
  sym_expression = 29,
  sym_operator = 30,
  sym_line_comment = 31,
  sym_inline_comment = 32,
  aux_sym_expression_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_Def] = "Def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_inline_comment_token1] = "inline_comment_token1",
  [aux_sym_inline_comment_token2] = "inline_comment_token2",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [aux_sym__block] = "_block",
  [sym__statement] = "_statement",
  [sym_def_stmt] = "def_stmt",
  [sym_def_body] = "def_body",
  [sym_fn_stmt] = "fn_stmt",
  [sym__expression_item] = "_expression_item",
  [sym__paren_expression] = "_paren_expression",
  [sym_expression] = "expression",
  [sym_operator] = "operator",
  [sym_line_comment] = "line_comment",
  [sym_inline_comment] = "inline_comment",
  [aux_sym_expression_repeat1] = "expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_Def] = anon_sym_Def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_inline_comment_token1] = aux_sym_inline_comment_token1,
  [aux_sym_inline_comment_token2] = aux_sym_inline_comment_token2,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [aux_sym__block] = aux_sym__block,
  [sym__statement] = sym__statement,
  [sym_def_stmt] = sym_def_stmt,
  [sym_def_body] = sym_def_body,
  [sym_fn_stmt] = sym_fn_stmt,
  [sym__expression_item] = sym__expression_item,
  [sym__paren_expression] = sym__paren_expression,
  [sym_expression] = sym_expression,
  [sym_operator] = sym_operator,
  [sym_line_comment] = sym_line_comment,
  [sym_inline_comment] = sym_inline_comment,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_comment_token2] = {
    .visible = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_def_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_def_body] = {
    .visible = true,
    .named = true,
  },
  [sym_fn_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_item] = {
    .visible = false,
    .named = true,
  },
  [sym__paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_body = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_body, 2},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 5,
        '(', 8,
        ')', 9,
        '*', 12,
        '+', 10,
        '-', 11,
        '/', 13,
        ';', 7,
        '<', 16,
        '=', 2,
        '>', 17,
        '~', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '~') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if ((set_contains(sym_identifier_character_set_1, 9, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if ((set_contains(sym_identifier_character_set_1, 9, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_inline_comment_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if ((set_contains(sym_identifier_character_set_1, 9, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_inline_comment_token2);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if ((set_contains(sym_identifier_character_set_1, 9, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
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
      if (lookahead == 'D') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_Def);
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
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {(TSStateId)(-1)},
  [27] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_inline_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_Def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [aux_sym__block] = STATE(12),
    [sym__statement] = STATE(15),
    [sym_def_stmt] = STATE(20),
    [sym_fn_stmt] = STATE(20),
    [sym_line_comment] = STATE(1),
    [sym_inline_comment] = STATE(1),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_Def] = ACTIONS(7),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
  },
  [2] = {
    [sym__expression_item] = STATE(8),
    [sym__paren_expression] = STATE(9),
    [sym_expression] = STATE(23),
    [sym_operator] = STATE(9),
    [sym_line_comment] = STATE(2),
    [sym_inline_comment] = STATE(2),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
  },
  [3] = {
    [sym__expression_item] = STATE(8),
    [sym__paren_expression] = STATE(9),
    [sym_operator] = STATE(9),
    [sym_line_comment] = STATE(3),
    [sym_inline_comment] = STATE(3),
    [aux_sym_expression_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(32),
    [anon_sym_GT] = ACTIONS(32),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
  },
  [4] = {
    [sym__expression_item] = STATE(8),
    [sym__paren_expression] = STATE(9),
    [sym_expression] = STATE(19),
    [sym_operator] = STATE(9),
    [sym_line_comment] = STATE(4),
    [sym_inline_comment] = STATE(4),
    [aux_sym_expression_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
  },
  [5] = {
    [sym__expression_item] = STATE(8),
    [sym__paren_expression] = STATE(9),
    [sym_operator] = STATE(9),
    [sym_line_comment] = STATE(5),
    [sym_inline_comment] = STATE(5),
    [aux_sym_expression_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(11),
    [sym_string] = ACTIONS(11),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym_inline_comment] = STATE(6),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_GT_EQ] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(39),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
  },
  [7] = {
    [sym_line_comment] = STATE(7),
    [sym_inline_comment] = STATE(7),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
  },
  [8] = {
    [sym_line_comment] = STATE(8),
    [sym_inline_comment] = STATE(8),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [sym_inline_comment] = STATE(9),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [sym_inline_comment] = STATE(10),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [aux_sym_inline_comment_token1] = ACTIONS(5),
    [aux_sym_inline_comment_token2] = ACTIONS(7),
    [sym_number] = ACTIONS(55),
    [sym_string] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_Def,
    STATE(15), 1,
      sym__statement,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
    STATE(11), 3,
      aux_sym__block,
      sym_line_comment,
      sym_inline_comment,
  [32] = 9,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__block,
    STATE(15), 1,
      sym__statement,
    ACTIONS(7), 2,
      anon_sym_Def,
      aux_sym_inline_comment_token2,
    STATE(12), 2,
      sym_line_comment,
      sym_inline_comment,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [63] = 9,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym__block,
    STATE(15), 1,
      sym__statement,
    ACTIONS(7), 2,
      anon_sym_Def,
      aux_sym_inline_comment_token2,
    STATE(13), 2,
      sym_line_comment,
      sym_inline_comment,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [94] = 8,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__block,
    STATE(15), 1,
      sym__statement,
    ACTIONS(7), 2,
      anon_sym_Def,
      aux_sym_inline_comment_token2,
    STATE(14), 2,
      sym_line_comment,
      sym_inline_comment,
    STATE(20), 2,
      sym_def_stmt,
      sym_fn_stmt,
  [122] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      anon_sym_Def,
      sym_identifier,
    STATE(15), 2,
      sym_line_comment,
      sym_inline_comment,
  [144] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      anon_sym_Def,
      sym_identifier,
    STATE(16), 2,
      sym_line_comment,
      sym_inline_comment,
  [166] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_def_body,
    STATE(17), 2,
      sym_line_comment,
      sym_inline_comment,
  [186] = 5,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(81), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(83), 1,
      aux_sym_line_comment_token1,
    ACTIONS(85), 1,
      aux_sym_inline_comment_token1,
    STATE(18), 2,
      sym_line_comment,
      sym_inline_comment,
  [203] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    STATE(19), 2,
      sym_line_comment,
      sym_inline_comment,
  [220] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(20), 2,
      sym_line_comment,
      sym_inline_comment,
  [237] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(21), 2,
      sym_line_comment,
      sym_inline_comment,
  [254] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_line_comment,
      sym_inline_comment,
  [271] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(23), 2,
      sym_line_comment,
      sym_inline_comment,
  [288] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(24), 2,
      sym_line_comment,
      sym_inline_comment,
  [305] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      aux_sym_inline_comment_token1,
    ACTIONS(7), 1,
      aux_sym_inline_comment_token2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(25), 2,
      sym_line_comment,
      sym_inline_comment,
  [322] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [326] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 32,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 94,
  [SMALL_STATE(15)] = 122,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 203,
  [SMALL_STATE(20)] = 220,
  [SMALL_STATE(21)] = 237,
  [SMALL_STATE(22)] = 254,
  [SMALL_STATE(23)] = 271,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 305,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 326,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_stmt, 1, 0, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren_expression, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren_expression, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_item, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_item, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block, 2, 0, 0), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block, 2, 0, 0), SHIFT_REPEAT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_stmt, 2, 0, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_stmt, 3, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_body, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 1, 0, 0),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
