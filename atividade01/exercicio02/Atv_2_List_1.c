/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

    Atividade 2 da lista 1

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv)
{
	int i, num[10];

	num[i] = processamento();

		for(i = 9; i >= 0; i--)
        {
			printf("%d\n", num[i]);
		}
	
	return 0;
}