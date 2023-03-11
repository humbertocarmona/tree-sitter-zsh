#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_EQ_TILDE = 1,
  anon_sym_EQ_EQ = 2,
  sym_word = 3,
  anon_sym_SEMI = 4,
  anon_sym_SEMI_SEMI = 5,
  anon_sym_LF = 6,
  anon_sym_AMP = 7,
  sym_program = 8,
  sym__statements = 9,
  sym__statement = 10,
  sym_command = 11,
  sym_command_name = 12,
  sym__literal = 13,
  sym__terminator = 14,
  aux_sym__statements_repeat1 = 15,
  aux_sym_command_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_EQ_EQ] = "==",
  [sym_word] = "word",
  [anon_sym_SEMI] = ";",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_LF] = "\n",
  [anon_sym_AMP] = "&",
  [sym_program] = "program",
  [sym__statements] = "_statements",
  [sym__statement] = "_statement",
  [sym_command] = "command",
  [sym_command_name] = "command_name",
  [sym__literal] = "_literal",
  [sym__terminator] = "_terminator",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_word] = sym_word,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_program] = sym_program,
  [sym__statements] = sym__statements,
  [sym__statement] = sym__statement,
  [sym_command] = sym_command,
  [sym_command_name] = sym_command_name,
  [sym__literal] = sym__literal,
  [sym__terminator] = sym__terminator,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_argument, 1, .inherited = true},
    {field_name, 0},
  [4] =
    {field_argument, 0},
    {field_argument, 1},
  [6] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '~') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(16),
    [sym__statements] = STATE(17),
    [sym__statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_command_name] = STATE(2),
    [sym__literal] = STATE(5),
    [aux_sym__statements_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_word] = ACTIONS(5),
  },
  [2] = {
    [sym__literal] = STATE(6),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_EQ_TILDE] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_SEMI_SEMI] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(13),
  },
  [3] = {
    [sym__literal] = STATE(6),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_EQ_TILDE] = ACTIONS(9),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_SEMI_SEMI] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(17),
  },
  [4] = {
    [sym__literal] = STATE(6),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_EQ_TILDE] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [sym_word] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_SEMI_SEMI] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(31), 6,
      anon_sym_EQ_TILDE,
      anon_sym_EQ_EQ,
      sym_word,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [13] = 2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 6,
      anon_sym_EQ_TILDE,
      anon_sym_EQ_EQ,
      sym_word,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [26] = 2,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(39), 6,
      anon_sym_EQ_TILDE,
      anon_sym_EQ_EQ,
      sym_word,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [39] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym__terminator,
    ACTIONS(43), 3,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [54] = 5,
    ACTIONS(5), 1,
      sym_word,
    STATE(2), 1,
      sym_command_name,
    STATE(5), 1,
      sym__literal,
    STATE(11), 1,
      aux_sym__statements_repeat1,
    STATE(10), 2,
      sym__statement,
      sym_command,
  [71] = 4,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym__terminator,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [86] = 5,
    ACTIONS(53), 1,
      sym_word,
    STATE(2), 1,
      sym_command_name,
    STATE(5), 1,
      sym__literal,
    STATE(11), 1,
      aux_sym__statements_repeat1,
    STATE(12), 2,
      sym__statement,
      sym_command,
  [103] = 3,
    ACTIONS(58), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__terminator,
    ACTIONS(56), 3,
      anon_sym_SEMI,
      anon_sym_SEMI_SEMI,
      anon_sym_AMP,
  [115] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      sym_word,
  [122] = 2,
    ACTIONS(62), 1,
      sym_word,
    STATE(7), 1,
      sym__literal,
  [129] = 2,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [140] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(60), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 71,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 140,
  [SMALL_STATE(18)] = 144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 3),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zsh(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
