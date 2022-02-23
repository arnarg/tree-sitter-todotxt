#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_x = 2,
  sym_date = 3,
  sym_project = 4,
  sym_context = 5,
  sym_kv = 6,
  sym_priority = 7,
  sym__word = 8,
  sym_source_file = 9,
  sym_task = 10,
  sym_done_task = 11,
  sym__task = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym__task_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_x] = "x",
  [sym_date] = "date",
  [sym_project] = "project",
  [sym_context] = "context",
  [sym_kv] = "kv",
  [sym_priority] = "priority",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_task] = "task",
  [sym_done_task] = "done_task",
  [sym__task] = "_task",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__task_repeat1] = "_task_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_x] = anon_sym_x,
  [sym_date] = sym_date,
  [sym_project] = sym_project,
  [sym_context] = sym_context,
  [sym_kv] = sym_kv,
  [sym_priority] = sym_priority,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_task] = sym_task,
  [sym_done_task] = sym_done_task,
  [sym__task] = sym__task,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__task_repeat1] = aux_sym__task_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_kv] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_done_task] = {
    .visible = true,
    .named = true,
  },
  [sym__task] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__task_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_kv);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_priority);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(10);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [sym_context] = ACTIONS(1),
    [sym_kv] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_task] = STATE(14),
    [sym_done_task] = STATE(14),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym__task_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_x] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_kv] = ACTIONS(9),
    [sym_priority] = ACTIONS(11),
    [sym__word] = ACTIONS(9),
  },
  [2] = {
    [sym_task] = STATE(14),
    [sym_done_task] = STATE(14),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__task_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_x] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_kv] = ACTIONS(9),
    [sym_priority] = ACTIONS(11),
    [sym__word] = ACTIONS(9),
  },
  [3] = {
    [sym_task] = STATE(14),
    [sym_done_task] = STATE(14),
    [sym__task] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym__task_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(17),
    [sym_date] = ACTIONS(20),
    [sym_project] = ACTIONS(23),
    [sym_context] = ACTIONS(23),
    [sym_kv] = ACTIONS(23),
    [sym_priority] = ACTIONS(26),
    [sym__word] = ACTIONS(23),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(29),
    [sym_date] = ACTIONS(29),
    [sym_project] = ACTIONS(29),
    [sym_context] = ACTIONS(29),
    [sym_kv] = ACTIONS(29),
    [sym_priority] = ACTIONS(29),
    [sym__word] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(31), 1,
      sym_date,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(18), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [16] = 4,
    ACTIONS(33), 1,
      sym_date,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(16), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [32] = 4,
    ACTIONS(35), 1,
      sym_date,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(17), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [48] = 3,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym__task_repeat1,
    ACTIONS(39), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [61] = 3,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(19), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [74] = 3,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(17), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [87] = 3,
    ACTIONS(41), 1,
      anon_sym_LF,
    STATE(11), 1,
      aux_sym__task_repeat1,
    ACTIONS(43), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [100] = 3,
    STATE(8), 1,
      aux_sym__task_repeat1,
    STATE(20), 1,
      sym__task,
    ACTIONS(9), 4,
      sym_project,
      sym_context,
      sym_kv,
      sym__word,
  [113] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(48), 1,
      anon_sym_LF,
  [121] = 1,
    ACTIONS(50), 1,
      anon_sym_LF,
  [125] = 1,
    ACTIONS(52), 1,
      anon_sym_LF,
  [129] = 1,
    ACTIONS(54), 1,
      anon_sym_LF,
  [133] = 1,
    ACTIONS(56), 1,
      anon_sym_LF,
  [137] = 1,
    ACTIONS(58), 1,
      anon_sym_LF,
  [141] = 1,
    ACTIONS(60), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 32,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 74,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 113,
  [SMALL_STATE(14)] = 117,
  [SMALL_STATE(15)] = 121,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 129,
  [SMALL_STATE(18)] = 133,
  [SMALL_STATE(19)] = 137,
  [SMALL_STATE(20)] = 141,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__task, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__task_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__task_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_done_task, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todotxt(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
