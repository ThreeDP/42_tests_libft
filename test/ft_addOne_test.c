#include "../test.h"

MU_TEST_SUITE(receive_char_D_and_iter_1_should_be_E)
{
	//ARRANGE
	char	first_name_letter = 'D';
	char	expected_letter = 'E';
	char	actual_result;
	int		iter = 1;

	actual_result = add_one(iter, first_name_letter);
	mu_assert_int_eq(expected_letter, actual_result);
}

MU_TEST_SUITE(receive_char_f_and_int_2_should_be_h)
{
	//ARRANGE
	char	first_name_letter = 'f';
	char	expected_letter = 'h';
	char	actual_result;
	int		iter = 2;

	actual_result = add_one(iter, first_name_letter);
	mu_assert_int_eq(expected_letter, actual_result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(receive_char_D_and_iter_1_should_be_E);
	MU_RUN_TEST(receive_char_f_and_int_2_should_be_h);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}