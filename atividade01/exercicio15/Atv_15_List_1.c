/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008

	Atividade 15 da Lista 1
	
*/

#include <stdio.h>
#include "processamento.c"

int main()
{
    int dias;
    struct dma data1, data2;

    printf("Digite a primeira data (dia, mes, ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia, mes, ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    dias = calcular_dias(data1, data2);

    printf("O numero de dias entre as duas datas e: %d\n", dias);

    return 0;
}