/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

*/

#include <stdio.h>

float processamento()
{
	int i, j;
	float media[10], notas[4];
	
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 4; j++)
			{
				scanf("%f", &notas[j]);
			}
			media[i] = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
			j = 0;
		}
	
	return media[i];
}