/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

    Atividade 4 da lista 1

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv[])
{
	int i;
	float media[i];

	printf("Digite 4 notas de 10 alunos:\n");
	
	media[i] = processamento();
	
	printf("As medias iguais ou maiores que 7 sao:\n");

		for(i = 0; i < 10; i++)
		{
			if(media[i] >= 7)
			{
				printf("%.2f\n", media[i]);
			}
		}
	
	return 0;
}