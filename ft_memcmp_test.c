
#include "test.h"

void	imprimir(char c, int *line)
{
	int char_int;
	int result_my_f;
	int result_lib;

	char_int = c;
	result_lib = isdigit(char_int);
	result_my_f = ft_isdigit(char_int);
	printf("\nA letra "PRINTYEL("'%c'")" é um digito?\n", c);
	printf("Valor esperado é de: "PRINTYEL("%d")"\n", result_lib);
	printf("Valor Recebido: "PRINTYEL("%d")"\n", result_my_f);
	if (result_lib == result_my_f)
		printf(PRINTGRN("SUCESSO!!"));
	else 
		printf(PRINTRED("xxxERROxxx"));
	printf("\n*=========================* Teste: %d", *line);
	*line += 1;
}

void	testar()
{
	int line;

	line = 1;
	imprimir('A', &line);
	imprimir('s', &line);
}

int main()
{
	printf(PRINTYEL("--- INICIANDO TESTES ---\n\n"));
	testar();
	printf(PRINTYEL("\n\n--- FINAL TESTES ---\n\n"));
}