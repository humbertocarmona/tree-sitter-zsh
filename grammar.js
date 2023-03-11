module.exports = grammar({
  name: "zsh",

  rules: {
    program: $ => optional($._statements),

    _statements: $ =>
      prec(
        1,
        seq(
          repeat(seq($._statement, $._terminator)),
          $._statement,
          optional($._terminator)
        )
      ),

    _statement: $ => choice($.command),

    command: $ =>
      prec.left(
        seq(
          field("name", $.command_name),
          repeat(
            field(
              "argument",
              choice($._literal, seq(choice("=~", "=="), choice($._literal)))
            )
          )
        )
      ),

    command_name: $ => $._literal,

    _literal: $ => choice(
      $.word
    ),

    word: $ => token(repeat1(choice(
      new RegExp('[a-zA-Z]'),
      seq('\\', new RegExp('[^\\s]'))
    ))),

    _terminator: $ => choice(";", ";;", "\n", "&")
  }
})
