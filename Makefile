PROGS = ft_isalpha
PATH = ../
$(PATH)_LIB = libft.a
FLAGS = -Wall -Werror -Wextra

all: $(PROGS)

$(PROGS):
	gcc $(FLAGS) -I $($(PATH)_LIB) -o $@

create:
	@cd $(PATH) && $(MAKE)

norm:
	@cd $(PATH) && $(MAKE) $@

clean: 
	@cd $(PATH) && $(MAKE) $@

fclean: clean
	rm -f $(PROGS)

re: fclean all