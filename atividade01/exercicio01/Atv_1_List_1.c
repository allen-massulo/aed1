/*

    Nome: Ellen Cristina De Sousa Massulo
    MAtricula: 2215080008

    Atividade 1 da lista 1

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv)
{
    int i;
    int num[5];

    num[i] = processamento();
    
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
