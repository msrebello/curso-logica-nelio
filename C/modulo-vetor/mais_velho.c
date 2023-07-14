#include <stdio.h>

int main () {

int i, n;

    printf ("Quantas pessoas voce vai digitar? ");
    scanf ("%d", &n);

    char nome[n][50] ;
    int idade[n], mais_velho, posicaomaior;

    for (i=1;i<=n;i++) {

        printf ("Dados da %da pessoa: \n", i);

        fflush(stdin);
        printf ("Nome: ");
        scanf ("%s", &nome[i]);
        fflush(stdin);
        printf ("Idade: ");
        scanf ("%d", &idade[i]);     
    }
    
    for (i=1;i<=n;i++) {

        if (i == 1) {
            mais_velho = idade[i]; //Ao inves de utilizar uma string como referencia, utilizou-se a propria posicao da idade.
            posicaomaior = i;
        } 
        if (idade[i] > mais_velho) {
            mais_velho = idade[i]; 
            posicaomaior = i;
        }
    }

    printf ("PESSOA MAIS VELHA: %s\n", nome[posicaomaior]);

    return 0;
}