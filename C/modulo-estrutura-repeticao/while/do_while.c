#include <stdio.h>

int main () {

    char resposta;
    double celsius, farenheint;

    do // Execute este bloco de comando...
    {
        printf ("Digite a temperatura em Celsius: ");
        scanf ("%lf", &celsius);
        farenheint = (9*celsius)/5 + 32;
        printf ("Equivalente em Farenheint: %.1lf\n", farenheint);
        printf ("Deseja repetir (s/n)? ");
        scanf (" %c", &resposta);
    }

     while (resposta != 'n'); // Ate que resposta seja diferente de n

   return 0;
}