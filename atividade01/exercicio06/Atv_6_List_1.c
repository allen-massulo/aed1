/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

    Atividade 6 da lista 1
*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv[]) 
{
	int i, j, m, p;
    int AB[m][p];

	AB[m][p] = processamento();
    
    printf("Produto de A por B e:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", AB[i][j]);
        }
        printf("\n");
    }
	return 0;
}