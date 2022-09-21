DIR = ../
LIB = libft.a
SRCS = tests_libft.c
HEADERS = minunit.h
FLAGS = -Wall -Werror -Wextra

all: $(SRCS:.c=.o) 
	gcc $(FLAGS) tests_libft.o -I $(DIR) -L $(DIR) -lft -o run.exec
	./run.exec

%.o: %.c $(HEADERS)
	@cd $(DIR) && $(MAKE)
	cc -o $@ -c $< $(FLAGS)

norm:
	@cd $(DIR) && $(MAKE) $@

cleann:
	@rm -f tests_libft.o

clean:
	@cd $(DIR) && $(MAKE) $@

fclean: cleann
	@rm -f run.exec

	@cd $(DIR) && $(MAKE) $@

re: fclean all
