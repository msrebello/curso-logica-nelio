#include <stdio.h>

int main () {

    int quantidade, i;
    double a, b, c, media;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &quantidade);

    for (i = 1;i <= quantidade;i++) {

        printf ("Digite tres numeros: \n");
        scanf ("%lf %lf %lf", &a, &b, &c);

        media = (2*a + 3*b + 5*c)/10;
        printf ("MEDIA = %.1lf\n", media);
        
    }

    return 0;
}