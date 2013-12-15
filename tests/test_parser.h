void parse_null_returns_null(void **state);
void parse_empty_returns_null(void **state);
void parse_space_returns_null(void **state);
void parse_cmd_no_args_returns_null(void **state);
void parse_cmd_with_space_returns_null(void **state);
void parse_cmd_with_too_few_returns_null(void **state);
void parse_cmd_with_too_many_returns_null(void **state);
void parse_cmd_one_arg(void **state);
void parse_cmd_two_args(void **state);
void parse_cmd_three_args(void **state);
void parse_cmd_three_args_with_spaces(void **state);
void parse_cmd_with_freetext(void **state);
void parse_cmd_one_arg_with_freetext(void **state);
void parse_cmd_two_args_with_freetext(void **state);
void parse_cmd_min_zero(void **state);
void parse_cmd_min_zero_with_freetext(void **state);
void parse_cmd_with_quoted(void **state);
void parse_cmd_with_quoted_and_space(void **state);
void parse_cmd_with_quoted_and_many_spaces(void **state);
void parse_cmd_with_many_quoted_and_many_spaces(void **state);
void parse_cmd_freetext_with_quoted(void **state);
void parse_cmd_freetext_with_quoted_and_space(void **state);
void parse_cmd_freetext_with_quoted_and_many_spaces(void **state);
void parse_cmd_freetext_with_many_quoted_and_many_spaces(void **state);
void parse_cmd_with_quoted_freetext(void **state);
void parse_cmd_with_third_arg_quoted_0_min_3_max(void **state);
void parse_cmd_with_second_arg_quoted_0_min_3_max(void **state);
void parse_cmd_with_second_and_third_arg_quoted_0_min_3_max(void **state);
void count_one_token(void **state);
void count_one_token_quoted_no_whitespace(void **state);
void count_one_token_quoted_with_whitespace(void **state);
void count_two_tokens(void **state);
void count_two_tokens_first_quoted(void **state);
void count_two_tokens_second_quoted(void **state);
void count_two_tokens_both_quoted(void **state);
void get_first_of_one(void **state);
void get_first_of_two(void **state);
void get_first_two_of_three(void **state);
void get_first_two_of_three_first_quoted(void **state);
void get_first_two_of_three_second_quoted(void **state);
void get_first_two_of_three_first_and_second_quoted(void **state);