#include <stdio.h>

int main () {

    int quantidade, n, x, soma = 0;

    scanf ("%d", &quantidade);


    for (x=1;x<=quantidade;x++) {

        printf ("Digite um numero: ");
        scanf ("%d", &n);
        soma = soma + n;
    }

        printf ("SOMA = %d", soma);

    return 0;
}