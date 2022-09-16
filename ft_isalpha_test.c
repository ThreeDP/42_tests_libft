/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:19:50 by coder             #+#    #+#             */
/*   Updated: 2022/09/16 16:28:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	imprimir(char c, int *line)
{
	int char_int;
	int result_my_f;
	int result_lib;

	char_int = c;
	result_lib = isalpha(char_int);
	result_my_f = ft_isalpha(char_int);
	printf("\nA letra "PRINTYEL("'%c'")" é um letra?\n", c);
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
	imprimir('0', &line);
	imprimir('t', &line);
	imprimir('V', &line);
	imprimir('X', &line);
	imprimir('*', &line);
	imprimir('\t', &line);
	imprimir('%', &line);
	imprimir('z', &line);
	imprimir('a', &line);
	imprimir('x', &line);
	imprimir('\n', &line);
}

int main()
{
	printf(PRINTYEL("--- INICIANDO TESTES ---\n\n"));
	testar();
	printf(PRINTYEL("\n\n--- FINAL TESTES ---\n\n"));
}