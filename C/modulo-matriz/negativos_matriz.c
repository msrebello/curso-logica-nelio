#include <stdio.h>

int main () {

    int l, c, i, j;

    printf ("Qual a quantidade de linhas da matriz? ");
    scanf ("%d", &l);
    printf ("Qual a quantidade de colunas da matriz? ");
    scanf ("%d", &c);

    int matriz [l][c];

    for (i=0; i <= l-1; i++) {

        for (j=0; j <= c-1; j++) { // O que acontece é que a repeticao debaixo nao termina enquanto for valida, depois ela sobe para incremento da repeticao de cima

            printf ("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    
    printf ("VALORES NEGATIVOS: \n");

    for (i=0; i <= l-1; i++) {

        for (j=0; j <= c-1; j++) {

            if (matriz[i][j] < 0) printf ("%d\n", matriz[i][j]);
        }
    }

    return 0;
}