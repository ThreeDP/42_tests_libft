#include "../test.h"

MU_TEST_SUITE(passing_a_string_jogoctestcgame_should_be_jogotestgame)
{
	//ARRANGE
	int					i = 0;
	char				str[] = "jogo;test;game";
	char					expected_result[] = "jogo";
	char					**actual_result;

	//ACT
	actual_result = ft_split(str, ';');

	//ASSERT
	while (i < 4)
	{
		mu_assert_string_eq(expected_result, actual_result[i]);
		i++;
	}
	free(actual_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(passing_a_string_jogoctestcgame_should_be_jogotestgame);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}