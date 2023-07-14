#include <stdio.h>

int main () {

    int l, c, i, j;

    printf ("Quantas linhas vai ter cada matriz? ");
    scanf ("%d", &l);
    printf ("Quantas colunas vai ter cada matriz? ");
    scanf ("%d", &c);

    //Matriz A
    int A [l][c];

    printf ("Digite os valores da matriz A: \n");

        for (i=0; i <= l-1; i++) {

            for (j=0; j <= c-1; j++) { 

                printf ("Elemento [%d,%d]: ", i, j);
                scanf ("%d", &A[i][j]);
            }
        }

    //Matriz B
    int B[l][c];

    printf ("Digite os valores da matriz B: \n");

        for (i=0; i <= l-1; i++) {

            for (j=0; j <= c-1; j++) { 

                printf ("Elemento [%d,%d]: ", i, j);
                scanf ("%d", &B[i][j]);
            }
        }    
    //Matriz Soma
    int soma[l][c];

    printf ("MATRIZ SOMA: \n");

        for (i=0; i <= l-1; i++) {

            for (j=0; j <= c-1; j++) { 

                soma[i][j] = A[i][j] + B[i][j]; 
                printf ("%d ", soma[i][j]);
            }
            printf ("\n");
        }

    return 0;        
}
