#include "../test.h"

MU_TEST_SUITE(test_strchr_passing_the_letter_A_to_find_in_amorA_must_return_the_address_of_indice_4)
{
	//ARRANGE
	int		chr = 'A';
	char	string[] = "amorA";
	char	*expected_result = &string[4];
	char	*actual_result;

	//ACT
	actual_result = ft_strchr(string, chr);

	//ASSERT
	mu_assert(expected_result == actual_result, "Expected and Actual result should be de same!");
}

MU_TEST_SUITE(test_strchr_look_up_non_existing_character_in_string_should_return_NULL)
{
	//ARRANGE
	const char	string[] = "banana";
	int			character = 'z';
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);

	//ASSERT
	mu_check(expected_result == actual_result);
}

MU_TEST_SUITE(test_strchr_look_up_existing_character_in_string_should_return_its_address)
{
	//ARRANGE
	char	string[] = "banana";
	int			character = 'n';
	char		*expected_result = &string[2]; //first 'n' address
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result content is different from actual_result");
}

MU_TEST_SUITE(test_strchr_look_up_null_character_in_string_should_return_the_terminating_zero_address)
{
	//ARRANGE
	char	string[] = "banana";
	int			character = '\0';
	char		*expected_result = &string[6]; // address of terminating '\0'
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should point to the terminating '\\0'");
}

MU_TEST_SUITE(test_strchr_look_up_character_in_empty_string_should_return_null)
{
	//ARRANGE
	char		string[] = "";
	int			character = 'c';
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strchr_look_up_character_in_null_string_should_return_null)
{
	//ARRANGE
	char		string[0];
	int			character = 'c';
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test)
{
	//ARRANGE
	char		string[] = "tripouille";
	int			character = 't' + 256;
	char		*expected_result = "tripouille";
	char		*actual_result;

	//ACT
	actual_result = ft_strchr(string, character);
	printf("\n%c\n", character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test);
    MU_RUN_TEST(test_strchr_look_up_non_existing_character_in_string_should_return_NULL);
	MU_RUN_TEST(test_strchr_look_up_existing_character_in_string_should_return_its_address);
	MU_RUN_TEST(test_strchr_look_up_null_character_in_string_should_return_the_terminating_zero_address);
	MU_RUN_TEST(test_strchr_look_up_character_in_empty_string_should_return_null);
	MU_RUN_TEST(test_strchr_passing_the_letter_A_to_find_in_amorA_must_return_the_address_of_indice_4);
	MU_RUN_TEST(test_strchr_look_up_character_in_null_string_should_return_null);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}