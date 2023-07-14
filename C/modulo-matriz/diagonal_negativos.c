#include <stdio.h>

int main () {

    int ordem, i, j;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &ordem);

    int matriz [9][9], negativo = 0;

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) { 

            printf ("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    
    printf ("\nDIAGONAL PRINCIPAL: \n");

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {
                    
            if (i == j)
            printf ("%d ", matriz[i][j]);
        }
    }
    
    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {
                    
            if (matriz[i][j] < 0) negativo++;
            }
    }
    
    printf ("\nQUANTIDADE DE NEGATIVOS = %d\n", negativo);

    return 0;
}