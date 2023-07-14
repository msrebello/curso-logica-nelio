#include <stdio.h>

int main () {

    int ordem, i, j;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &ordem);

    //Matriz unica
    int matriz [9][9];
    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) { 

            printf ("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }

    }
        
    //Soma dos elementos
    int somaMatriz = 0;
    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {
                    
            if (i < j) // Toda parte acima da diagonal contem i < j
                somaMatriz = somaMatriz + matriz[i][j];
        }

    }

    printf ("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", somaMatriz);

    return 0;
}