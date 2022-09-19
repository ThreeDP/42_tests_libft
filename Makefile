DIR = ../
LIB = libft.a
SRCS = tests_libft.c
HEADERS = minunit.h
FLAGS = -Wall -Werror -Wextra

all: $(SRCS:.c=.o)
	gcc $(FLAGS) tests_libft.o -I $(DIR) -L $(DIR) -lft -o run
	./run

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
	@rm -f run
	@cd $(DIR) && $(MAKE) $@

re: fclean all

create:
	@cd $(DIR) && $(MAKE)

ft_inserting_sorting: create
	cc -o ft_inserting_sorting.o -c ft_inserting_sorting.c
	gcc ft_inserting_sorting.o -I $(DIR) -L $(DIR) -lft -o in_sor
	./in_sor

