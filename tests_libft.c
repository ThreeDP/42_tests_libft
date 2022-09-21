#include <stdlib.h>
#include "minunit.h"
#include "../libft.h"

MU_TEST_SUITE(test_isdigit_entering_c_returns_false)
{
	//ARRANGE
	int		input = 'c';
	int		expected_result = 0; // false
	int		actual_result;

	//ACT
	actual_result = ft_isdigit(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}
/*
MU_TEST_SUITE(test_strlcpy_entering_ai_oi_2_set_dst_as_o_and_returns_2)
{
	//ARRANGE
	char	dst[] = "ai";
	char	src[] = "oi";
	int		size = 2;
	int		expected_result = 2;
	char	expected_dst[] = "o";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(test_strlcpy_entering_ah_oi_3_set_dst_as_oi_and_returns_2)
{
	//ARRANGE
	char	dst[] = "ah";
	char	src[] = "oi";
	int		size = 3;
	int		expected_result = 2;
	char	expected_dst[] = "oi";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(test_strlcpy_entering_papel_boiada_7_set_dst_as_boiada_and_returns_6)
{
	//ARRANGE
	char	dst[] = "papel";
	char	src[] = "boiada";
	int		size = 7;
	int		expected_result = 6;
	char	expected_dst[] = "boiada";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(test_strlcpy_entering_ah_boi_3_set_dst_as_bo_and_returns_3)
{
	//ARRANGE
	char	dst[] = "ah";
	char	src[] = "boi";
	int		size = 3;
	int		expected_result = 3;
	char	expected_dst[] = "bo";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(test_strlcpy_entering_papelada_boiada_9_keep_dst7_as_a)
{
	//ARRANGE
	char	dst[] = "papelada";
	char	src[] = "boiada";
	int		size = 9;

	//ACT
	ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq('a', dst[7]);
}

MU_TEST_SUITE(test_strlcpy_entering_lu_la_minus_1_set_dst_as_la_and_returns_2)
{
	//ARRANGE
	char	dst[] = "lu";
	char	src[] = "la";
	int		size = -1;
	int		expected_result = 2;
	char	expected_dst[] = "la";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}

MU_TEST_SUITE(test_strlcpy_entering_mochida_rapdos_0_do_not_modify_dst_and_returns_6)
{
	//ARRANGE
	char	dst[] = "mochida";
	char	src[] = "rapdos";
	int		size = 0;
	int		expected_result = 6;
	char	expected_dst[] = "mochida";
	int		actual_result;

	//ACT
	actual_result = ft_strlcpy(dst, src, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
	mu_assert_string_eq(expected_dst, dst);
}


MU_TEST_SUITE(test_strnstr_to_find_ora_em_amora_should_return_a_pointer_to_ora_in_amora)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "ora";
	size_t		len = 3;
	char		*expected_result = &big[2];
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should point to address of the char o of amora");
}

MU_TEST_SUITE(test_strnstr_to_find_aro_em_amora_should_return_NULL)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "aro";
	size_t		len = 3;
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strnstr_if_little_is_empty_string_return_big)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "";
	size_t		len = 3;
	char		*expected_result = big;
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be point to amora first position");
}

MU_TEST_SUITE(test_strnstr_finding_orabolas_in_amora_but_len_3_should_return_pointer_to_ora_in_amora)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "orabolas";
	size_t		len = 3;
	char		*expected_result = &big[2];
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should point to ora position in amora");
}

MU_TEST_SUITE(test_strnstr_finding_ora_in_amora_but_len_0_should_return_NULL)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "ora";
	size_t		len = 0;
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strnstr_finding_ora_in_amora_but_len_50_should_return_pointer_to_ora_in_amora)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "ora";
	size_t		len = 50;
	char		*expected_result = &big[2];
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should point to ora position in amora");
}

MU_TEST_SUITE(test_strnstr_finding_orabolas_in_amora_but_len_50_should_return_NULL)
{
	//ARRANGE
	char		big[] = "amora";
	char		little[] = "orabolas";
	size_t		len = 50;
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, len);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_memmove_move_two_pos_memory_of_same_size_words)
{
	//ARRANGE
	const char	dest[] = "lula";
	char		src[] = "davy";
	char	expected_dest[] = "dala";
	char	*expected_memory_position = dest;
	char	*returned_memory_position;
	size_t	size = 2;

	//ACT
	returned_memory_position = ft_memmove(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, dest);
	mu_assert(expected_memory_position == returned_memory_position, "the returned memory position should be dest!!");
}*/

MU_TEST_SUITE(test_if_enter_the_letter_a_lowercase_in_isalpha_func_result_in_true)
{
	//ARRANGE
	int	letter = 97;
	int	returned_result;

	//ACT
	returned_result = ft_isalpha(letter);

	//ASSERT
	mu_assert(returned_result > 0, "the returned result should be TRUE");
}

MU_TEST_SUITE(test_if_enter_the_letter_A_uppercase_in_isalpha_func_result_in_true)
{
	//ARRANGE
	int	letter = 65;
	int	returned_result;

	//ACT
	returned_result = ft_isalpha(letter);

	//ASSERT
	mu_assert(returned_result > 0, "the returned result should be TRUE");
}

MU_TEST_SUITE(test_if_enter_the_digit_0_in_isalpha_func_result_in_false)
{
	//ARRANGE
	int	letter = 48;
	int	returned_result;

	//ACT
	returned_result = ft_isalpha(letter);

	//ASSERT
	mu_assert(returned_result == 0, "the returned result should be FALSE");
}

MU_TEST_SUITE(test_if_enter_the_character_DEL_in_isalpha_func_result_in_false)
{
	//ARRANGE
	int	letter = 127;
	int	returned_result;

	//ACT
	returned_result = ft_isalpha(letter);

	//ASSERT
	mu_assert(returned_result == 0, "the returned result should be FALSE");
}

MU_TEST_SUITE(test_if_enter_the_character_asterisk_in_isalpha_func_result_in_false)
{
	//ARRANGE
	int	letter = 42;
	int	returned_result;

	//ACT
	returned_result = ft_isalpha(letter);

	//ASSERT
	mu_assert(returned_result == 0, "the returned result should be FALSE");
}

MU_TEST_SUITE(test_enter_caracter_new_line_in_func_isprint)
{
	//ARRANGE
	int	letter = 10;
	int	returned_result;

	//ACT
	returned_result = ft_isprint(letter);

	//ASSERT
	mu_assert(returned_result == 0, "the returned result should be FALSE");
}

MU_TEST_SUITE(test_enter_caracter_space_in_func_isprint)
{
	//ARRANGE
	int	letter = 32;
	int	returned_result;

	//ACT
	returned_result = ft_isprint(letter);

	//ASSERT
	mu_assert(returned_result > 0, "the returned result should be TRUE");
}

MU_TEST_SUITE(test_enter_caracter_NULL_in_func_isprint)
{
	//ARRANGE
	int	letter = 0;
	int	returned_result;

	//ACT
	returned_result = ft_isprint(letter);

	//ASSERT
	mu_assert(returned_result == 0, "the returned result should be FALSE");
}

MU_TEST_SUITE(test_enter_caracter_asterisk_in_func_isprint)
{
	//ARRANGE
	int	letter = 42;
	int	returned_result;

	//ACT
	returned_result = ft_isprint(letter);

	//ASSERT
	mu_assert(returned_result > 0, "the returned result should be TRUE");
}

MU_TEST_SUITE(test_enter_a_string_empty_in_func_strlen)
{
	//ARRANGE
	char	string[] = "";
	int		expected_result = 0;
	int		returned_result;

	//ACT
	returned_result = ft_strlen(string);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_enter_a_string_with_seven_characters_in_func_strlen)
{
	//ARRANGE
	char	string[] = "abacate";
	int		expected_result = 7;
	int		returned_result;

	//ACT
	returned_result = ft_strlen(string);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_enter_a_string_with_a_NULL_character_in_func_strlen)
{
	//ARRANGE
	char	string[] = "\0";
	int		expected_result = 0;
	int		returned_result;

	//ACT
	returned_result = ft_strlen(string);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_func_memset_fill_5_bytes_of_a_string_with_7_bytes_array_type_char)
{
	//ARRANGE
	char	string[] = "abacate";
	char	*expected_result = "*****te";
	int		character = 42;
	size_t	position = 5;
	char	*returned_result;

	//ACT
	returned_result = ft_memset(string, character, position);

	//ASSERT
	mu_assert_string_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_func_memset_fill_7_bytes_of_a_string_with_7_bytes_array_type_char)
{
	//ARRANGE
	char	string[] = "abacate";
	char	expected_result[] = "*******";
	int		character = 42;
	size_t	position = 7;
	char	*returned_result;

	//ACT
	returned_result = ft_memset(string, character, position);

	//ASSERT
	mu_assert_string_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_func_memset_fill_5_bytes_of_a_array_int_with_28_bytes)
{
	//ARRANGE
	int		array[] = {1, 2, 3, 4, 5, 6, 7};
	int		expected_result[] = {0, 0, 0, 0, 0, 6, 7};
	int		character = 0;
	size_t	position = 5;
	int		*returned_result;
	size_t	i = 0;

	//ACT
	returned_result = ft_memset(array, character, sizeof(int) * position);

	//ASSERT
	while (i < position)
	{
		mu_assert_int_eq(expected_result[i], array[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_memset_fill_0_bytes_of_a_array_int_with_28_bytes)
{
	//ARRANGE
	int		array[] = {1, 2, 3, 4, 5, 6, 7};
	int		expected_result[] = {0, 0, 0, 0, 0, 6, 7};
	int		character = 0;
	size_t	position = 0;
	int		*returned_result;
	size_t	i = 0;

	//ACT
	returned_result = ft_memset(array, character, sizeof(int) * position);

	//ASSERT
	while (i < position)
	{
		mu_assert_int_eq(expected_result[i], array[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_bzero_fill_5_positions_in_a_string_of_7_bytes)
{
	//ARRANGE
	char	string[] = "abacate";
	char	expected_result[] = "\0\0\0\0\0te";
	size_t	position = 5;
	size_t	i = 0;

	//ACT
	ft_bzero(string, position);

	//ASSERT
	while (i < 7)
	{
		mu_assert_int_eq(expected_result[i], string[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_bzero_fill_7_positions_in_a_string_of_7_bytes)
{
	//ARRANGE
	char	string[] = "abacate";
	char	expected_result[] = "\0\0\0\0\0\0\0";
	size_t	position = 7;
	size_t	i = 0;

	//ACT
	ft_bzero(string, position);

	//ASSERT
	while (i < 7)
	{
		mu_assert_int_eq(expected_result[i], string[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_bzero_fill_7_positions_in_a_array_int_with_28_bytes)
{
	//ARRANGE
	int		array[] = {1, 2, 3, 4, 5, 6, 7};
	char	expected_result[] = {0, 0, 0, 0, 0, 0, 0};
	size_t	position = 7;
	size_t	i = 0;

	//ACT
	ft_bzero(array, sizeof(int) * position);

	//ASSERT
	while (i < 7)
	{
		mu_assert_int_eq(expected_result[i], array[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_bzero_fill_0_positions_in_a_array_int_with_28_bytes)
{
	//ARRANGE
	int		array[] = {1, 2, 3, 4, 5, 6, 7};
	char	expected_result[] = {1, 2, 3, 4, 5, 6, 7};
	size_t	position = 0;
	size_t	i = 0;

	//ACT
	ft_bzero(array, sizeof(int) * position);

	//ASSERT
	while (i < 7)
	{
		mu_assert_int_eq(expected_result[i], array[i]);
		i++;
	}
}

MU_TEST_SUITE(test_func_memcpy_copy_a_string_of_5_char_in_a_string_of_5_char_in_differents_memory_locations)
{
	//ARRANGE
	char	src[] = "1234";
	char	dest[5];
	size_t	size = 5;
	char	expected_dest[] = "1234";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memcpy(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}

// Qual O motivo desse comportamento ?
MU_TEST_SUITE(test_func_memcpy_copy_a_string_of_6_char_in_a_string_of_5_char_in_differents_memory_locations)
{
	//ARRANGE
	char	src[] = "12345";
	char	dest[5];
	size_t	size = 5;
	char	expected_dest[] = "1234512345";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memcpy(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}

MU_TEST_SUITE(test_memcpy_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location)
{
	//ARRANGE
	char	src[] = "watermelonjuice";
	char	*dest = src + 5;
	size_t	size = 10;
	char	expected_dest[] = "waterwater";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memcpy(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}

MU_TEST_SUITE(test_func_memchr_locating_R_inside_AURORA_should_return_first_R_position)
{
	//ARRANGE
	char	string[] = "AURORA";
	int		find = 'R';
	size_t	size = 6;
	char	*expected_result = &string[2];
	char	*actual_result;

	//ACT]
	actual_result = ft_memchr(string, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be the same address");
}

MU_TEST_SUITE(test_func_memchr_locating_O_inside_AURORA_should_return_O_position)
{
	//ARRANGE
	char	string[] = "AURORA";
	int		find = 'O';
	size_t	size = 6;
	char	*expected_result = &string[3];
	char	*actual_result;

	//ACT
	actual_result = ft_memchr(string, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be the same address");
}

MU_TEST_SUITE(test_func_memchr_locating_X_inside_AURORA_should_return_NULL)
{
	//ARRANGE
	char	string[] = "AURORA";
	int		find = 'X';
	size_t	size = 6;
	char	*expected_result = 0;
	char	*actual_result;

	//ACT
	actual_result = ft_memchr(string, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_func_memchr_locating_O_inside_AURORA_with_a_range_of_3_should_return_NULL)
{
	//ARRANGE
	char	string[] = "AURORA";
	int		find = 'O';
	size_t	size = 3;
	char	*expected_result = 0;
	char	*actual_result;

	//ACT
	actual_result = ft_memchr(string, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_func_memchr_passing_size_0_should_return_NULL)
{
	//ARRANGE
	char	string[] = "AURORA";
	int		find = 'O';
	size_t	size = 0;
	char	*expected_result = 0;
	char	*actual_result;

	//ACT
	actual_result = ft_memchr(string, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}
/*
MU_TEST_SUITE(test_memmove_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location)
{
	//ARRANGE
	char	src[] = "watermelonjuice";
	char	*dest = src + 5;
	size_t	size = 10;
	char	expected_dest[] = "watermelon";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memmove(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}
*/
MU_TEST_SUITE(test_isalnum_passing_asterisk_should_be_false)
{
	//ARRANGE
	int		letter = '*';
	int		expected_result = 0;
	int		returned_result;

	//ACT
	returned_result = ft_isalnum(letter);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_isalnum_passing_number_should_be_true)
{
	//ARRANGE
	int		letter = '9';
	int		returned_result;

	//ACT
	returned_result = ft_isalnum(letter);

	//ASSERT
	mu_assert(returned_result > 0, "expected_result should be NULL");
}

MU_TEST_SUITE(test_isalnum_passing_letter_should_be_true)
{
	//ARRANGE
	int		letter = 'A';
	int		returned_result;

	//ACT
	returned_result = ft_isalnum(letter);

	//ASSERT
	mu_assert(returned_result > 0, "expected_result should be NULL");
}

MU_TEST_SUITE(test_isalnum_passing_out_of_the_range_should_be_zero)
{
	//ARRANGE
	int		letter = 128;
	int		expected_result = 0;
	int		returned_result;

	//ACT
	returned_result = ft_isalnum(letter);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_isascii_passing_number_should_be_true)
{
	//ARRANGE
	int		letter = '9';
	int		returned_result;

	//ACT
	returned_result = ft_isascii(letter);

	//ASSERT
	mu_assert(returned_result > 0, "expected_result should be NULL");
}

MU_TEST_SUITE(test_isascii_passing_out_of_the_range_should_be_false)
{
	//ARRANGE
	int		letter = 128;
	int		expected_result = 0;
	int		returned_result;

	//ACT
	returned_result = ft_isascii(letter);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_ascii_passing_a_letter_should_be_true)
{
	//ARRANGE
	int		letter = 'A';
	int		returned_result;

	//ACT
	returned_result = ft_isascii(letter);

	//ASSERT
	mu_assert(returned_result > 0, "expected_result should be NULL");
}

MU_TEST_SUITE(test_toupper_passing_a_char_number_should_be_itself)
{
	//ARRANGE
	int		chr = '5';
	int		returned_result;
	int		expected_result = '5';

	//ACT
	returned_result = ft_toupper(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_toupper_passing_the_letter_a_lowercase_should_be_A_uppercase)
{
	//ARRANGE
	int		chr = 'a';
	int		returned_result;
	int		expected_result = 'A';

	//ACT
	returned_result = ft_toupper(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_toupper_passing_the_int_128_should_be_itself)
{
	//ARRANGE
	int		chr = 128;
	int		returned_result;
	int		expected_result = 128;

	//ACT
	returned_result = ft_toupper(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_toupper_passing_A_uppercase_char_should_be_itself)
{
	//ARRANGE
	int		chr = 'A';
	int		returned_result;
	int		expected_result = 'A';

	//ACT
	returned_result = ft_toupper(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_tolower_passing_a_char_number_should_be_itself)
{
	//ARRANGE
	int		chr = '5';
	int		returned_result;
	int		expected_result = '5';

	//ACT
	returned_result = ft_tolower(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_tolower_passing_the_letter_Z_uppercase_should_be_z_lowercase)
{
	//ARRANGE
	int		chr = 'Z';
	int		returned_result;
	int		expected_result = 'z';

	//ACT
	returned_result = ft_tolower(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_tolower_passing_the_int_128_should_be_itself)
{
	//ARRANGE
	int		chr = 128;
	int		returned_result;
	int		expected_result = 128;

	//ACT
	returned_result = ft_tolower(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

MU_TEST_SUITE(test_tolower_passing_z_lowercase_char_should_be_itself)
{
	//ARRANGE
	int		chr = 'z';
	int		returned_result;
	int		expected_result = 'z';

	//ACT
	returned_result = ft_tolower(chr);

	//ASSERT
	mu_assert_int_eq(expected_result, returned_result);
}

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

MU_TEST_SUITE(test_strrchr_look_up_character_in_empty_string_should_return_null)
{
	//ARRANGE
	char		string[] = "";
	int			character = 'c';
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strrchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strrchr_passing_the_letter_A_to_find_in_Amora_must_return_the_address_of_indice_zero)
{
	//ARRANGE
	int		chr = 'A';
	char	string[] = "Amora";
	char	*expected_result = &string[0];
	char	*actual_result;

	//ACT
	actual_result = ft_strrchr(string, chr);

	//ASSERT
	mu_assert(expected_result == actual_result, "Expected and Actual result should be de same!");
}

MU_TEST_SUITE(test_strrchr_look_up_character_in_null_string_should_return_null)
{
	//ARRANGE
	char		string[0];
	int			character = 'c';
	char		*expected_result = NULL;
	char		*actual_result;

	//ACT
	actual_result = ft_strrchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strrchr_look_up_NULL_character_in_Amora_string_should_return_null)
{
	//ARRANGE
	char		string[] = "Amora";
	int			character = '\0';
	char		*expected_result = &string[5];
	char		*actual_result;

	//ACT
	actual_result = ft_strrchr(string, character);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be NULL");
}

MU_TEST_SUITE(test_strlen_passing_a_NULL_string_should_be_NULL)
{
	//ARRANGE
	char	str[0];
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strlen(str);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strncmp_passing_two_strings_DIA_compare_to_DIA_with_range_three_and_should_be_zero)
{
	//ARRANGE
	char	s1[] = "DIA";
	char	s2[] = "DIA";
	size_t	size = 3;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strncmp(s1, s2, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strncmp_passing_two_strings_LUA_compare_to_MUA_with_range_three_and_should_be_one_less)
{
	//ARRANGE
	char	s1[] = "LUA";
	char	s2[] = "MUA";
	size_t	size = 3;
	int		expected_result = -1;
	int		actual_result;

	//ACT
	actual_result = ft_strncmp(s1, s2, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strncmp_passing_two_empty_strings_and_range_3_should_be_zero)
{
	//ARRANGE
	char	s1[] = "";
	char	s2[] = "";
	size_t	size = 3;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strncmp(s1, s2, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strncmp_passing_two_strings_index_4_with_a_diff_inside_the_index_4_with_range_3)
{
	//ARRANGE
	char	s1[] = "LUA1";
	char	s2[] = "LUA2";
	size_t	size = 3;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strncmp(s1, s2, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite) {
	// strncmp tests
	MU_RUN_TEST(test_strncmp_passing_two_strings_index_4_with_a_diff_inside_the_index_4_with_range_3);
	MU_RUN_TEST(test_strncmp_passing_two_empty_strings_and_range_3_should_be_zero);
	MU_RUN_TEST(test_strncmp_passing_two_strings_LUA_compare_to_MUA_with_range_three_and_should_be_one_less);
	MU_RUN_TEST(test_strncmp_passing_two_strings_DIA_compare_to_DIA_with_range_three_and_should_be_zero);
	// strrchr tests
	MU_RUN_TEST(test_strrchr_look_up_NULL_character_in_Amora_string_should_return_null);
	MU_RUN_TEST(test_strrchr_look_up_character_in_null_string_should_return_null);
	MU_RUN_TEST(test_strrchr_look_up_character_in_empty_string_should_return_null);
	MU_RUN_TEST(test_strrchr_passing_the_letter_A_to_find_in_Amora_must_return_the_address_of_indice_zero);
	// strchr tests
	MU_RUN_TEST(test_strchr_look_up_non_existing_character_in_string_should_return_NULL);
	MU_RUN_TEST(test_strchr_look_up_existing_character_in_string_should_return_its_address);
	MU_RUN_TEST(test_strchr_look_up_null_character_in_string_should_return_the_terminating_zero_address);
	MU_RUN_TEST(test_strchr_look_up_character_in_empty_string_should_return_null);
	MU_RUN_TEST(test_strchr_passing_the_letter_A_to_find_in_amorA_must_return_the_address_of_indice_4);
	MU_RUN_TEST(test_strchr_look_up_character_in_null_string_should_return_null);
	// tolower tests
	MU_RUN_TEST(test_tolower_passing_z_lowercase_char_should_be_itself);
	MU_RUN_TEST(test_tolower_passing_a_char_number_should_be_itself);
	MU_RUN_TEST(test_tolower_passing_the_letter_Z_uppercase_should_be_z_lowercase);
	MU_RUN_TEST(test_tolower_passing_the_int_128_should_be_itself);
	// toupper tests
	MU_RUN_TEST(test_toupper_passing_A_uppercase_char_should_be_itself);
	MU_RUN_TEST(test_toupper_passing_the_int_128_should_be_itself);
	MU_RUN_TEST(test_toupper_passing_the_letter_a_lowercase_should_be_A_uppercase);
	MU_RUN_TEST(test_toupper_passing_a_char_number_should_be_itself);
	// isascii tests
	MU_RUN_TEST(test_ascii_passing_a_letter_should_be_true);
	MU_RUN_TEST(test_isascii_passing_number_should_be_true);
	MU_RUN_TEST(test_isascii_passing_out_of_the_range_should_be_false);
	// isalnum tests
	MU_RUN_TEST(test_isalnum_passing_out_of_the_range_should_be_zero);
	MU_RUN_TEST(test_isalnum_passing_letter_should_be_true);
	MU_RUN_TEST(test_isalnum_passing_asterisk_should_be_false);
	MU_RUN_TEST(test_isalnum_passing_number_should_be_true);
	// memmove tests
	// MU_RUN_TEST(test_memmove_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location);
	// memcpy tests
	MU_RUN_TEST(test_func_memcpy_copy_a_string_of_5_char_in_a_string_of_5_char_in_differents_memory_locations);
	MU_RUN_TEST(test_func_memcpy_copy_a_string_of_6_char_in_a_string_of_5_char_in_differents_memory_locations);
	MU_RUN_TEST(test_memcpy_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location);
	// memchr
	MU_RUN_TEST(test_func_memchr_passing_size_0_should_return_NULL);
	MU_RUN_TEST(test_func_memchr_locating_O_inside_AURORA_with_a_range_of_3_should_return_NULL);
	MU_RUN_TEST(test_func_memchr_locating_X_inside_AURORA_should_return_NULL);
	MU_RUN_TEST(test_func_memchr_locating_O_inside_AURORA_should_return_O_position);
	MU_RUN_TEST(test_func_memchr_locating_R_inside_AURORA_should_return_first_R_position);
	// bzero tests
	MU_RUN_TEST(test_func_bzero_fill_5_positions_in_a_string_of_7_bytes);
	MU_RUN_TEST(test_func_bzero_fill_7_positions_in_a_string_of_7_bytes);
	MU_RUN_TEST(test_func_bzero_fill_7_positions_in_a_array_int_with_28_bytes);
	MU_RUN_TEST(test_func_bzero_fill_0_positions_in_a_array_int_with_28_bytes);
	// memset tests
	MU_RUN_TEST(test_func_memset_fill_5_bytes_of_a_string_with_7_bytes_array_type_char);
	MU_RUN_TEST(test_func_memset_fill_7_bytes_of_a_string_with_7_bytes_array_type_char);
	MU_RUN_TEST(test_func_memset_fill_5_bytes_of_a_array_int_with_28_bytes);
	MU_RUN_TEST(test_func_memset_fill_0_bytes_of_a_array_int_with_28_bytes);
	// strlen tests
	MU_RUN_TEST(test_strlen_passing_a_NULL_string_should_be_NULL);
	MU_RUN_TEST(test_enter_a_string_empty_in_func_strlen);
	MU_RUN_TEST(test_enter_a_string_with_seven_characters_in_func_strlen);
	MU_RUN_TEST(test_enter_a_string_with_a_NULL_character_in_func_strlen);
	// isprint tests
	MU_RUN_TEST(test_enter_caracter_new_line_in_func_isprint);
	MU_RUN_TEST(test_enter_caracter_space_in_func_isprint);
	MU_RUN_TEST(test_enter_caracter_NULL_in_func_isprint);
	MU_RUN_TEST(test_enter_caracter_asterisk_in_func_isprint);
	// isdigit tests
	MU_RUN_TEST(test_isdigit_entering_c_returns_false);
	// isalpha tests
	MU_RUN_TEST(test_if_enter_the_letter_a_lowercase_in_isalpha_func_result_in_true);
	MU_RUN_TEST(test_if_enter_the_letter_A_uppercase_in_isalpha_func_result_in_true);
	MU_RUN_TEST(test_if_enter_the_digit_0_in_isalpha_func_result_in_false);
	MU_RUN_TEST(test_if_enter_the_character_DEL_in_isalpha_func_result_in_false);
	MU_RUN_TEST(test_if_enter_the_character_asterisk_in_isalpha_func_result_in_false);
	// strlcpy tests
		/*
	MU_RUN_TEST(test_strlcpy_entering_mochida_rapdos_0_do_not_modify_dst_and_returns_6);
	MU_RUN_TEST(test_strlcpy_entering_lu_la_minus_1_set_dst_as_la_and_returns_2);
	MU_RUN_TEST(test_strlcpy_entering_papelada_boiada_9_keep_dst7_as_a);
	MU_RUN_TEST(test_strlcpy_entering_ai_oi_2_set_dst_as_o_and_returns_2);
	MU_RUN_TEST(test_strlcpy_entering_papel_boiada_7_set_dst_as_boiada_and_returns_6);
	MU_RUN_TEST(test_strlcpy_entering_ah_boi_3_set_dst_as_bo_and_returns_3);
	MU_RUN_TEST(test_strlcpy_entering_ah_oi_3_set_dst_as_oi_and_returns_2);
	
	MU_RUN_TEST(test_strnstr_to_find_ora_em_amora_should_return_a_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_to_find_aro_em_amora_should_return_NULL);
	MU_RUN_TEST(test_strnstr_if_little_is_empty_string_return_big);
	MU_RUN_TEST(test_strnstr_finding_orabolas_in_amora_but_len_3_should_return_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_finding_ora_in_amora_but_len_0_should_return_NULL);
	MU_RUN_TEST(test_strnstr_finding_ora_in_amora_but_len_50_should_return_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_finding_orabolas_in_amora_but_len_50_should_return_NULL);
	//MU_RUN_TEST(test_memmove_move_two_pos_memory_of_same_size_words);
	//MU_RUN_TEST(test_memmove_move_three_pos_memory_of_same_size_words);*/
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
