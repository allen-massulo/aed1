/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

*/

int processamento()
{
	int i, j, n, soma_linha = 0, soma_coluna = 0, soma_diag_principal = 0, soma_diag_secundaria = 0, soma = 0;
	int A[n][n];

	scanf("%d", &n);

	for (i = 0; i < n; i++) 
    {
		for (j = 0; j < n; j++) 
        {
			printf("Digite o elemento %d,%d da matriz:\n", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}	

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
		{
		soma_linha = soma_linha + A[i][j];
		}
	}

	for (j = 0; j < n; j++) 
	{ 
		for (i = 0; i < n; i++) 
		{
		soma_coluna = soma_coluna + A[i][j];
		}
	}

	for (i = 0; i < n; i++) 
	{
	soma_diag_principal = soma_diag_principal + A[i][i]; 
	}

	for (i = 0; i < n; i++)
	{
	soma_diag_secundaria = soma_diag_secundaria + A[i][n-1-i];
	}

	if(soma_coluna == soma_diag_principal == soma_linha == soma_diag_secundaria)
	{
		soma = 0;
	}
	else
	{
		soma++;
	}

	return soma;
} 