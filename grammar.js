module.exports = grammar({
  name: "quantum_espresso",

  extras: ($) => [
    $.comment, // inline comment
    /[ \t]/, // whitespace without newline, exclude newline
  ],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.namelist,
          // blocks
          $.atomic_species,
          $.atomic_positions,
          $.cell_parameters,
          $.k_points,
          $.hubbard,
          // empty line or single-line comment
          $._newline
        )
      ),

    _newline: ($) => /\n/,
    comment: ($) => /!.*/,

    // Note it is necessary to keep these types ordered:
    // from https://tree-sitter.github.io/tree-sitter/creating-parsers#conflicting-tokens
    // "Tree-sitter will prefer the token that appears earlier in the grammar."
    // Most importantly, put `identifier` to the last to decrease its precedence,
    // otherwise `identifier` often matches lots of other symbols.
    _namelist_begin: ($) => alias("&", "namelist"),
    _namelist_end: ($) => alias("/", "namelist"),
    // I still keep block names as identifier, to have the same color as key-value pairs
    _keyword_atomic_species: ($) =>
      alias(ignoreCase("atomic_species"), "keyword"),
    _keyword_atomic_positions: ($) =>
      alias(ignoreCase("atomic_positions"), "keyword"),
    _keyword_cell_parameters: ($) =>
      alias(ignoreCase("cell_parameters"), "keyword"),
    _keyword_k_points: ($) => alias(ignoreCase("k_points"), "keyword"),
    _keyword_hubbard: ($) => alias(ignoreCase("hubbard"), "keyword"),
    _op_eq: ($) => alias("=", "="),
    _op_comma: ($) => alias(",", ","),
    boolean: ($) =>
      choice(
        ignoreCase(".true."),
        ignoreCase("true"),
        ignoreCase(".false."),
        ignoreCase("false")
      ),
    number: ($) => /[\+\-]?\d+(\.(\d+)?)?([dDeE][\+\-]?\d+)?/,
    string: ($) =>
      choice(
        seq('"', /[\w\d\s\t_\.\/\\\-\+']*/, '"'),
        seq("'", /[\w\d\s\t_\.\/\\\-\+"]*/, "'"),
        /[\w\d_\.\/\\\-\+]+/  // no quote, no space
      ),
    // eg. CONTROL, System
    keyword: ($) => /[a-zA-Z][0-9a-zA-Z_]*/,
    // allow unicode, '(', ')' and '-'
    // eg. ibrav, conv_thr, (ortho-atomic), automatic
    identifier: ($) => /[\p{L}\w(][\p{L}\w\-)]*/,

    pair: ($) =>
      seq(
        seq($.identifier, optional(seq("(", $.number, ")"))),
        $._op_eq,
        choice(repeat1($.number), $.boolean, $.string)
      ),

    vec3: ($) =>
      seq(
        $.number,
        optional($._op_comma),
        $.number,
        optional($._op_comma),
        $.number
      ),
    _str_vec3: ($) => seq($.identifier, $.vec3),

    namelist: ($) =>
      seq(
        seq($._namelist_begin, $.keyword, $._newline),
        repeat(
          choice(
            seq($.pair, repeat(seq($._op_comma, $.pair)), $._newline),
            $._newline // empty or comment line
          )
        ),
        // prec.right(seq($._namelist_end, optional($._newline)))
        $._namelist_end
      ),

    atomic_species: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          seq($._keyword_atomic_species, $._newline),
          repeat(
            choice(
              seq($.identifier, $.number, $.string, $._newline),
              $._newline
            )
          )
        )
      ),

    atomic_positions: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          seq($._keyword_atomic_positions, optional($.identifier), $._newline),
          repeat(
            choice(
              seq($._str_vec3, $._newline),
              $._newline // empty line
            )
          )
        )
      ),

    k_points: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          seq($._keyword_k_points, optional($.identifier), $._newline),
          repeat(
            choice(
              seq($.vec3, $.vec3, $._newline),
              $._newline // empty line
            )
          )
        )
      ),

    hubbard: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          seq($._keyword_hubbard, optional($.identifier), $._newline),
          repeat(
            choice(
              // seq($.identifier, $.number, $.string, $._newline),
              // Hubbard U
              seq($.string, $.string, $.number, $._newline),
              // Hubbard V
              seq($.string, $.string, $.string, $.number, $.number, $.number, $._newline),
              $._newline
            )
          )
        )
      ),

    _block_matrix: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          // at least one line
          // note this will consume all the remaining empty lines
          repeat1(
            choice(
              seq($.vec3, $._newline),
              $._newline // empty or comment line
            )
          )
        )
      ),
    cell_parameters: ($) =>
      prec.right(
        // consume as much empty lines as possible
        seq(
          seq($._keyword_cell_parameters, optional($.identifier), $._newline),
          optional($._block_matrix)
        )
      ),
  },
});

function ignoreCase(word) {
  return new RegExp(caseInsensitive(word));
}

function caseInsensitive(word) {
  return word
    .split("")
    .map((letter) => {
      if (letter.toLowerCase() === letter.toUpperCase()) {
        return `[${letter}]`;
      }
      return `[${letter.toLowerCase()}${letter.toUpperCase()}]`;
    })
    .join("");
}
