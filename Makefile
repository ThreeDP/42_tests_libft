DIR 			= 			../
LIB 			= 			libft.a
TEST			=			./test/
SRCS 			= 			ft_atoi_test.c
OBJS 			:= 			$(wildcard ../*.c)
HEADERS 		= 			minunit.h
FLAGS 			= 			-Wall -Werror -Wextra

all: 		$(SRCS:.c=.o)

%.o: 		%.c $(HEADERS) 
	@cd 		$(DIR) && $(MAKE)
	cc 			-o $@ -c $< $(FLAGS)
	gcc			$(FLAGS) $(addprefix $(TEST), $@) -I $(DIR) -L $(DIR) -lft -o $(addprefix ./objs/, $@)
	./$@

norm:
	@cd 		$(DIR) && $(MAKE) $@

cleann:
	@rm 		-f tests_libft.o

clean:
	@cd 		$(DIR) && $(MAKE) $@

fclean: 	cleann
	@rm 		-f run.exec
	@cd 		$(DIR) && $(MAKE) $@

re: fclean all
