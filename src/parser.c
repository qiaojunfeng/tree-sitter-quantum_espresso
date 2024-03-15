#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_EQ = 9,
  anon_sym_COMMA = 10,
  aux_sym_boolean_token1 = 11,
  aux_sym_boolean_token2 = 12,
  aux_sym_boolean_token3 = 13,
  aux_sym_boolean_token4 = 14,
  sym_number = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_string_token2 = 19,
  aux_sym_string_token3 = 20,
  sym_keyword = 21,
  sym_identifier = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_document = 25,
  sym__namelist_begin = 26,
  sym__namelist_end = 27,
  sym__keyword_atomic_species = 28,
  sym__keyword_atomic_positions = 29,
  sym__keyword_cell_parameters = 30,
  sym__keyword_k_points = 31,
  sym__op_eq = 32,
  sym__op_comma = 33,
  sym_boolean = 34,
  sym_string = 35,
  sym_pair = 36,
  sym_vec3 = 37,
  sym__str_vec3 = 38,
  sym_namelist = 39,
  sym_atomic_species = 40,
  sym_atomic_positions = 41,
  sym_k_points = 42,
  sym__block_matrix = 43,
  sym_cell_parameters = 44,
  aux_sym_document_repeat1 = 45,
  aux_sym_pair_repeat1 = 46,
  aux_sym_namelist_repeat1 = 47,
  aux_sym_namelist_repeat2 = 48,
  aux_sym_atomic_species_repeat1 = 49,
  aux_sym_atomic_positions_repeat1 = 50,
  aux_sym_k_points_repeat1 = 51,
  aux_sym__block_matrix_repeat1 = 52,
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
  [sym__block_matrix] = "_block_matrix",
  [sym_cell_parameters] = "cell_parameters",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_pair_repeat1] = "pair_repeat1",
  [aux_sym_namelist_repeat1] = "namelist_repeat1",
  [aux_sym_namelist_repeat2] = "namelist_repeat2",
  [aux_sym_atomic_species_repeat1] = "atomic_species_repeat1",
  [aux_sym_atomic_positions_repeat1] = "atomic_positions_repeat1",
  [aux_sym_k_points_repeat1] = "k_points_repeat1",
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
  [sym__block_matrix] = sym__block_matrix,
  [sym_cell_parameters] = sym_cell_parameters,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_pair_repeat1] = aux_sym_pair_repeat1,
  [aux_sym_namelist_repeat1] = aux_sym_namelist_repeat1,
  [aux_sym_namelist_repeat2] = aux_sym_namelist_repeat2,
  [aux_sym_atomic_species_repeat1] = aux_sym_atomic_species_repeat1,
  [aux_sym_atomic_positions_repeat1] = aux_sym_atomic_positions_repeat1,
  [aux_sym_k_points_repeat1] = aux_sym_k_points_repeat1,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= '_' || (c >= 'b' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'B'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
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
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
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
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(121);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(117);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(121);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_species_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_species_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_positions_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__keyword_atomic_positions_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__keyword_cell_parameters_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__keyword_cell_parameters_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__keyword_k_points_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__keyword_k_points_token1);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_boolean_token3);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_boolean_token4);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(171);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(171);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '\'' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (aux_sym_string_token1_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == '"' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(154);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(155);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(153);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 60},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 60},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 60},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 97},
  [73] = {.lex_state = 94},
  [74] = {.lex_state = 60},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [aux_sym_boolean_token3] = ACTIONS(1),
    [aux_sym_boolean_token4] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(77),
    [sym__namelist_begin] = STATE(78),
    [sym__keyword_atomic_species] = STATE(75),
    [sym__keyword_atomic_positions] = STATE(71),
    [sym__keyword_cell_parameters] = STATE(69),
    [sym__keyword_k_points] = STATE(65),
    [sym_namelist] = STATE(3),
    [sym_atomic_species] = STATE(3),
    [sym_atomic_positions] = STATE(3),
    [sym_k_points] = STATE(3),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__newline,
    ACTIONS(24), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      aux_sym__keyword_atomic_species_token1,
    ACTIONS(30), 1,
      aux_sym__keyword_atomic_positions_token1,
    ACTIONS(33), 1,
      aux_sym__keyword_cell_parameters_token1,
    ACTIONS(36), 1,
      aux_sym__keyword_k_points_token1,
    STATE(65), 1,
      sym__keyword_k_points,
    STATE(69), 1,
      sym__keyword_cell_parameters,
    STATE(71), 1,
      sym__keyword_atomic_positions,
    STATE(75), 1,
      sym__keyword_atomic_species,
    STATE(78), 1,
      sym__namelist_begin,
    STATE(2), 6,
      sym_namelist,
      sym_atomic_species,
      sym_atomic_positions,
      sym_k_points,
      sym_cell_parameters,
      aux_sym_document_repeat1,
  [48] = 14,
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
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym__newline,
    STATE(65), 1,
      sym__keyword_k_points,
    STATE(69), 1,
      sym__keyword_cell_parameters,
    STATE(71), 1,
      sym__keyword_atomic_positions,
    STATE(75), 1,
      sym__keyword_atomic_species,
    STATE(78), 1,
      sym__namelist_begin,
    STATE(2), 6,
      sym_namelist,
      sym_atomic_species,
      sym_atomic_positions,
      sym_k_points,
      sym_cell_parameters,
      aux_sym_document_repeat1,
  [96] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_string_token3,
    STATE(33), 1,
      aux_sym_pair_repeat1,
    STATE(53), 2,
      sym_boolean,
      sym_string,
    ACTIONS(43), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [125] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_string_token3,
    ACTIONS(53), 1,
      sym_number,
    STATE(28), 1,
      aux_sym_pair_repeat1,
    STATE(43), 2,
      sym_boolean,
      sym_string,
    ACTIONS(43), 4,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
      aux_sym_boolean_token3,
      aux_sym_boolean_token4,
  [154] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym_number,
    STATE(9), 1,
      aux_sym__block_matrix_repeat1,
    STATE(24), 1,
      sym__block_matrix,
    STATE(70), 1,
      sym_vec3,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__newline,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(76), 1,
      sym__str_vec3,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(66), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__newline,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(76), 1,
      sym__str_vec3,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(75), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [233] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(81), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__block_matrix_repeat1,
    STATE(70), 1,
      sym_vec3,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [257] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_atomic_positions_repeat1,
    STATE(76), 1,
      sym__str_vec3,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(87), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(91), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_k_points_repeat1,
    STATE(42), 1,
      sym_vec3,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [307] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(98), 1,
      sym_number,
    STATE(12), 1,
      aux_sym_k_points_repeat1,
    STATE(42), 1,
      sym_vec3,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(106), 1,
      sym_number,
    STATE(13), 1,
      aux_sym__block_matrix_repeat1,
    STATE(70), 1,
      sym_vec3,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(111), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym_k_points_repeat1,
    STATE(42), 1,
      sym_vec3,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(118), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [402] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__newline,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(127), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_atomic_species_repeat1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_AMP,
    ACTIONS(135), 4,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      sym_number,
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
    ACTIONS(66), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      sym_identifier,
  [478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
    ACTIONS(139), 5,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      sym_identifier,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
      sym_number,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_AMP,
      aux_sym__keyword_atomic_species_token1,
      aux_sym__keyword_atomic_positions_token1,
      aux_sym__keyword_cell_parameters_token1,
      aux_sym__keyword_k_points_token1,
  [547] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(22), 1,
      sym__namelist_end,
    STATE(26), 1,
      aux_sym_namelist_repeat2,
    STATE(29), 1,
      sym_pair,
  [569] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__newline,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym__namelist_end,
    STATE(27), 1,
      aux_sym_namelist_repeat2,
    STATE(29), 1,
      sym_pair,
  [591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_namelist_repeat2,
    STATE(29), 1,
      sym_pair,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_number,
    STATE(34), 1,
      aux_sym_pair_repeat1,
    ACTIONS(167), 2,
      sym__newline,
      anon_sym_COMMA,
  [624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__newline,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_namelist_repeat1,
    STATE(44), 1,
      sym__op_comma,
  [640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_string_token3,
    STATE(54), 1,
      sym_string,
  [656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__newline,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_namelist_repeat1,
    STATE(44), 1,
      sym__op_comma,
  [672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      sym__newline,
    STATE(31), 1,
      aux_sym_namelist_repeat1,
    STATE(44), 1,
      sym__op_comma,
  [688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_number,
    STATE(34), 1,
      aux_sym_pair_repeat1,
    ACTIONS(184), 2,
      sym__newline,
      anon_sym_COMMA,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_number,
    STATE(34), 1,
      aux_sym_pair_repeat1,
    ACTIONS(186), 2,
      sym__newline,
      anon_sym_COMMA,
  [716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      sym__newline,
      anon_sym_SLASH,
      sym_identifier,
  [725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym_number,
    STATE(66), 1,
      sym__op_comma,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_number,
    STATE(74), 1,
      sym__op_comma,
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__op_eq,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      sym_number,
    STATE(55), 1,
      sym__op_comma,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      sym__newline,
      anon_sym_SLASH,
      sym_identifier,
  [786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym__newline,
      anon_sym_COMMA,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_number,
    STATE(67), 1,
      sym_vec3,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym__newline,
      anon_sym_COMMA,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(52), 1,
      sym_pair,
  [822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym__newline,
      sym_number,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym__newline,
      sym_number,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym__newline,
      anon_sym_COMMA,
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(5), 1,
      sym__op_eq,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym__newline,
      anon_sym_COMMA,
  [864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym__newline,
      sym_number,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_number,
    STATE(68), 1,
      sym_vec3,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym__newline,
      anon_sym_COMMA,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      sym__newline,
      anon_sym_COMMA,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__newline,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_number,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__newline,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_number,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__newline,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__newline,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__newline,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
  [975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_identifier,
  [982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_number,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__newline,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__newline,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym_identifier,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__newline,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
  [1024] = 2,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_string_token2,
  [1031] = 2,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_string_token1,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_number,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__newline,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__newline,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_keyword,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 402,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 478,
  [SMALL_STATE(21)] = 494,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 534,
  [SMALL_STATE(25)] = 547,
  [SMALL_STATE(26)] = 569,
  [SMALL_STATE(27)] = 591,
  [SMALL_STATE(28)] = 610,
  [SMALL_STATE(29)] = 624,
  [SMALL_STATE(30)] = 640,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 702,
  [SMALL_STATE(35)] = 716,
  [SMALL_STATE(36)] = 725,
  [SMALL_STATE(37)] = 738,
  [SMALL_STATE(38)] = 751,
  [SMALL_STATE(39)] = 764,
  [SMALL_STATE(40)] = 777,
  [SMALL_STATE(41)] = 786,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 804,
  [SMALL_STATE(44)] = 812,
  [SMALL_STATE(45)] = 822,
  [SMALL_STATE(46)] = 830,
  [SMALL_STATE(47)] = 838,
  [SMALL_STATE(48)] = 846,
  [SMALL_STATE(49)] = 856,
  [SMALL_STATE(50)] = 864,
  [SMALL_STATE(51)] = 872,
  [SMALL_STATE(52)] = 882,
  [SMALL_STATE(53)] = 890,
  [SMALL_STATE(54)] = 898,
  [SMALL_STATE(55)] = 905,
  [SMALL_STATE(56)] = 912,
  [SMALL_STATE(57)] = 919,
  [SMALL_STATE(58)] = 926,
  [SMALL_STATE(59)] = 933,
  [SMALL_STATE(60)] = 940,
  [SMALL_STATE(61)] = 947,
  [SMALL_STATE(62)] = 954,
  [SMALL_STATE(63)] = 961,
  [SMALL_STATE(64)] = 968,
  [SMALL_STATE(65)] = 975,
  [SMALL_STATE(66)] = 982,
  [SMALL_STATE(67)] = 989,
  [SMALL_STATE(68)] = 996,
  [SMALL_STATE(69)] = 1003,
  [SMALL_STATE(70)] = 1010,
  [SMALL_STATE(71)] = 1017,
  [SMALL_STATE(72)] = 1024,
  [SMALL_STATE(73)] = 1031,
  [SMALL_STATE(74)] = 1038,
  [SMALL_STATE(75)] = 1045,
  [SMALL_STATE(76)] = 1052,
  [SMALL_STATE(77)] = 1059,
  [SMALL_STATE(78)] = 1066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2), SHIFT_REPEAT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_matrix, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2), SHIFT_REPEAT(12),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2), SHIFT_REPEAT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(13),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2), SHIFT_REPEAT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2), SHIFT_REPEAT(15),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2), SHIFT_REPEAT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2), SHIFT_REPEAT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2), SHIFT_REPEAT(38),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2), SHIFT_REPEAT(44),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2), SHIFT_REPEAT(34),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_vec3, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
