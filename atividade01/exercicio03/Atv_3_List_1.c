/*

    Nome: Ellen Cristina De Sousa Massulo
    MAtricula: 2215080008

    Atividade 3 da lista 1

*/

#include <stdio.h>
#include "processamento.c"

int main(int argc, char *argv)
{
    int i;
    float media;

    printf("Digite 4 notas e darei a media: ");
    
    media = calculo_media();

    printf("A media e %.2f", media);

    return 0;
}
