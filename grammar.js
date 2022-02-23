module.exports = grammar({
	name: 'todotxt',

	rules: {
		source_file: ($) => repeat(seq(choice($.task, $.done_task), "\n")),

		task: ($) =>
			seq(
				optional($.priority),
				optional($.date),
				$._task
			),


		done_task: ($) =>
			seq(
				"x",
				optional($.date),
				optional($.date),
				$._task
			),

		_task: ($) =>
			seq(
				repeat1(
					choice(
						$._word,
						$.project,
						$.context,
						$.kv
					)
				)
			),

		date: ($) => /\d{4}-\d{2}-\d{2}/,

		project: ($) => /\+\w+/,

		context: ($) => /@\w+/,

		kv: ($) => /[^\s:]+:[^\s:]+/,

		priority: ($) => /\([A-Z]\)/,

		_word: ($) => /[^\s]+/
	}
})
