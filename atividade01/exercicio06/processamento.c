/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

*/

#include <stdio.h>

int processamento()
{
	int i, j, k, m, n, p;
    int A[m][n], B[n][p], AB[m][p];

	printf("Digite as dimensoes da primeira matriz[m][n]: ");
	
    scanf("[%d][%d]", &m, &n);

    printf("\nDigite os elementos da primeira matriz[%d][%d]: ", m, n);

	for (i = 0; i < m; i++) 
    {
		for (j = 0; j < n; j++) 
        {
			scanf("%d", &A[i][j]);
		}
	}	

    printf("Digite a dimensao da segunda matriz[%d][p]: ", n);

    scanf("[%d]", &p);

    printf("\nDigite os elementos da segunda matriz[%d][%d]: ", n, p);

	for (i = 0; i < n; i++) 
    {
		for (j = 0; j < p; j++) 
        {
			scanf("%d", &A[i][j]);
		}
	}

    for (i = 0; i < m; i++) 
    {
		for (j = 0; j < p; j++) 
        {
            AB[i][j] = 0;
            for(k = 0; k < n; k++)
            {
			    AB[i][j] = (A[i][k] * B[k][j]) + AB[i][j];
            }
        }
	}

	return AB[i][j];
} 