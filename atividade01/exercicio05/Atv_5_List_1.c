/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

    Atividade 5 da lista 1

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv[])
{
	int a, b, c, i;
	int num[c], par[a], impar[b];

	printf("Digite 20 numeros e darei os pares e impares:\n");
	num[c] = processamento();
    par[a] = processamento_par(c, num[c]);
    impar[b] = processamento_impar(c, num[c]);

	
	printf("Os 20 numeros sao:\n");

		for(i = 0; i < 20; i++)
		{
			printf("%d ", num[c]);
		}

    printf("Os numeros pares sao:\n");

		for(i = 0; i < 20; i++)
		{
			printf("%d ", par[a]);
		}
	
    printf("Os numeros impares sao:\n");

		for(i = 0; i < 20; i++)
		{
			printf("%d ", impar[b]);
		}
	return 0;
}