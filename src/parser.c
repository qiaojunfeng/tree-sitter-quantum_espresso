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

static TSCharacterRange aux_sym_string_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {'\'', '\''}, {'+', '+'}, {'-', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'},
  {'a', 'z'},
};

static TSCharacterRange aux_sym_string_token2_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {'"', '"'}, {'+', '+'}, {'-', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'},
  {'a', 'z'},
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'(', '('}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0},
  {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc},
  {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c},
  {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9},
  {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a},
  {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9},
  {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e},
  {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6},
  {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5},
  {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248},
  {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5},
  {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878},
  {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab},
  {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf},
  {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071},
  {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124},
  {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184},
  {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa},
  {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00},
  {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5},
  {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805},
  {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925},
  {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28},
  {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd},
  {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6},
  {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36},
  {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7},
  {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d},
  {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
  {0x10920, 0x1092b},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {')', ')'}, {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5},
  {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee},
  {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1},
  {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2},
  {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff},
  {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815},
  {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9},
  {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1},
  {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39},
  {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3},
  {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28},
  {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83},
  {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa},
  {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a},
  {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9},
  {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd},
  {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00},
  {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061},
  {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8},
  {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc},
  {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974},
  {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf},
  {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45},
  {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc},
  {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc},
  {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67},
  {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce},
  {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f},
  {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf},
  {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe},
  {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe},
  {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6},
  {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e},
  {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3},
  {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7},
  {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375},
  {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563},
  {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc},
  {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808},
  {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5},
  {0x10900, 0x10915}, {0x10920, 0x1092b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      ADVANCE_MAP(
        '\n', 77,
        '!', 78,
        '"', 112,
        '&', 79,
        '\'', 115,
        '(', 237,
        ')', 238,
        ',', 97,
        '.', 31,
        '/', 80,
        '=', 96,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
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
          lookahead == ' ') SKIP(1);
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
          lookahead == ' ') SKIP(2);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
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
          lookahead == ' ') SKIP(4);
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
          lookahead == ' ') SKIP(5);
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
          lookahead == ' ') SKIP(74);
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
          lookahead == ' ') SKIP(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(235);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(188);
      if (set_contains(sym_identifier_character_set_1, 433, lookahead)) ADVANCE(236);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
      if (set_contains(aux_sym_string_token1_character_set_1, 9, lookahead)) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (set_contains(aux_sym_string_token1_character_set_1, 9, lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (set_contains(aux_sym_string_token2_character_set_1, 9, lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (set_contains(aux_sym_string_token2_character_set_1, 9, lookahead)) ADVANCE(117);
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
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(221);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(222);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(194);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(202);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(204);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(203);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(200);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(193);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_2, 434, lookahead)) ADVANCE(236);
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
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hubbard, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hubbard, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 7, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 7, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_k_points, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_positions, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_positions, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hubbard_repeat1, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hubbard_repeat1, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_matrix, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_positions_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_positions_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_species, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_species, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_k_points_repeat1, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atomic_species_repeat1, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_atomic_species_repeat1, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell_parameters, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namelist, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2, 0, 0), SHIFT_REPEAT(40),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 2, 0, 0), SHIFT_REPEAT(55),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 6, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_namelist_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namelist_repeat2, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 5, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec3, 3, 0, 0),
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
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__str_vec3, 2, 0, 0),
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
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_quantum_espresso(void) {
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
