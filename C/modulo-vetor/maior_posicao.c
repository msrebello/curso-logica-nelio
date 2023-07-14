#include <stdio.h>

int main () {

int i, n;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

    double numero[n], pares = 0, mvalor;
    int posicao;

    for (i=0;i<=n-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%lf", &numero[i]);  
    }

    for (i=0;i<=n-1;i++) {
            
        if (i == 1) {

            mvalor = numero[i];
            posicao = i;     
        }
        if (numero[i] > mvalor) {

            mvalor = numero[i];
            posicao = i;
            }               
    } 
        
    printf ("\nMAIOR VALOR = %.1lf\n", mvalor);
    printf ("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0;
}