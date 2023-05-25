/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

*/

#include <stdio.h>

int processamento()
{
	int i;
	int num[20];
	
		for(i = 0; i < 20; i++)
		{	
			scanf("%d", &num[i]);
		}
	
	return num[i];
}

int processamento_par(int i, int num[i])
{
    int par[20], a = 0;

    for(i = 0; i < 20; i++)
		{	
		
            if(num[i] % 2 == 0)
	        {
		        par[a] = num[i];
		        a++;
	        }
        }

	return par[a];
}

int processamento_impar(int i, int num[i])
{
    int impar[20], a = 0;

    for(i = 0; i < 20; i++)
		{	
		
            if(num[i] % 2 == 1)
	        {
		        impar[a] = num[i];
		        a++;
	        }
        }
			
	return impar[a];
}

