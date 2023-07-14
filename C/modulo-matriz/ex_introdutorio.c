#include <stdio.h>

int main () {

    int l, c, i, j;

    printf ("Quantas linhas vai ter a mtriz? ");
    scanf ("%d", &l);
    printf ("Quantas colunas vai ter a mtriz? ");
    scanf ("%d", &c);

    int matriz [4][4];

    for (i=0; i <= l-1; i++) {

        for (j=0; j <= c-1; j++) { // O que acontece é que a repeticao debaixo nao termina enquanto for valida, depois ela sobe para incremento da repeticao de cima

            printf ("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }

    }

    for (i=0; i <= l-1; i++) {

        for (j=0; j <= c-1; j++) {

            printf ("%d ", matriz[i][j]);
        }
        printf ("\n"); 
    }

    return 0;
}