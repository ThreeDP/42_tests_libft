
#include "test.h"

void	imprimir(char *str, int *line)
{
	size_t	result_my_f;
	size_t	result_lib;

	result_lib = strlen(str);
	result_my_f = ft_strlen(str);
	printf("\nTamanho da String "PRINTYEL("'%s'")" \n", str);
	printf("Valor esperado é de: "PRINTYEL("%zu")"\n", result_lib);
	printf("Valor Recebido: "PRINTYEL("%zu")"\n", result_my_f);
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
	imprimir("Abacate", &line);
	imprimir("Serviço", &line);
	imprimir("\0", &line);
	imprimir("", &line);
}

int main()
{
	printf(PRINTYEL("--- INICIANDO TESTES ---\n\n"));
	testar();
	printf(PRINTYEL("\n\n--- FINAL TESTES ---\n\n"));
}