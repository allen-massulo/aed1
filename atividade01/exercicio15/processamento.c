/*

	Nome: Ellen Cristina de Sousa Massulo
	Matricula: 2215080008
	
*/

#include <stdio.h>

struct dma
{
    int dia;
    int mes;
    int ano;
};

int ano_bissexto(int ano)
{
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        return 1;
    else
        return 0;
}

int dias_no_mes(int mes, int ano)
{
    int dias;

    switch (mes)
    {
        if(mes == 2)
        {
            if (ano_bissexto(ano))
                dias = 29;
            else
                dias = 28;
        }
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            dias = 30;
        }

        else
        {
            dias = 31;
        }
    }

    return dias;
}

int calcular_dias(struct dma data1, struct dma data2)
{
    int dias = 0;

    if (data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano)
        return dias;

    struct dma data_anterior, data_posterior;
    if (data1.ano < data2.ano || (data1.ano == data2.ano && data1.mes < data2.mes) ||
        (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia))
    {
        data_anterior = data1;
        data_posterior = data2;
    }
    else
    {
        data_anterior = data2;
        data_posterior = data1;
    }

    while (data_anterior.ano < data_posterior.ano || data_anterior.mes < data_posterior.mes || data_anterior.dia < data_posterior.dia)
    {
        dias++;
        data_anterior.dia++;

        if (data_anterior.dia > dias_no_mes(data_anterior.mes, data_anterior.ano))
        {
            data_anterior.dia = 1;
            data_anterior.mes++;
        }

        if (data_anterior.mes > 12)
        {
            data_anterior.mes = 1;
            data_anterior.ano++;
        }
    }

    return dias;
}