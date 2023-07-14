#include <stdio.h>

int main () {

    int i, n;
    
    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

    int numero[n], pares = 0;

    for (i=1;i<=n;i++) {

        printf ("Digite um numero: ");
        scanf ("%d", &numero[i]);   
    }

    printf ("QUANTIDADE DE PARES: \n");

    for (i=1;i<=n;i++) {
            
        if (numero[i] % 2 == 0) {
                
            pares++;                
            printf ("%d ", numero[i]);
        } 
    } 

    printf ("\nQUANTIDADE DE PARES = %d\n", pares);

    return 0;
}