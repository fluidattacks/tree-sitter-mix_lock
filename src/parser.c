#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 16
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PERCENT_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_COMMA = 4,
  sym_package_name = 5,
  anon_sym_LBRACE = 6,
  anon_sym_COLONhex_COMMA = 7,
  aux_sym_atom_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_version_token1 = 10,
  aux_sym_checksum_token1 = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  aux_sym_version_requirement_token1 = 14,
  anon_sym_hex_COLON = 15,
  aux_sym_key_value_pair_token1 = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  aux_sym_string_token1 = 19,
  anon_sym_DQUOTEhexpm_DQUOTE = 20,
  sym_file = 21,
  aux_sym__package_entries = 22,
  sym_package_entry = 23,
  sym__package_details = 24,
  sym_atom = 25,
  sym_version = 26,
  sym_checksum = 27,
  sym_build_tools = 28,
  sym_atoms = 29,
  sym_dependencies = 30,
  sym_dependency_list = 31,
  sym_dependency = 32,
  sym_version_requirement = 33,
  sym_dependency_details = 34,
  sym_key_value_pairs = 35,
  sym_atom_pair = 36,
  sym_key_value_pair = 37,
  sym_value = 38,
  sym_boolean = 39,
  sym_string = 40,
  sym_repo = 41,
  sym_optional_checksum = 42,
  aux_sym_atoms_repeat1 = 43,
  aux_sym_dependency_list_repeat1 = 44,
  aux_sym_key_value_pairs_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [sym_package_name] = "package_name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLONhex_COMMA] = ":hex,",
  [aux_sym_atom_token1] = "atom_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_version_token1] = "version_token1",
  [aux_sym_checksum_token1] = "checksum_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_version_requirement_token1] = "version_requirement_token1",
  [anon_sym_hex_COLON] = "hex:",
  [aux_sym_key_value_pair_token1] = "key_value_pair_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTEhexpm_DQUOTE] = "\"hexpm\"",
  [sym_file] = "file",
  [aux_sym__package_entries] = "_package_entries",
  [sym_package_entry] = "package_entry",
  [sym__package_details] = "_package_details",
  [sym_atom] = "atom",
  [sym_version] = "version",
  [sym_checksum] = "checksum",
  [sym_build_tools] = "build_tools",
  [sym_atoms] = "atoms",
  [sym_dependencies] = "dependencies",
  [sym_dependency_list] = "dependency_list",
  [sym_dependency] = "dependency",
  [sym_version_requirement] = "version_requirement",
  [sym_dependency_details] = "dependency_details",
  [sym_key_value_pairs] = "key_value_pairs",
  [sym_atom_pair] = "atom_pair",
  [sym_key_value_pair] = "key_value_pair",
  [sym_value] = "value",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_repo] = "repo",
  [sym_optional_checksum] = "optional_checksum",
  [aux_sym_atoms_repeat1] = "atoms_repeat1",
  [aux_sym_dependency_list_repeat1] = "dependency_list_repeat1",
  [aux_sym_key_value_pairs_repeat1] = "key_value_pairs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_package_name] = sym_package_name,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLONhex_COMMA] = anon_sym_COLONhex_COMMA,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_version_token1] = aux_sym_version_token1,
  [aux_sym_checksum_token1] = aux_sym_checksum_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_version_requirement_token1] = aux_sym_version_requirement_token1,
  [anon_sym_hex_COLON] = anon_sym_hex_COLON,
  [aux_sym_key_value_pair_token1] = aux_sym_key_value_pair_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTEhexpm_DQUOTE] = anon_sym_DQUOTEhexpm_DQUOTE,
  [sym_file] = sym_file,
  [aux_sym__package_entries] = aux_sym__package_entries,
  [sym_package_entry] = sym_package_entry,
  [sym__package_details] = sym__package_details,
  [sym_atom] = sym_atom,
  [sym_version] = sym_version,
  [sym_checksum] = sym_checksum,
  [sym_build_tools] = sym_build_tools,
  [sym_atoms] = sym_atoms,
  [sym_dependencies] = sym_dependencies,
  [sym_dependency_list] = sym_dependency_list,
  [sym_dependency] = sym_dependency,
  [sym_version_requirement] = sym_version_requirement,
  [sym_dependency_details] = sym_dependency_details,
  [sym_key_value_pairs] = sym_key_value_pairs,
  [sym_atom_pair] = sym_atom_pair,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_value] = sym_value,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_repo] = sym_repo,
  [sym_optional_checksum] = sym_optional_checksum,
  [aux_sym_atoms_repeat1] = aux_sym_atoms_repeat1,
  [aux_sym_dependency_list_repeat1] = aux_sym_dependency_list_repeat1,
  [aux_sym_key_value_pairs_repeat1] = aux_sym_key_value_pairs_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_package_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONhex_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_checksum_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_version_requirement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hex_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_value_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTEhexpm_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__package_entries] = {
    .visible = false,
    .named = false,
  },
  [sym_package_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__package_details] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_checksum] = {
    .visible = true,
    .named = true,
  },
  [sym_build_tools] = {
    .visible = true,
    .named = true,
  },
  [sym_atoms] = {
    .visible = true,
    .named = true,
  },
  [sym_dependencies] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_version_requirement] = {
    .visible = true,
    .named = true,
  },
  [sym_dependency_details] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pairs] = {
    .visible = true,
    .named = true,
  },
  [sym_atom_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
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
  [sym_repo] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_checksum] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_atoms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dependency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_value_pairs_repeat1] = {
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(158);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == ',') ADVANCE(162);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == ',') ADVANCE(162);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == 'h') ADVANCE(177);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 89:
      if (lookahead == '{') ADVANCE(159);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_package_name);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLONhex_COMMA);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_version_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_checksum_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_checksum_token1);
      if (lookahead == '.') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_version_requirement_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_version_requirement_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_hex_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_key_value_pair_token1);
      if (lookahead == ':') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_key_value_pair_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_key_value_pair_token1);
      if (lookahead == 'x') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_key_value_pair_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTEhexpm_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 90},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 91},
  [78] = {.lex_state = 182},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_version_token1] = ACTIONS(1),
    [aux_sym_checksum_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_hex_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(44),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_value,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_atom,
      sym_boolean,
      sym_string,
  [19] = 6,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      anon_sym_hex_COLON,
    ACTIONS(15), 1,
      aux_sym_key_value_pair_token1,
    STATE(4), 1,
      aux_sym_key_value_pairs_repeat1,
    STATE(69), 1,
      sym_key_value_pairs,
    STATE(21), 2,
      sym_atom_pair,
      sym_key_value_pair,
  [39] = 5,
    ACTIONS(13), 1,
      anon_sym_hex_COLON,
    ACTIONS(15), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_key_value_pairs_repeat1,
    STATE(21), 2,
      sym_atom_pair,
      sym_key_value_pair,
  [56] = 5,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      anon_sym_hex_COLON,
    ACTIONS(24), 1,
      aux_sym_key_value_pair_token1,
    STATE(5), 1,
      aux_sym_key_value_pairs_repeat1,
    STATE(21), 2,
      sym_atom_pair,
      sym_key_value_pair,
  [73] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_dependency_list_repeat1,
    STATE(22), 1,
      sym_dependency,
    STATE(45), 1,
      sym_dependency_list,
  [89] = 2,
    ACTIONS(33), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(31), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [99] = 5,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_atoms_repeat1,
    STATE(24), 1,
      sym_atom,
    STATE(52), 1,
      sym_atoms,
  [115] = 2,
    ACTIONS(39), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(37), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [124] = 2,
    ACTIONS(43), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(41), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [133] = 3,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_package_name,
    STATE(14), 2,
      aux_sym__package_entries,
      sym_package_entry,
  [144] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_dependency_list_repeat1,
    STATE(22), 1,
      sym_dependency,
  [157] = 2,
    ACTIONS(53), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(51), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [166] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      sym_package_name,
    STATE(14), 2,
      aux_sym__package_entries,
      sym_package_entry,
  [177] = 2,
    ACTIONS(62), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(60), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [186] = 4,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_atoms_repeat1,
    STATE(24), 1,
      sym_atom,
  [199] = 4,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_atoms_repeat1,
    STATE(24), 1,
      sym_atom,
  [212] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_dependency_list_repeat1,
    STATE(22), 1,
      sym_dependency,
  [225] = 2,
    ACTIONS(78), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(76), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [234] = 3,
    ACTIONS(47), 1,
      sym_package_name,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      aux_sym__package_entries,
      sym_package_entry,
  [245] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(84), 2,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [256] = 2,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [264] = 1,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_package_name,
  [270] = 2,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(94), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [278] = 1,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [284] = 2,
    ACTIONS(100), 1,
      aux_sym_key_value_pair_token1,
    ACTIONS(19), 2,
      anon_sym_RBRACK,
      anon_sym_hex_COLON,
  [292] = 2,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(102), 2,
      anon_sym_RBRACE,
      sym_package_name,
  [300] = 2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_checksum,
  [307] = 2,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_dependency_details,
  [314] = 2,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_build_tools,
  [321] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__package_details,
  [328] = 2,
    ACTIONS(5), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_atom,
  [335] = 2,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_optional_checksum,
  [342] = 2,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_version_requirement,
  [349] = 2,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_version,
  [356] = 2,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_dependencies,
  [363] = 1,
    ACTIONS(67), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [368] = 1,
    ACTIONS(74), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACK,
  [373] = 1,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      sym_package_name,
  [378] = 2,
    ACTIONS(124), 1,
      anon_sym_DQUOTEhexpm_DQUOTE,
    STATE(51), 1,
      sym_repo,
  [385] = 2,
    ACTIONS(5), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_atom,
  [392] = 2,
    ACTIONS(5), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_atom,
  [399] = 1,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [403] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [407] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
  [411] = 1,
    ACTIONS(132), 1,
      anon_sym_COMMA,
  [415] = 1,
    ACTIONS(134), 1,
      anon_sym_COMMA,
  [419] = 1,
    ACTIONS(136), 1,
      anon_sym_COMMA,
  [423] = 1,
    ACTIONS(138), 1,
      anon_sym_COMMA,
  [427] = 1,
    ACTIONS(140), 1,
      anon_sym_COMMA,
  [431] = 1,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [435] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [439] = 1,
    ACTIONS(146), 1,
      anon_sym_COMMA,
  [443] = 1,
    ACTIONS(148), 1,
      aux_sym_version_requirement_token1,
  [447] = 1,
    ACTIONS(150), 1,
      anon_sym_COMMA,
  [451] = 1,
    ACTIONS(152), 1,
      aux_sym_checksum_token1,
  [455] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [459] = 1,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
  [463] = 1,
    ACTIONS(158), 1,
      anon_sym_COMMA,
  [467] = 1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
  [471] = 1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
  [475] = 1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
  [479] = 1,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
  [483] = 1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
  [487] = 1,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
  [491] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [495] = 1,
    ACTIONS(174), 1,
      anon_sym_COMMA,
  [499] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [503] = 1,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
  [507] = 1,
    ACTIONS(180), 1,
      aux_sym_checksum_token1,
  [511] = 1,
    ACTIONS(182), 1,
      anon_sym_COMMA,
  [515] = 1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
  [519] = 1,
    ACTIONS(186), 1,
      anon_sym_COMMA,
  [523] = 1,
    ACTIONS(188), 1,
      aux_sym_version_token1,
  [527] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [531] = 1,
    ACTIONS(192), 1,
      anon_sym_COMMA,
  [535] = 1,
    ACTIONS(194), 1,
      aux_sym_atom_token1,
  [539] = 1,
    ACTIONS(196), 1,
      aux_sym_string_token1,
  [543] = 1,
    ACTIONS(198), 1,
      anon_sym_COLONhex_COMMA,
  [547] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [551] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [555] = 1,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
  [559] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 270,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 284,
  [SMALL_STATE(27)] = 292,
  [SMALL_STATE(28)] = 300,
  [SMALL_STATE(29)] = 307,
  [SMALL_STATE(30)] = 314,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 328,
  [SMALL_STATE(33)] = 335,
  [SMALL_STATE(34)] = 342,
  [SMALL_STATE(35)] = 349,
  [SMALL_STATE(36)] = 356,
  [SMALL_STATE(37)] = 363,
  [SMALL_STATE(38)] = 368,
  [SMALL_STATE(39)] = 373,
  [SMALL_STATE(40)] = 378,
  [SMALL_STATE(41)] = 385,
  [SMALL_STATE(42)] = 392,
  [SMALL_STATE(43)] = 399,
  [SMALL_STATE(44)] = 403,
  [SMALL_STATE(45)] = 407,
  [SMALL_STATE(46)] = 411,
  [SMALL_STATE(47)] = 415,
  [SMALL_STATE(48)] = 419,
  [SMALL_STATE(49)] = 423,
  [SMALL_STATE(50)] = 427,
  [SMALL_STATE(51)] = 431,
  [SMALL_STATE(52)] = 435,
  [SMALL_STATE(53)] = 439,
  [SMALL_STATE(54)] = 443,
  [SMALL_STATE(55)] = 447,
  [SMALL_STATE(56)] = 451,
  [SMALL_STATE(57)] = 455,
  [SMALL_STATE(58)] = 459,
  [SMALL_STATE(59)] = 463,
  [SMALL_STATE(60)] = 467,
  [SMALL_STATE(61)] = 471,
  [SMALL_STATE(62)] = 475,
  [SMALL_STATE(63)] = 479,
  [SMALL_STATE(64)] = 483,
  [SMALL_STATE(65)] = 487,
  [SMALL_STATE(66)] = 491,
  [SMALL_STATE(67)] = 495,
  [SMALL_STATE(68)] = 499,
  [SMALL_STATE(69)] = 503,
  [SMALL_STATE(70)] = 507,
  [SMALL_STATE(71)] = 511,
  [SMALL_STATE(72)] = 515,
  [SMALL_STATE(73)] = 519,
  [SMALL_STATE(74)] = 523,
  [SMALL_STATE(75)] = 527,
  [SMALL_STATE(76)] = 531,
  [SMALL_STATE(77)] = 535,
  [SMALL_STATE(78)] = 539,
  [SMALL_STATE(79)] = 543,
  [SMALL_STATE(80)] = 547,
  [SMALL_STATE(81)] = 551,
  [SMALL_STATE(82)] = 555,
  [SMALL_STATE(83)] = 559,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pairs, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(32),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2), SHIFT_REPEAT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_pair, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_list, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__package_entries, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__package_entries, 2), SHIFT_REPEAT(81),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atoms_repeat1, 2), SHIFT_REPEAT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atoms_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atoms, 1),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2), SHIFT_REPEAT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_pair, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom_pair, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_pairs_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_pairs_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dependency_list_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_details, 16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atoms_repeat1, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency, 7),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_pairs_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_entry, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_entry, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 2),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependencies, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_tools, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repo, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_tools, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checksum, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_requirement, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_checksum, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_details, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dependency_details, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mix_lock(void) {
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
