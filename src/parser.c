#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_comment = 2,
  anon_sym_AMP = 3,
  anon_sym_SLASH = 4,
  aux_sym__keyword_atomic_species_token1 = 5,
  aux_sym__keyword_atomic_positions_token1 = 6,
  aux_sym__keyword_cell_parameters_token1 = 7,
  aux_sym__keyword_k_points_token1 = 8,
  aux_sym__keyword_hubbard_token1 = 9,
  anon_sym_EQ = 10,
  anon_sym_COMMA = 11,
  aux_sym_boolean_token1 = 12,
  aux_sym_boolean_token2 = 13,
  aux_sym_boolean_token3 = 14,
  aux_sym_boolean_token4 = 15,
  sym_number = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_token1 = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_string_token2 = 20,
  aux_sym_string_token3 = 21,
  sym_keyword = 22,
  sym_identifier = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_document = 26,
  sym__namelist_begin = 27,
  sym__namelist_end = 28,
  sym__keyword_atomic_species = 29,
  sym__keyword_atomic_positions = 30,
  sym__keyword_cell_parameters = 31,
  sym__keyword_k_points = 32,
  sym__keyword_hubbard = 33,
  sym__op_eq = 34,
  sym__op_comma = 35,
  sym_boolean = 36,
  sym_string = 37,
  sym_pair = 38,
  sym_vec3 = 39,
  sym__str_vec3 = 40,
  sym_namelist = 41,
  sym_atomic_species = 42,
  sym_atomic_positions = 43,
  sym_k_points = 44,
  sym_hubbard = 45,
  sym__block_matrix = 46,
  sym_cell_parameters = 47,
  aux_sym_document_repeat1 = 48,
  aux_sym_pair_repeat1 = 49,
  aux_sym_namelist_repeat1 = 50,
  aux_sym_namelist_repeat2 = 51,
  aux_sym_atomic_species_repeat1 = 52,
  aux_sym_atomic_positions_repeat1 = 53,
  aux_sym_k_points_repeat1 = 54,
  aux_sym_hubbard_repeat1 = 55,
  aux_sym__block_matrix_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [anon_sym_AMP] = "namelist",
  [anon_sym_SLASH] = "namelist",
  [aux_sym__keyword_atomic_species_token1] = "keyword",
  [aux_sym__keyword_atomic_positions_token1] = "keyword",
  [aux_sym__keyword_cell_parameters_token1] = "keyword",
  [aux_sym__keyword_k_points_token1] = "keyword",
  [aux_sym__keyword_hubbard_token1] = "keyword",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_boolean_token1] = "boolean_token1",
  [aux_sym_boolean_token2] = "boolean_token2",
  [aux_sym_boolean_token3] = "boolean_token3",
  [aux_sym_boolean_token4] = "boolean_token4",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym_keyword] = "keyword",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_document] = "document",
  [sym__namelist_begin] = "_namelist_begin",
  [sym__namelist_end] = "_namelist_end",
  [sym__keyword_atomic_species] = "_keyword_atomic_species",
  [sym__keyword_atomic_positions] = "_keyword_atomic_positions",
  [sym__keyword_cell_parameters] = "_keyword_cell_parameters",
  [sym__keyword_k_points] = "_keyword_k_points",
  [sym__keyword_hubbard] = "_keyword_hubbard",
  [sym__op_eq] = "_op_eq",
  [sym__op_comma] = "_op_comma",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_pair] = "pair",
  [sym_vec3] = "vec3",
  [sym__str_vec3] = "_str_vec3",
  [sym_namelist] = "namelist",
  [sym_atomic_species] = "atomic_species",
  [sym_atomic_positions] = "atomic_positions",
  [sym_k_points] = "k_points",
  [sym_hubbard] = "hubbard",
  [sym__block_matrix] = "_block_matrix",
  [sym_cell_parameters] = "cell_parameters",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_pair_repeat1] = "pair_repeat1",
  [aux_sym_namelist_repeat1] = "namelist_repeat1",
  [aux_sym_namelist_repeat2] = "namelist_repeat2",
  [aux_sym_atomic_species_repeat1] = "atomic_species_repeat1",
  [aux_sym_atomic_positions_repeat1] = "atomic_positions_repeat1",
  [aux_sym_k_points_repeat1] = "k_points_repeat1",
  [aux_sym_hubbard_repeat1] = "hubbard_repeat1",
  [aux_sym__block_matrix_repeat1] = "_block_matrix_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SLASH] = anon_sym_AMP,
  [aux_sym__keyword_atomic_species_token1] = aux_sym__keyword_atomic_species_token1,
  [aux_sym__keyword_atomic_positions_token1] = aux_sym__keyword_atomic_species_token1,
  [aux_sym__keyword_cell_parameters_token1] = aux_sym__keyword_atomic_species_token1,
  [aux_sym__keyword_k_points_token1] = aux_sym__keyword_atomic_species_token1,
  [aux_sym__keyword_hubbard_token1] = aux_sym__keyword_atomic_species_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [aux_sym_boolean_token3] = aux_sym_boolean_token3,
  [aux_sym_boolean_token4] = aux_sym_boolean_token4,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_keyword] = sym_keyword,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_document] = sym_document,
  [sym__namelist_begin] = sym__namelist_begin,
  [sym__namelist_end] = sym__namelist_end,
  [sym__keyword_atomic_species] = sym__keyword_atomic_species,
  [sym__keyword_atomic_positions] = sym__keyword_atomic_positions,
  [sym__keyword_cell_parameters] = sym__keyword_cell_parameters,
  [sym__keyword_k_points] = sym__keyword_k_points,
  [sym__keyword_hubbard] = sym__keyword_hubbard,
  [sym__op_eq] = sym__op_eq,
  [sym__op_comma] = sym__op_comma,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_pair] = sym_pair,
  [sym_vec3] = sym_vec3,
  [sym__str_vec3] = sym__str_vec3,
  [sym_namelist] = sym_namelist,
  [sym_atomic_species] = sym_atomic_species,
  [sym_atomic_positions] = sym_atomic_positions,
  [sym_k_points] = sym_k_points,
  [sym_hubbard] = sym_hubbard,
  [sym__block_matrix] = sym__block_matrix,
  [sym_cell_parameters] = sym_cell_parameters,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_pair_repeat1] = aux_sym_pair_repeat1,
  [aux_sym_namelist_repeat1] = aux_sym_namelist_repeat1,
  [aux_sym_namelist_repeat2] = aux_sym_namelist_repeat2,
  [aux_sym_atomic_species_repeat1] = aux_sym_atomic_species_repeat1,
  [aux_sym_atomic_positions_repeat1] = aux_sym_atomic_positions_repeat1,
  [aux_sym_k_points_repeat1] = aux_sym_k_points_repeat1,
  [aux_sym_hubbard_repeat1] = aux_sym_hubbard_repeat1,
  [aux_sym__block_matrix_repeat1] = aux_sym__block_matrix_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_atomic_species_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_atomic_positions_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_cell_parameters_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_k_points_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyword_hubbard_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_token4] = {
    .visible = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__namelist_begin] = {
    .visible = false,
    .named = true,
  },
  [sym__namelist_end] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_atomic_species] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_atomic_positions] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_cell_parameters] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_k_points] = {
    .visible = false,
    .named = true,
  },
  [sym__keyword_hubbard] = {
    .visible = false,
    .named = true,
  },
  [sym__op_eq] = {
    .visible = false,
    .named = true,
  },
  [sym__op_comma] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_vec3] = {
    .visible = true,
    .named = true,
  },
  [sym__str_vec3] = {
    .visible = false,
    .named = true,
  },
  [sym_namelist] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_species] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_positions] = {
    .visible = true,
    .named = true,
  },
  [sym_k_points] = {
    .visible = true,
    .named = true,
  },
  [sym_hubbard] = {
    .visible = true,
    .named = true,
  },
  [sym__block_matrix] = {
    .visible = false,
    .named = true,
  },
  [sym_cell_parameters] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namelist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namelist_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atomic_species_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atomic_positions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_k_points_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hubbard_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_matrix_repeat1] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 81,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 42,
  [104] = 43,
  [105] = 81,
  [106] = 100,
  [107] = 107,
  [108] = 100,
  [109] = 96,
  [110] = 99,
  [111] = 96,
  [112] = 99,
};

