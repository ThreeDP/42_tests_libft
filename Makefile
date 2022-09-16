PROGS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_strlen
#		ft_memcpy
SRCS =	ft_isalpha_test.c ft_isdigit_test.c ft_isalnum_test.c ft_isascii_test.c ft_isprint_test.c \
		ft_strlen_test.c
#		ft_memcpy_test.c
OBJS := $(SRCS:.c=.o)
DIR = ../
LIB = libft.a
HEADERS = test.h
FLAGS = -Wall -Werror -Wextra

all: $(SRCS:.c=.o) $(PROGS)

$(PROGS): $(addprefix $(DIR), $(LIB)) $(OBJS)
	gcc $(FLAGS) $@_test.o -I $(DIR) -L $(DIR) -lft -o $@
	@echo
	@echo INICIANDO TESTE DE...
	@echo $@
	@echo
	./$@

%.o: %.c
	cc -o $@ -c $< $(FLAGS)

create:
	@cd $(DIR) && $(MAKE)

norm:
	@cd $(DIR) && $(MAKE) $@

cleann:
	@rm -f $(SRCS:.c=.o)

clean:
	@cd $(DIR) && $(MAKE) $@

fclean: cleann
	@rm -f $(PROGS)
	@cd $(DIR) && $(MAKE) $@

re: fclean all
