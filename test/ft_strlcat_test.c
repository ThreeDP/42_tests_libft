#include "../test.h"

MU_TEST_SUITE(test_strlcat_concat_dest_watermelon_with_src_juice_with_size_16_should_be_watermelonjuice)
{
	//ARRANGE
	size_t	size = 16;
	char	dest[16] = "watermelon";
	char	src[] = "juice";
	char	expected_result[16] = "watermelonjuice";
	size_t	actual_result = 0;

	//ACT
	actual_result = ft_strlcat(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_result, dest);
}

MU_TEST_SUITE(test_strlcat_passing_a_string_size_11_with_a_inside_concat_with_lorem_size_15_should_be)
{
	//ARRANGE
	size_t	size = 15;
	char	dest[11] = "a";
	char	src[] = "lorem";
	char	expected_result[16] = "watermelonjuice";
	size_t	actual_result = 0;

	//ACT
	actual_result = ft_strlcat(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_result, dest);
}

MU_TEST_SUITE(test_suite)
{
    MU_RUN_TEST(test_strlcat_passing_a_string_size_11_with_a_inside_concat_with_lorem_size_15_should_be);
	MU_RUN_TEST(test_strlcat_concat_dest_watermelon_with_src_juice_with_size_16_should_be_watermelonjuice);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}