#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_number = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  anon_sym_DQUOTE2 = 8,
  sym_escape_sequence = 9,
  sym_symbol = 10,
  anon_sym_True = 11,
  anon_sym_False = 12,
  anon_sym_TILDE_TILDE = 13,
  aux_sym_line_comment_token1 = 14,
  sym_inline_comment = 15,
  sym_multiline_comment = 16,
  sym_source_file = 17,
  aux_sym__statement = 18,
  sym_statement = 19,
  sym__many_statements = 20,
  sym_block = 21,
  sym_string = 22,
  sym_boolean = 23,
  sym__literal = 24,
  sym_line_comment = 25,
  aux_sym__many_statements_repeat1 = 26,
  aux_sym_string_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_symbol] = "symbol",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_inline_comment] = "inline_comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_statement] = "statement",
  [sym__many_statements] = "_many_statements",
  [sym_block] = "block",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__literal] = "_literal",
  [sym_line_comment] = "line_comment",
  [aux_sym__many_statements_repeat1] = "_many_statements_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_symbol] = sym_symbol,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_inline_comment] = sym_inline_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_statement] = sym_statement,
  [sym__many_statements] = sym__many_statements,
  [sym_block] = sym_block,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__literal] = sym__literal,
  [sym_line_comment] = sym_line_comment,
  [aux_sym__many_statements_repeat1] = aux_sym__many_statements_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
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
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__many_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
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
  [aux_sym_string_repeat1] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'!', '!'}, {'\'', '\''}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'<', '?'}, {'A', 'Z'}, {'^', '^'},
  {'a', 'z'},
};

static TSCharacterRange aux_sym_string_token1_character_set_1[] = {
  {0, '!'}, {'#', '['}, {']', '`'}, {'c', 'e'}, {'g', 'm'}, {'o', 'q'}, {'s', 's'}, {'u', 'u'},
  {'w', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '~') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '~') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '~') ADVANCE(29);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '~') ADVANCE(38);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '~', 23,
        '"', 4,
        '\\', 4,
        'a', 4,
        'b', 4,
        'f', 4,
        'n', 4,
        'r', 4,
        't', 4,
        'v', 4,
      );
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 27,
        '\\', 27,
        'a', 27,
        'b', 27,
        'f', 27,
        'n', 27,
        'r', 27,
        't', 27,
        'v', 27,
      );
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 27,
        '\\', 27,
        'a', 27,
        'b', 27,
        'f', 27,
        'n', 27,
        'r', 27,
        't', 27,
        'v', 27,
      );
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 9:
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(28);
      END_STATE();
    case 10:
      if ((!eof && set_contains(aux_sym_string_token1_character_set_1, 9, lookahead))) ADVANCE(23);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(17);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '~') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '~') ADVANCE(25);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(10);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_inline_comment);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_multiline_comment);
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
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 32},
  [28] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(18),
    [sym__many_statements] = STATE(25),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(1),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [2] = {
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(18),
    [sym__many_statements] = STATE(26),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(2),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [3] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(19),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [4] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [5] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_number] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym_symbol] = ACTIONS(35),
    [anon_sym_True] = ACTIONS(41),
    [anon_sym_False] = ACTIONS(41),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [6] = {
    [aux_sym__statement] = STATE(8),
    [sym_statement] = STATE(18),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(6),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(47),
    [sym_number] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_symbol] = ACTIONS(50),
    [anon_sym_True] = ACTIONS(56),
    [anon_sym_False] = ACTIONS(56),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [7] = {
    [aux_sym__statement] = STATE(4),
    [sym_statement] = STATE(18),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(7),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
  [8] = {
    [aux_sym__statement] = STATE(5),
    [sym_block] = STATE(15),
    [sym_string] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__literal] = STATE(15),
    [sym_line_comment] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_symbol] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(15),
    [anon_sym_False] = ACTIONS(15),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [sym_multiline_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(63), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [25] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(67), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [50] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(71), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [75] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(75), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [100] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(79), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [125] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(83), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [150] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(87), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [175] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(91), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(93), 4,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [201] = 6,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(91), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(93), 4,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [227] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(97), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(99), 4,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [249] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(91), 3,
      sym_identifier,
      anon_sym_True,
      anon_sym_False,
    ACTIONS(93), 4,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DQUOTE,
      sym_symbol,
  [271] = 7,
    ACTIONS(101), 1,
      aux_sym_string_token1,
    ACTIONS(103), 1,
      anon_sym_DQUOTE2,
    ACTIONS(105), 1,
      sym_escape_sequence,
    ACTIONS(107), 1,
      anon_sym_TILDE_TILDE,
    STATE(20), 1,
      sym_line_comment,
    STATE(22), 1,
      aux_sym_string_repeat1,
    ACTIONS(109), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [294] = 7,
    ACTIONS(101), 1,
      aux_sym_string_token1,
    ACTIONS(105), 1,
      sym_escape_sequence,
    ACTIONS(107), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE2,
    STATE(20), 1,
      aux_sym_string_repeat1,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(109), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [317] = 6,
    ACTIONS(107), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(113), 1,
      aux_sym_string_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE2,
    ACTIONS(118), 1,
      sym_escape_sequence,
    ACTIONS(109), 2,
      sym_inline_comment,
      sym_multiline_comment,
    STATE(22), 2,
      sym_line_comment,
      aux_sym_string_repeat1,
  [338] = 5,
    ACTIONS(107), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(121), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(109), 2,
      sym_inline_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      anon_sym_DQUOTE2,
      sym_escape_sequence,
  [356] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [370] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [384] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(5), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [398] = 4,
    ACTIONS(107), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(131), 1,
      aux_sym_line_comment_token1,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(109), 2,
      sym_inline_comment,
      sym_multiline_comment,
  [412] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 25,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 75,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 150,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 271,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 398,
  [SMALL_STATE(28)] = 412,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 1, 0, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 3, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__many_statements_repeat1, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
