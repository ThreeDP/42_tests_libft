
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
	char		*expected_result = NULL;
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
	char		*expected_result = NULL;
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

MU_TEST_SUITE(test_strnstr_finding_ora_in_amorao_but_len_50_should_return_pointer_to_ora_in_amora)
{
	//ARRANGE
	char		big[] = "amorao";
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
/*
MU_TEST_SUITE(test_memmove_move_two_pos_memory_of_same_size_words)
{
	//ARRANGE
	const char	dest[] = "lula";
	char		src[] = "davy";
	char	expected_memory_position = ;
	char	*returned_memory_position;
	size_t	size = 2;

	//ACT
	returned_memory_position = ft_memmove(dest, src, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, dest);
	mu_assert(expected_memory_position == returned_memory_position, "the returned memory position should be dest!!");
}
*/
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
		mu_assert_int_eq(expected_result[i], returned_result[i]);
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
		mu_assert_int_eq(expected_result[i], returned_result[i]);
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


// Why this test works ? i really do'nt undestand
MU_TEST_SUITE(test_func_memchr_passing_a_array_int_with_7_elements_should_be_a_pointer_for_3_index)
{
	//ARRANGE
	int 	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	int		find = -1;
	size_t	size = 7;
	int		*expected_result = memchr(tab, find, size);
	int		*actual_result;

	//ACT
	actual_result = ft_memchr(tab, find, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected_result should be pointer for index 3");
}

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

MU_TEST_SUITE(test_strncmp_passing_two_strings_DIA_bar_200_compare_to_DIA_bar_0_with_range_5_and_should_be_1)
{
	//ARRANGE
	char	s1[] = "DIA\200";
	char	s2[] = "DIA\0";
	size_t	size = 5;
	int		expected_result = 128;
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

MU_TEST_SUITE(test_strncmp_passing_two_strings_equal_with_range_zero)
{
	//ARRANGE
	char	s1[] = "LUA";
	char	s2[] = "LUA";
	size_t	size = 0;
	int		expected_result = 0;
	int		actual_result;

	//ACT
	actual_result = ft_strncmp(s1, s2, size);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strnstr_passing_a_little_Bar_to_big_Foo_Bar_Baz_with_range_8_should_be_address_index_4)
{
	//ARRANGE
	char	big[] = "Foo Bar Baz";
	char	little[] = "Bar";
	size_t	size = 8;
	char	*expected_result = &big[4];
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be the same address");
}

MU_TEST_SUITE(test_strnstr_passing_a_little_Bar_to_big_Foo_Bal_Bar_Baz_with_range_16_should_be_address_index_8)
{
	//ARRANGE
	char	big[] = "Foo Bal Bar Baz";
	char	little[] = "Bar";
	size_t	size = 16;
	char	*expected_result = &big[8];
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be the same address");
}

MU_TEST_SUITE(test_strnstr_passing_a_little_Bar_to_big_Foo_Baz_with_range_8_should_be_NULL)
{
	//ARRANGE
	char	big[] = "Foo Baz";
	char	little[] = "Bar";
	size_t	size = 8;
	char	*expected_result = 0;
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be the same address");
}

MU_TEST_SUITE(test_strnstr_passing_a_little_empty_string_to_big_Foo_Bar_Baz_with_range_12_should_be_big)
{
	//ARRANGE
	char	big[] = "Foo Bar Baz";
	char	little[] = "";
	size_t	size = 12;
	char	*expected_result = big;
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be the same address");
}

MU_TEST_SUITE(test_strnstr_passing_a_little_string_Bar_bigger_then_string_big_Fo_with_range_7_should_be_NULL)
{
	//ARRANGE
	char	big[] = "Fo";
	char	little[] = "Bar";
	size_t	size = 7;
	char	*expected_result = NULL;
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be the same address");
}



MU_TEST_SUITE(test_calloc_passing_array_type_char_with_5_bytes_should_be_5_bytes_zero)
{
	//ARRANGE
	size_t	nmemb = 5;
	size_t	size_type = sizeof(char);
	char	*expected_result = (char *) calloc(nmemb, size_type);
	char	*actual_result;
	size_t	i;

	//ACT
	actual_result = (char *)ft_calloc(nmemb, size_type);

	//ASSERT
	i = 0;
	while (i < (nmemb * size_type))
	{
		mu_assert_int_eq(expected_result[i], actual_result[i]);
		i++;
	}
}

MU_TEST_SUITE(test_calloc_passing_array_type_char_with_6_bytes_should_be_6_bytes_zero)
{
	//ARRANGE
	size_t	nmemb = 6;
	size_t	size_type = sizeof(char);
	char	*expected_result = (char *) calloc(nmemb, size_type);
	char	*actual_result;
	size_t	i;

	//ACT
	actual_result = (char *)ft_calloc(nmemb, size_type);

	//ASSERT
	i = 0;
	while (i < (nmemb * size_type))
	{
		mu_assert_int_eq(expected_result[i], actual_result[i]);
		i++;
	}
}

MU_TEST_SUITE(test_calloc_passing_array_type_char_with_nmemb_zero_should_be_NULL)
{
	//ARRANGE
	size_t	nmemb = 0;
	size_t	size_type = sizeof(int);
	int		*expected_result = NULL;
	int		*actual_result;

	//ACT
	actual_result = (int *)ft_calloc(nmemb, size_type);

	//ASSERT
	mu_assert(expected_result == actual_result, "Expected actual result should be NULL");
}

MU_TEST_SUITE(test_calloc_passing_array_size_0_with_nmemb_2_should_be_NULL)
{
	//ARRANGE
	size_t	nmemb = 2;
	size_t	size_type = 0;
	int		*expected_result = NULL;
	int		*actual_result;

	//ACT
	actual_result = (int *)ft_calloc(nmemb, size_type);

	//ASSERT
	mu_assert(expected_result == actual_result, "Expected actual result should be NULL");

}

MU_TEST_SUITE(test_calloc_passing_array_int_with_nmemb_MAX_INT_should_be_killed)
{
	//ARRANGE
	size_t	nmemb = ~(1<<31);
	size_t	size_type = sizeof(int);
	int		*expected_result = NULL;
	int		*actual_result;

	//ACT
	actual_result = (int *)ft_calloc(nmemb, size_type);

	//ASSERT
	mu_assert(expected_result == actual_result, "Expected actual result should be NULL");
}

MU_TEST_SUITE(test_strnstr_passing_a_lorem_ipsum_text_and_search_for_ipsumm_with_size_30)
{
	//ARRANGE
	char	big[] = "lorem ipsum dolor sit amet";
	char	little[] = "ipsumm";
	size_t	size = 30;
	char	*expected_result = NULL;
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be NULL");
}

MU_TEST_SUITE(test_strnstr_passing_a_lorem_ipsum_dolor_sit_amet_text_and_search_for_dolor_with_size_15)
{
	//ARRANGE
	char	big[] = "lorem ipsum dolor sit amet";
	char	little[] = "dolor";
	size_t	size = 15;
	char	*expected_result = NULL;
	char	*actual_result;

	//ACT
	actual_result = ft_strnstr(big, little, size);

	//ASSERT
	mu_assert(expected_result == actual_result, "expected-result should be NULL");
}

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

MU_TEST_SUITE(test_memmove_passing_a_dest_lorem_ipsum_and_src_consectetur_should_be_consectetu_dolor_sit_amet)
{
	//ARRANGE
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest = src + 1;
	size_t	size = 10;
	char	expected_dest[] = "consectetu dolor sit amet";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memmove(dest, "consectetur", size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}

MU_TEST_SUITE(test_memmove_passing_dest_in_the_src_and_the_src_in_the_dest_with_dest_pointer_for_src_plus_1_should_be_orem_ips)
{
	//ARRANGE
							 	
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest = src + 1;
	size_t	size = 8;
	char	expected_dest[] = "orem ipssum dolor sit amet";
	char	*returned_dest;

	//ACT
	returned_dest = ft_memmove(src, dest, size);

	//ASSERT
	mu_assert_string_eq(expected_dest, returned_dest);
}

MU_TEST_SUITE(test_strdup_passing_largatixa_should_be_pointer_to_index_1_of_largatixa_copy)
{
	//ARRANGE
	char	src[] = "largatixa";
	char	*expected_dest = &src[0];
	char	*actual_result;

	//ACT
	actual_result = ft_strdup(src);

	//ASSERT
	mu_assert_string_eq(expected_dest, actual_result);
	mu_assert(expected_dest != actual_result, "The result of actual_result should be different of src!!");
}
/*
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
*/
MU_TEST_SUITE(test_substr_passing_One_Ring_to_rule_them_all_start_with_0_end_with_9_should_be_One_Ring)
{
	//ARRANGE
	char			s[] = "One Ring to rule them all";
	unsigned int	start = 0;
	size_t			len = 8;
	char			expected_result[] = "One Ring";
	char			*actual_result;

	//ACT
	actual_result = ft_substr(s, start, len);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_substr_passing_Right_part_bargemen_Radagast_the_Brown_cracked_start_with_20_end_with_9_should_be_Radagast)
{
	//ARRANGE
	char			s[] = "Right part bargemen Radagast the Brown cracked.";
	unsigned int	start = 20;
	size_t			len = 8;
	char			expected_result[] = "Radagast";
	char			*actual_result;

	//ACT
	actual_result = ft_substr(s, start, len);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_substr_passing_Gandalf_death_was_not_in_vain_start_with_0_end_with_8_with_MAX_INT_len_should_be_NULL)
{
	//ARRANGE
	char			s[] = "Gandalf's death";
	unsigned int	start = 400;
	size_t			len = 20;
	char			*expected_result = "";
	char			*actual_result;

	//ACT
	actual_result = ft_substr(s, start, len);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strjoin_concat_One_with_Ring_should_be_One_Ring)
{
	//ARRANGE
	char	s1[] = "One ";
	char	s2[] = "Ring";
	char	expected_result[] = "One Ring";
	char	*actual_result;

	//ACT
	actual_result = ft_strjoin(s1, s2);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strjoin_concat_One_Ring_to_rule_them_all_should_be_One_Ring_to_rule_them_all)
{
	//ARRANGE
	char	s1[] = "One Ring ";
	char	s2[] = "to rule them all";
	char	expected_result[] = "One Ring to rule them all";
	char	*actual_result;

	//ACT
	actual_result = ft_strjoin(s1, s2);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strtrim_passing_ll_for_trim_in_the_string_One_Ring_to_rule_them_all_should_be_e_them_a)
{
	//ARRANGE
	char	s1[] = "One Ring to rule them all";
	char	set[] = "ll";
	char	expected_result[] = "One Ring to rule them a";
	char	*actual_result;

	//ACT
	actual_result = ft_strtrim(s1, set);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strtrim_passing_tab_chr_for_trim_in_the_string_One_Ring_to_rule_them_all_should_be_Ring)
{
	//ARRANGE
	char	s1[] = "\tOne Ring to rule them all\t";
	char	set[] = "\t";
	char	expected_result[] = "One Ring to rule them all";
	char	*actual_result;

	//ACT
	actual_result = ft_strtrim(s1, set);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_strtrim_passing_string_without_trims_should_be_the_same)
{
	//ARRANGE
	char	s1[] = "One \n Ring \t to rule \n them \t all";
	char	set[] = "\t";
	char	expected_result[] = "One \n Ring \t to rule \n them \t all";
	char	*actual_result;

	//ACT
	actual_result = ft_strtrim(s1, set);

	//ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite) {
	// strtrim tests
	MU_RUN_TEST(test_strtrim_passing_string_without_trims_should_be_the_same);
	MU_RUN_TEST(test_strtrim_passing_tab_chr_for_trim_in_the_string_One_Ring_to_rule_them_all_should_be_Ring);
	MU_RUN_TEST(test_strtrim_passing_ll_for_trim_in_the_string_One_Ring_to_rule_them_all_should_be_e_them_a);
	// strjoin tests
	MU_RUN_TEST(test_strjoin_concat_One_Ring_to_rule_them_all_should_be_One_Ring_to_rule_them_all);
	MU_RUN_TEST(test_strjoin_concat_One_with_Ring_should_be_One_Ring);
	// substr tests
	MU_RUN_TEST(test_substr_passing_Gandalf_death_was_not_in_vain_start_with_0_end_with_8_with_MAX_INT_len_should_be_NULL);
	MU_RUN_TEST(test_substr_passing_Right_part_bargemen_Radagast_the_Brown_cracked_start_with_20_end_with_9_should_be_Radagast);
	MU_RUN_TEST(test_substr_passing_One_Ring_to_rule_them_all_start_with_0_end_with_9_should_be_One_Ring);
	//strlcat tests
	//MU_RUN_TEST(test_strlcat_passing_a_string_size_11_with_a_inside_concat_with_lorem_size_15_should_be);
	//MU_RUN_TEST(test_strlcat_concat_dest_watermelon_with_src_juice_with_size_16_should_be_watermelonjuice);
	// strdup tests
	MU_RUN_TEST(test_strdup_passing_largatixa_should_be_pointer_to_index_1_of_largatixa_copy);
	// memmove tests
	MU_RUN_TEST(test_memmove_passing_dest_in_the_src_and_the_src_in_the_dest_with_dest_pointer_for_src_plus_1_should_be_orem_ips);
	MU_RUN_TEST(test_memmove_passing_a_dest_lorem_ipsum_and_src_consectetur_should_be_consectetu_dolor_sit_amet);
	MU_RUN_TEST(test_memmove_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location);
	// calloc tests
	MU_RUN_TEST(test_calloc_passing_array_int_with_nmemb_MAX_INT_should_be_killed);
	MU_RUN_TEST(test_calloc_passing_array_size_0_with_nmemb_2_should_be_NULL);
	MU_RUN_TEST(test_calloc_passing_array_type_char_with_nmemb_zero_should_be_NULL);
	MU_RUN_TEST(test_calloc_passing_array_type_char_with_5_bytes_should_be_5_bytes_zero);
	MU_RUN_TEST(test_calloc_passing_array_type_char_with_6_bytes_should_be_6_bytes_zero);
	// atoi tests

	// strnstr tests
	MU_RUN_TEST(test_strnstr_passing_a_lorem_ipsum_dolor_sit_amet_text_and_search_for_dolor_with_size_15);
	MU_RUN_TEST(test_strnstr_passing_a_lorem_ipsum_text_and_search_for_ipsumm_with_size_30);
	MU_RUN_TEST(test_strnstr_passing_a_little_string_Bar_bigger_then_string_big_Fo_with_range_7_should_be_NULL);
	MU_RUN_TEST(test_strnstr_passing_a_little_empty_string_to_big_Foo_Bar_Baz_with_range_12_should_be_big);
	MU_RUN_TEST(test_strnstr_passing_a_little_Bar_to_big_Foo_Bal_Bar_Baz_with_range_16_should_be_address_index_8);
	MU_RUN_TEST(test_strnstr_passing_a_little_Bar_to_big_Foo_Baz_with_range_8_should_be_NULL);
	MU_RUN_TEST(test_strnstr_passing_a_little_Bar_to_big_Foo_Bar_Baz_with_range_8_should_be_address_index_4);
	MU_RUN_TEST(test_strnstr_to_find_ora_em_amora_should_return_a_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_to_find_aro_em_amora_should_return_NULL);
	MU_RUN_TEST(test_strnstr_if_little_is_empty_string_return_big);
	MU_RUN_TEST(test_strnstr_finding_orabolas_in_amora_but_len_3_should_return_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_finding_ora_in_amora_but_len_0_should_return_NULL);
	MU_RUN_TEST(test_strnstr_finding_ora_in_amora_but_len_50_should_return_pointer_to_ora_in_amora);
	MU_RUN_TEST(test_strnstr_finding_orabolas_in_amora_but_len_50_should_return_NULL);
	MU_RUN_TEST(test_strnstr_finding_ora_in_amorao_but_len_50_should_return_pointer_to_ora_in_amora);
	// strncmp tests
	MU_RUN_TEST(test_strncmp_passing_two_strings_DIA_bar_200_compare_to_DIA_bar_0_with_range_5_and_should_be_1);
	MU_RUN_TEST(test_strncmp_passing_two_strings_equal_with_range_zero);
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
	// memcpy tests
	MU_RUN_TEST(test_func_memcpy_copy_a_string_of_5_char_in_a_string_of_5_char_in_differents_memory_locations);
	MU_RUN_TEST(test_func_memcpy_copy_a_string_of_6_char_in_a_string_of_5_char_in_differents_memory_locations);
	MU_RUN_TEST(test_memcpy_passing_a_dest_plus_5_in_address_of_src_in_the_same_memory_location);
	// memchr
	MU_RUN_TEST(test_func_memchr_passing_a_array_int_with_7_elements_should_be_a_pointer_for_3_index);
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
	MU_RUN_TEST(test_strlcpy_entering_mochida_rapdos_0_do_not_modify_dst_and_returns_6);
	MU_RUN_TEST(test_strlcpy_entering_lu_la_minus_1_set_dst_as_la_and_returns_2);
	MU_RUN_TEST(test_strlcpy_entering_papelada_boiada_9_keep_dst7_as_a);
	MU_RUN_TEST(test_strlcpy_entering_ai_oi_2_set_dst_as_o_and_returns_2);
	MU_RUN_TEST(test_strlcpy_entering_papel_boiada_7_set_dst_as_boiada_and_returns_6);
	MU_RUN_TEST(test_strlcpy_entering_ah_boi_3_set_dst_as_bo_and_returns_3);
	MU_RUN_TEST(test_strlcpy_entering_ah_oi_3_set_dst_as_oi_and_returns_2);
	//MU_RUN_TEST(test_memmove_move_two_pos_memory_of_same_size_words);
	//MU_RUN_TEST(test_memmove_move_three_pos_memory_of_same_size_words);*/
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}