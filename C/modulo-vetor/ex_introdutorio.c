#include <stdio.h>

int main () {

int i, qte;
float n, vet [9];

printf ("Quantos numeros você vai digitar? ");
scanf ("%d", &qte);

    for (i=0;i <=qte-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%f", &vet[i]);       
    }
    
    printf ("Numeros Digitados:\n");
    for (i=0;i <=qte-1;i++) {

        printf ("%.2f\n", vet[i]);        
    }

    return 0;
}