PROGS = ft_isalpha
SRCS := $(PROGS)_test.c
DIR = ../
LIB = libft.a
HEADERS = test.h
FLAGS = -Wall -Werror -Wextra

all: $(PROGS)

$(PROGS): $(SRCS:.c=.o) $(addprefix $(DIR), $(LIB))
	gcc $(FLAGS) $@_test.o -I $(DIR) -L $(DIR) -lft -o $@
	@echo
	@echo INICIANDO TESTE DE...
	@echo $@
	@echo
	./$@

%.o: %.c $(HEADERS)
	cc $(FLAGS) -o $@ -c $<

create:
	@cd $(DIR) && $(MAKE)

norm:
	@cd $(DIR) && norminette

clean:
	rm -f $(SRCS:.c=.o)
	@cd $(DIR) && $(MAKE) $@

fclean: clean
	rm -f $(PROGS)

re: fclean all