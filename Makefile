PROGS = ft_isalpha
DIR = ../
$(DIR)_LIB = libft.a
FLAGS = -Wall -Werror -Wextra

all: $(PROGS)

$(PROGS):
	gcc $(FLAGS) -I $($(DIR)_LIB) -o $@
	@echo
	@echo INICIANDO TESTE DE...
	@echo $@
	@echo
	./$@

create:
	@cd $(DIR) && $(MAKE)

norm:
	@cd $(DIR) && $(MAKE) $@

clean: 
	@cd $(DIR) && $(MAKE) $@

fclean: clean
	rm -f $(PROGS)

re: fclean all