static inline bool aux_sym_string_token1_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\''
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= '\'' || c == '+'))
    : (c <= '9' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '"'
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= '"' || c == '+'))
    : (c <= '9' || (c < '_'
      ? (c < '\\'
        ? (c >= 'A' && c <= 'Z')
        : c <= '\\')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '('
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '('
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'A'
                ? (c < '-'
                  ? c == ')'
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 'a'
                  ? c == '_'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'A'
                ? (c < '-'
                  ? c == ')'
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'B'
                ? (c < '-'
                  ? c == ')'
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 'b'
                  ? c == '_'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(72);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(22);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(13);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('+' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(16);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 71:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(120);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(235);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(188);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(236);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_species_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_species_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_species_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_positions_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_positions_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_positions_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__keyword_cell_parameters_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__keyword_cell_parameters_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__keyword_cell_parameters_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__keyword_k_points_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__keyword_k_points_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__keyword_k_points_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__keyword_hubbard_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__keyword_hubbard_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__keyword_hubbard_token1);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '\'' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '"' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '_') ADVANCE(162);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '_') ADVANCE(164);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(220);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(236);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(221);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(236);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(222);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(236);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(236);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(236);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(194);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(203);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 75},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 75},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 75},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 113},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 116},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 113},
  [110] = {.lex_state = 116},
  [111] = {.lex_state = 113},
  [112] = {.lex_state = 116},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym__keyword_atomic_species_token1] = ACTIONS(1),
    [aux_sym__keyword_atomic_positions_token1] = ACTIONS(1),
    [aux_sym__keyword_cell_parameters_token1] = ACTIONS(1),
    [aux_sym__keyword_k_points_token1] = ACTIONS(1),
    [aux_sym__keyword_hubbard_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [aux_sym_boolean_token3] = ACTIONS(1),
    [aux_sym_boolean_token4] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(85),
    [sym__namelist_begin] = STATE(102),
    [sym__keyword_atomic_species] = STATE(101),
    [sym__keyword_atomic_positions] = STATE(62),
    [sym__keyword_cell_parameters] = STATE(63),
    [sym__keyword_k_points] = STATE(64),
    [sym__keyword_hubbard] = STATE(66),
    [sym_namelist] = STATE(3),
    [sym_atomic_species] = STATE(3),
    [sym_atomic_positions] = STATE(3),
    [sym_k_points] = STATE(3),
    [sym_hubbard] = STATE(3),
    [sym_cell_parameters] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(9),
    [aux_sym__keyword_atomic_species_token1] = ACTIONS(11),
    [aux_sym__keyword_atomic_positions_token1] = ACTIONS(13),
    [aux_sym__keyword_cell_parameters_token1] = ACTIONS(15),
    [aux_sym__keyword_k_points_token1] = ACTIONS(17),
    [aux_sym__keyword_hubbard_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__newline,
    ACTIONS(26), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      aux_sym__keyword_atomic_species_token1,
    ACTIONS(32), 1,
      aux_sym__keyword_atomic_positions_token1,
    ACTIONS(35), 1,
      aux_sym__keyword_cell_parameters_token1,
    ACTIONS(38), 1,
      aux_sym__keyword_k_points_token1,
    ACTIONS(41), 1,
      aux_sym__keyword_hubbard_token1,
    STATE(62), 1,
      sym__keyword_atomic_positions,
    STATE(63), 1,
      sym__keyword_cell_parameters,
    STATE(64), 1,
      sym__keyword_k_points,
    STATE(66), 1,
      sym__keyword_hubbard,
    STATE(101), 1,
      sym__keyword_atomic_species,
    STATE(102), 1,
      sym__namelist_begin,
    STATE(2), 7,
      sym_namelist,
      sym_atomic_species,
      sym_atomic_positions,
      sym_k_points,
      sym_hubbard,
      sym_cell_parameters,
      aux_sym_document_repeat1,
  [55] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      aux_sym__keyword_atomic_species_token1,
    ACTIONS(13), 1,
      aux_sym__keyword_atomic_positions_token1,
    ACTIONS(15), 1,
      aux_sym__keyword_cell_parameters_token1,
    ACTIONS(17), 1,
      aux_sym__keyword_k_points_token1,
    ACTIONS(19), 1,
      aux_sym__keyword_hubbard_token1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym__newline,
    STATE(62), 1,
      sym__keyword_atomic_positions,
    STATE(63), 1,
      sym__keyword_cell_parameters,
    STATE(64), 1,
      sym__keyword_k_points,
    STATE(66), 1,
      sym__keyword_hubbard,
    STATE(101), 1,
      sym__keyword_atomic_species,
    STATE(102), 1,
      sym__namelist_begin,
    STATE(2), 7,
      sym_namelist,
      sym_atomic_species,
      sym_atomic_positions,
      sym_k_points,
      sym_hubbard,
      sym_cell_parameters,
      aux_sym_document_repeat1,
  [110] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym__newline,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    STATE(7), 1,
      aux_sym_hubbard_repeat1,
    STATE(46), 1,
      sym_string,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(52), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [143] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    ACTIONS(60), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_hubbard_repeat1,
    STATE(46), 1,
      sym_string,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(52), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym__newline,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_string_token3,
    STATE(6), 1,
      aux_sym_hubbard_repeat1,
    STATE(46), 1,
      sym_string,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(67), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [209] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    ACTIONS(60), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_hubbard_repeat1,
    STATE(46), 1,
      sym_string,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(80), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [242] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    ACTIONS(84), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym_hubbard_repeat1,
    STATE(46), 1,
      sym_string,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(86), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [275] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 1,
      sym_number,
    STATE(24), 1,
      aux_sym__block_matrix_repeat1,
    STATE(35), 1,
      sym__block_matrix,
    STATE(93), 1,
      sym_vec3,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [303] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 1,
      sym_number,
    STATE(24), 1,
      aux_sym__block_matrix_repeat1,
    STATE(34), 1,
      sym__block_matrix,
    STATE(93), 1,
      sym_vec3,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(19), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(92), 1,
      sym__str_vec3,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(100), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(92), 1,
      sym__str_vec3,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(100), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(108), 1,
      sym__newline,
    STATE(23), 1,
      aux_sym_k_points_repeat1,
    STATE(67), 1,
      sym_vec3,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(112), 6,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      aux_sym_string_token3,
  [429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(92), 1,
      sym__str_vec3,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(118), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__newline,
    ACTIONS(125), 1,
      sym_number,
    STATE(16), 1,
      aux_sym__block_matrix_repeat1,
    STATE(93), 1,
      sym_vec3,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(130), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_k_points_repeat1,
    STATE(67), 1,
      sym_vec3,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(134), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_k_points_repeat1,
    STATE(67), 1,
      sym_vec3,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(104), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(92), 1,
      sym__str_vec3,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(138), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [558] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(108), 1,
      sym__newline,
    STATE(23), 1,
      aux_sym_k_points_repeat1,
    STATE(67), 1,
      sym_vec3,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [583] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    ACTIONS(142), 1,
      sym_number,
    STATE(48), 1,
      aux_sym_pair_repeat1,
    STATE(60), 2,
      sym_boolean,
      sym_string,
    ACTIONS(140), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(146), 6,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      aux_sym_string_token3,
  [631] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__newline,
    ACTIONS(153), 1,
      sym_number,
    STATE(23), 1,
      aux_sym_k_points_repeat1,
    STATE(67), 1,
      sym_vec3,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(158), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym__block_matrix_repeat1,
    STATE(93), 1,
      sym_vec3,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [681] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(92), 1,
      sym__str_vec3,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(165), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [708] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      aux_sym_string_token3,
    ACTIONS(170), 1,
      sym_number,
    STATE(53), 1,
      aux_sym_pair_repeat1,
    STATE(74), 2,
      sym_boolean,
      sym_string,
    ACTIONS(140), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__newline,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(177), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(186), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym__newline,
    STATE(28), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(194), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
    ACTIONS(165), 6,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      sym_identifier,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      sym_number,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      sym_number,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
    ACTIONS(200), 6,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
      sym_identifier,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      aux_sym__keyword_hubbard_token1,
  [929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__newline,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(37), 1,
      sym__namelist_end,
    STATE(39), 1,
      aux_sym_namelist_repeat2,
    STATE(45), 1,
      sym_pair,
  [951] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym__newline,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym__namelist_end,
    STATE(40), 1,
      aux_sym_namelist_repeat2,
    STATE(45), 1,
      sym_pair,
  [973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__newline,
    ACTIONS(221), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_namelist_repeat2,
    STATE(45), 1,
      sym_pair,
  [992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      aux_sym_string_token3,
    STATE(79), 1,
      sym_string,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_string_token3,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      sym__newline,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_string_token3,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(238), 2,
      sym_number,
      aux_sym_string_token3,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__newline,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_namelist_repeat1,
    STATE(68), 1,
      sym__op_comma,
  [1061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      aux_sym_string_token3,
    STATE(41), 1,
      sym_string,
  [1077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_token3,
    STATE(88), 1,
      sym_string,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_pair_repeat1,
    ACTIONS(252), 2,
      sym__newline,
      anon_sym_COMMA,
  [1107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__newline,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_namelist_repeat1,
    STATE(68), 1,
      sym__op_comma,
  [1123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_pair_repeat1,
    ACTIONS(261), 2,
      sym__newline,
      anon_sym_COMMA,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(266), 2,
      sym_number,
      aux_sym_string_token3,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_namelist_repeat1,
    STATE(68), 1,
      sym__op_comma,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_number,
    STATE(50), 1,
      aux_sym_pair_repeat1,
    ACTIONS(270), 2,
      sym__newline,
      anon_sym_COMMA,
  [1179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      sym_number,
    STATE(98), 1,
      sym__op_comma,
  [1192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__op_eq,
  [1205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      sym_number,
    STATE(75), 1,
      sym__op_comma,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      sym__newline,
      anon_sym_SLASH,
      sym_identifier,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      sym_number,
    STATE(89), 1,
      sym__op_comma,
  [1240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      sym__newline,
      anon_sym_SLASH,
      sym_identifier,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym__newline,
      anon_sym_COMMA,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym__newline,
      sym_number,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__newline,
    ACTIONS(294), 1,
      sym_identifier,
  [1275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__newline,
    ACTIONS(298), 1,
      sym_identifier,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__newline,
    ACTIONS(302), 1,
      sym_identifier,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      sym__newline,
      sym_number,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(308), 1,
      sym_identifier,
  [1313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    STATE(82), 1,
      sym_vec3,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(72), 1,
      sym_pair,
  [1333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_EQ,
    STATE(21), 1,
      sym__op_eq,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      sym__newline,
      anon_sym_COMMA,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_number,
    STATE(86), 1,
      sym_vec3,
  [1361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym__newline,
      anon_sym_COMMA,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      sym__newline,
      sym_number,
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      sym__newline,
      anon_sym_COMMA,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_number,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_number,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__newline,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__newline,
  [1413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_number,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
  [1427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym__newline,
  [1441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__newline,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__newline,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [1462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__newline,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__newline,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_number,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__newline,
  [1497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_number,
  [1504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__newline,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__newline,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_number,
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_number,
  [1532] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_string_token1,
  [1539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__newline,
  [1546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_number,
  [1553] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_string_token2,
  [1560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__newline,
  [1574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_keyword,
  [1581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_number,
  [1588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_number,
  [1595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__newline,
  [1616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [1623] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_string_token1,
  [1630] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(376), 1,
      aux_sym_string_token2,
  [1637] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_string_token1,
  [1644] = 2,
    ACTIONS(356), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 358,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 456,
  [SMALL_STATE(17)] = 481,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 531,
  [SMALL_STATE(20)] = 558,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 612,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 656,
  [SMALL_STATE(25)] = 681,
  [SMALL_STATE(26)] = 708,
  [SMALL_STATE(27)] = 737,
  [SMALL_STATE(28)] = 761,
  [SMALL_STATE(29)] = 785,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 873,
  [SMALL_STATE(35)] = 887,
  [SMALL_STATE(36)] = 901,
  [SMALL_STATE(37)] = 915,
  [SMALL_STATE(38)] = 929,
  [SMALL_STATE(39)] = 951,
  [SMALL_STATE(40)] = 973,
  [SMALL_STATE(41)] = 992,
  [SMALL_STATE(42)] = 1011,
  [SMALL_STATE(43)] = 1022,
  [SMALL_STATE(44)] = 1033,
  [SMALL_STATE(45)] = 1045,
  [SMALL_STATE(46)] = 1061,
  [SMALL_STATE(47)] = 1077,
  [SMALL_STATE(48)] = 1093,
  [SMALL_STATE(49)] = 1107,
  [SMALL_STATE(50)] = 1123,
  [SMALL_STATE(51)] = 1137,
  [SMALL_STATE(52)] = 1149,
  [SMALL_STATE(53)] = 1165,
  [SMALL_STATE(54)] = 1179,
  [SMALL_STATE(55)] = 1192,
  [SMALL_STATE(56)] = 1205,
  [SMALL_STATE(57)] = 1218,
  [SMALL_STATE(58)] = 1227,
  [SMALL_STATE(59)] = 1240,
  [SMALL_STATE(60)] = 1249,
  [SMALL_STATE(61)] = 1257,
  [SMALL_STATE(62)] = 1265,
  [SMALL_STATE(63)] = 1275,
  [SMALL_STATE(64)] = 1285,
  [SMALL_STATE(65)] = 1295,
  [SMALL_STATE(66)] = 1303,
  [SMALL_STATE(67)] = 1313,
  [SMALL_STATE(68)] = 1323,
  [SMALL_STATE(69)] = 1333,
  [SMALL_STATE(70)] = 1343,
  [SMALL_STATE(71)] = 1351,
  [SMALL_STATE(72)] = 1361,
  [SMALL_STATE(73)] = 1369,
  [SMALL_STATE(74)] = 1377,
  [SMALL_STATE(75)] = 1385,
  [SMALL_STATE(76)] = 1392,
  [SMALL_STATE(77)] = 1399,
  [SMALL_STATE(78)] = 1406,
  [SMALL_STATE(79)] = 1413,
  [SMALL_STATE(80)] = 1420,
  [SMALL_STATE(81)] = 1427,
  [SMALL_STATE(82)] = 1434,
  [SMALL_STATE(83)] = 1441,
  [SMALL_STATE(84)] = 1448,
  [SMALL_STATE(85)] = 1455,
  [SMALL_STATE(86)] = 1462,
  [SMALL_STATE(87)] = 1469,
  [SMALL_STATE(88)] = 1476,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1490,
  [SMALL_STATE(91)] = 1497,
  [SMALL_STATE(92)] = 1504,
  [SMALL_STATE(93)] = 1511,
  [SMALL_STATE(94)] = 1518,
  [SMALL_STATE(95)] = 1525,
  [SMALL_STATE(96)] = 1532,
  [SMALL_STATE(97)] = 1539,
  [SMALL_STATE(98)] = 1546,
  [SMALL_STATE(99)] = 1553,
  [SMALL_STATE(100)] = 1560,
  [SMALL_STATE(101)] = 1567,
  [SMALL_STATE(102)] = 1574,
  [SMALL_STATE(103)] = 1581,
  [SMALL_STATE(104)] = 1588,
  [SMALL_STATE(105)] = 1595,
  [SMALL_STATE(106)] = 1602,
  [SMALL_STATE(107)] = 1609,
  [SMALL_STATE(108)] = 1616,
  [SMALL_STATE(109)] = 1623,
  [SMALL_STATE(110)] = 1630,
  [SMALL_STATE(111)] = 1637,
  [SMALL_STATE(112)] = 1644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2), SHIFT_REPEAT(96),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2), SHIFT_REPEAT(99),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 2), SHIFT_REPEAT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2), SHIFT_REPEAT(23),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2), SHIFT_REPEAT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_matrix, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2), SHIFT_REPEAT(25),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2), SHIFT_REPEAT(71),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2), SHIFT_REPEAT(27),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2), SHIFT_REPEAT(94),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2), SHIFT_REPEAT(40),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2), SHIFT_REPEAT(55),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 6),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2), SHIFT_REPEAT(68),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2), SHIFT_REPEAT(50),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_vec3, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_quantum_espresso() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
