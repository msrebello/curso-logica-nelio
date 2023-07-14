#include <stdio.h>

int main () {

    int quantidade, n, i;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &quantidade);

    for (i = 1;i <= quantidade;i++) {

        printf ("Digite um numero: ");
        scanf ("%d", &n);

        if (n == 0) printf ("NULO\n");

        else if (n < 0 && n%2 != 0) printf ("IMPAR NEGATIVO\n");
        
        else if (n > 0 && n%2 != 0) printf ("IMPAR POSITIVO\n");

        else if (n < 0 && n%2 == 0) printf ("PAR NEGATIVO\n");

        else if (n > 0 && n%2 == 0) printf ("PAR POSITIVO\n");
    }

    return 0;
}