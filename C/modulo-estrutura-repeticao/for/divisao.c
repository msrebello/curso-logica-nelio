#include <stdio.h>

int main () {

    int quantidade, i;
    double a, b, divisao;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &quantidade);

    for (i = 1;i <= quantidade;i++) {

        printf ("Entre com o numerador: ");
        scanf ("%lf", &a);
        printf ("Entre com o denominador: ");
        scanf ("%lf", &b);

        if (b == 0) printf ("DIVISAO IMPOSSIVEL\n");
        else {
        divisao = a/b;
        printf ("DIVISAO = %.2lf\n", divisao);
        
        }
    }

    return 0;
}