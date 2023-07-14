#include <stdio.h>

int main () {

    int l, c, i, j;

    printf ("Qual a quantidade de linhas da matriz? ");
    scanf ("%d", &l);
    printf ("Qual a quantidade de colunas da matriz? ");
    scanf ("%d", &c);

    double matriz [l][c], vetorSoma[l], soma;

    for (i=0; i <= l-1; i++) {
        printf ("Digite os elementos da %da. linha: \n", i + 1);
        soma =0;
        
        for (j=0; j <= c-1; j++) {

            scanf ("%lf", &matriz[i][j]);
            vetorSoma[i] = soma + matriz[i][j];
            soma = vetorSoma[i];
        }
    }
    
    printf ("VETOR GERADO: \n");

    for (i=0; i <= l-1; i++) {

        printf ("%.1lf\n", vetorSoma[i]);         
    }   

    return 0;
}       