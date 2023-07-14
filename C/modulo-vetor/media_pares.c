#include <stdio.h>

int main () {

int i, n;

    printf ("Quantos elementos vai ter o vetor? ");
    scanf ("%d", &n);

    int numero[n], pares = 0; //Contador pares será meu indicador de impar.
    double  media, soma = 0;

    for (i=0;i<=n-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%d", &numero[i]);
    }

    for (i=0;i<=n-1;i++) {
        if (numero[i] % 2 == 0) {
            soma = soma + numero[i];
            pares++;
        }                  
    } 
    
    if (pares == 0) printf ("NENHUM NUMERO PAR");
    //Colocar media depois da condicao que exclui a possibilidade divisor ser 0
    else { 

        media = soma/pares;
        printf ("\nMEDIA DOS PARES = %.1lf\n", media);
    }

     return 0;   
}

        
        
