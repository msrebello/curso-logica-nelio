#include <stdio.h>

int main () {

    float v[9], soma = 0, media;
    int i, qte;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &qte);

    for (i=0;i<=qte-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%f", &v[i]);
        soma = soma + v[i];

    }

    printf ("VALORES = ");

    for (i=0;i<=qte-1;i++) {

        
        printf ("%.1f ", v[i]);
    }

    media = soma/qte;
    printf ("\nSOMA = %.2f\n", soma);
    printf ("MEDIA = %.2f\n", media);

    return 0;
}