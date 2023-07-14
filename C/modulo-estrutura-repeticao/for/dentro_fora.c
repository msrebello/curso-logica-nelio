#include <stdio.h>

int main () {

    int quantidade, n, i, in = 0, out = 0;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &quantidade);

    for (i = 1;i <= quantidade;i++) {

        printf ("Digite um numero: ");
        scanf ("%d", &n);

        if (n < 10 || n > 20) out++;

        else in++;
        
    }
      printf ("%d DENTRO\n", in);  
      printf ("%d FORA", out);

    return 0;
}