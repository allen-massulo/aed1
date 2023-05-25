/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

	Atividade 7 da Lista 1
	
*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv[]) 
{
	int resultado;

	printf("Digite as dimensoes da matriz quadrada: ");

	resultado = processamento();

	if(resultado == 0)
	{
		printf("E um quadrado magico\n");
	}
	else
	{
		printf("Nao e um quadrado magico\n");
	}

	return 0;
}