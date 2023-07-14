#include <stdio.h>

int main () {

    int idade, soma, x;
    float media;
    
    printf ("Digite as idades: ");
    scanf ("%d", &idade);

    x = 0;
    soma = 0;

        while (idade >= 0)
        {
        soma = soma + idade;
        x = x + 1;
        scanf ("%d", &idade);
        }
        
        if (x == 0) printf ("IMPOSSIVEL CALCULAR!\n");

        else {
        media = soma/x; 
        printf ("MEDIA = %f\n", media);
        }
    
    return 0;
}