################  COLORS	##################
L_RED			=			'\033[0;31m'
L_REDB			=			'\033[1;31m'
L_WHITE			=			'\033[0;37m'
L_WHITEB		=			'\033[1;37m'
L_YELLOW		=			'\033[0;33m'
L_YELLOWB		=			'\033[1;33m'
L_GREEN			=			'\033[0;32m'
L_GREENB		=			'\033[1;32m'
################ CONFIG		##################
DIR 			= 			../
LIB 			= 			libft.a
TEST			=			./test/
SRCS 			= 			$(wildcard ./test/*.c)
HEADERS 		= 			minunit.h test.h
FLAGS 			= 			-Wall -Werror -Wextra
################ RULES		##################

all: 		$(SRCS:.c=.o)

%.o: 		%.c $(HEADERS) 
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o $@ -c $< $(FLAGS)
	@gcc		$(FLAGS) $@ -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: $@ "$(L_WHITE)"
	@./a.out
	@sleep .5

norm:
	@cd 		$(DIR) && $(MAKE) $@

cleann:
	@rm 		-f tests_libft.o
	@rm			-f $(SRCS:.c=.o)
	

clean:		cleann
	@cd 		$(DIR) && $(MAKE) $@


fclean: 	cleann
	@rm 		-f run.exec
	@cd 		$(DIR) && $(MAKE) $@

re: fclean all

## Exemplo de test unico de função
ft_addone:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_addOne_test.o -c ./test/ft_addOne_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_addOne_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_ATOI "$(L_WHITE)"
	@./a.out

ft_atoi:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_atoi_test.o -c ./test/ft_atoi_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_atoi_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_ATOI "$(L_WHITE)"
	@./a.out

ft_substr:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_substr_test.o -c ./test/ft_substr_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_substr_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_SUBSTR "$(L_WHITE)"
	@./a.out

ft_strchr:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_strchr_test.o -c ./test/ft_strchr_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_strchr_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_STRCHR "$(L_WHITE)"
	@./a.out

ft_itoa:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_itoa_test.o -c ./test/ft_itoa_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_itoa_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_ITOA "$(L_WHITE)"
	@./a.out

ft_calloc:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_calloc_test.o -c ./test/ft_calloc_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_calloc_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_CALLOC "$(L_WHITE)"
	@./a.out

ft_split:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_split_test.o -c ./test/ft_split_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_split_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_SPLIT "$(L_WHITE)"
	@./a.out

ft_strmapi:
	@cd 		$(DIR) && $(MAKE)
	@cc 		-o ./test/ft_strmapi_test.o -c ./test/ft_strmapi_test.c $(FLAGS)
	@gcc		$(FLAGS) ./test/ft_strmapi_test.o -I $(DIR) -L $(DIR) -lft
	@echo		"$(L_YELLOWB)"RUN TEST: FT_SPLIT "$(L_WHITE)"
	@./a.out