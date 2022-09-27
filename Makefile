DIR 			= 			../
LIB 			= 			libft.a
SRCS 			= 			ft_atoi_test.c
OBJS 			:= 			$(wildcard ../*.c)
HEADERS 		= 			minunit.h
FLAGS 			= 			-Wall -Werror -Wextra

all: 		$(SRCS:.c=.o)
				./run.exec

%.o: 		%.c $(HEADERS) 
	@cd 		$(DIR) && $(MAKE)
	cc 			-o $@ -c $< $(FLAGS)
	gcc			$(FLAGS) ft_atoi_test.o -I $(DIR) -L $(DIR) -lft -o run.exec

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
