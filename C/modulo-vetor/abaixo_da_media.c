#include <stdio.h>

int main () {

int i, n;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

    double numero[n], media, soma = 0;

    for (i=0;i<=n-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%lf", &numero[i]);

        soma = soma + numero[i];
    }
    
    media = soma/n;

    printf ("\nMEDIA DO VETOR = %.3lf\n", media);
    printf ("ELEMENTOS ABAIXO DA MEDIA: \n");
            
    for (i=0;i<=n-1;i++) {
                
        if (numero[i] < media) {
        printf ("%.1lf\n", numero[i]);             
        }                
    }

    return 0;
}