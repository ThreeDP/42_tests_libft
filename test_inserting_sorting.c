#include <stdlib.h>
#include "minunit.h"
#include <ctype.h>

void	*ft_inserting_sorting(void *list, size_t size);

MU_TEST_SUITE(test_sorting)
{
	//ARRANGE
	char	string[] = "374105";
	size_t	size = 6;
	char	expected_result[] = "013457";
	char	*actual_result;

	//ACT
	actual_result = ft_inserting_sorting(string, size);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_sorting);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
