/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:13:45 by coder             #+#    #+#             */
/*   Updated: 2022/09/16 18:47:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	imprimir(int c, int *line)
{
	int result_my_f;
	int result_lib;

	result_lib = isprint(c);
	result_my_f = ft_isprint(c);
	printf("\nA letra "PRINTYEL("'%c'")" é um número ascii I?\n", c);
	printf("Valor esperado é de: "PRINTYEL("%d")"\n", result_lib);
	printf("Valor Recebido: "PRINTYEL("%d")"\n", result_my_f);
	if (result_lib == result_my_f)
		printf(PRINTGRN("SUCESSO!!"));
	else
	{
		if (result_lib > 0 && result_lib > 0)
			printf(PRINTGRN("SUCESSO!!"));
		else
			printf(PRINTRED("xxxERROxxx"));
	}
	printf("\n*=========================* Teste: %d", *line);
	*line += 1;
}

void	testar()
{
	int line;

	line = 1;
	imprimir('A', &line);
	imprimir('s', &line);
	imprimir('0', &line);
	imprimir('t', &line);
	imprimir('V', &line);
	imprimir('X', &line);
	imprimir('*', &line);
	imprimir('\t', &line);
	imprimir('\n', &line);
	imprimir('\v', &line);
	imprimir('\f', &line);
	imprimir('\r', &line);
	imprimir('%', &line);
	imprimir('z', &line);
	imprimir('a', &line);
	imprimir('x', &line);
	imprimir(3, &line);
	imprimir('\n', &line);
	imprimir(127, &line);
}

int main()
{
	printf(PRINTYEL("--- INICIANDO TESTES ---\n\n"));
	testar();
	printf(PRINTYEL("\n\n--- FINAL TESTES ---\n\n"));
}