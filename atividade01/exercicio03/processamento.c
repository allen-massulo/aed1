/*

    Nome: Ellen Cristina de Sousa Massulo
    Matricula: 2215080008

*/

float calculo_media()
{
    int i;
    float notas[4], soma = 0, media = 0;
    
    for(i = 0; i < 4; i++)
    {
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 4;

    return media;
}
