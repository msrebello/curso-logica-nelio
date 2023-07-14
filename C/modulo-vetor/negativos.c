#include <stdio.h>

int main () {

    int qte, i, n, v[9];

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &qte);

    for (i=0;i<=qte-1;i++) {

        printf ("Digite um numero: ");
        scanf ("%d", &v[i]); // Ex: i == 0 == v[0] = 8
        
    }
    
    printf ("NUMEROS NEGATIVOS: \n");

    for (i=0;i<=qte-1;i++) {

        if (v[i] < 0)
        printf ("%d\n", v[i]);
    }

    return 0;
}