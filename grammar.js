module.exports = grammar({
  name: "mix_lock",

  extras: ($) => [
    /\s/, // Whitespace
  ],

  rules: {
    file: ($) => seq("%{", optional($._package_entries), "}"),

    _package_entries: ($) => repeat1($.package_entry),

    package_entry: ($) =>
      seq($.package_name, ":", $._package_details, optional(",")),

    package_name: ($) => /"[\w\-]+"/,

    _package_details: ($) =>
      seq(
        "{",
        ":hex,",
        $.atom,
        ",",
        $.version,
        ",",
        $.checksum,
        ",",
        $.build_tools,
        ",",
        $.dependencies,
        ",",
        $.repo,
        ",",
        $.optional_checksum,
        "}"
      ),

    atom: ($) => seq(":", /\w+/),

    version: ($) => seq('"', /\d+\.\d+\.\d+/, '"'),

    checksum: ($) => seq('"', /[a-f0-9]{64}/, '"'),

    build_tools: ($) => seq("[", optional($.atoms), "]"),

    atoms: ($) => repeat1(seq($.atom, optional(","))),
    dependencies: ($) => seq("[", optional($.dependency_list), "]"),

    dependency_list: ($) => repeat1(seq($.dependency, optional(","))),

    dependency: ($) =>
      seq(
        "{",
        $.atom,
        ",",
        $.version_requirement,
        ",",
        $.dependency_details,
        "}"
      ),

    version_requirement: ($) => seq('"', /[^"]+/, '"'),

    dependency_details: ($) => seq("[", optional($.key_value_pairs), "]"),

    key_value_pairs: ($) =>
      repeat1(seq(choice($.atom_pair, $.key_value_pair), optional(","))),
    atom_pair: ($) => seq("hex:", $.atom),

    key_value_pair: ($) => seq(/[a-zA-Z_]+/, ":", $.value),

    value: ($) => choice($.boolean, $.atom, $.string),

    boolean: ($) => choice("true", "false"),

    string: ($) => seq('"', /[^"]*/, '"'),

    repo: ($) => seq('"hexpm"'),

    optional_checksum: ($) => seq('"', /[a-f0-9]{64}/, '"'),
  },
});
