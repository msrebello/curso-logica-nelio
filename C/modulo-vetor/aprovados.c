#include <stdio.h>

int main () {

    int n;

    printf ("Quantos alunos serao digitados? ");
    scanf ("%d", &n);

    int i, posicao;
    char nome[n][50], sobrenome[n][50];
    double nota1[n], nota2[n], media[n];

    for (i=1;i<=n;i++){

        printf ("Digite nome, primeira e segunda nota do %do aluno: \n", i);
        fflush(stdin);
        scanf ("%s %s\n%lf\n%lf", &nome[i], &sobrenome[i], &nota1[i], &nota2[i]);
    }

    printf ("Alunos aprovados: \n");
    for (i=1;i<=n;i++){

        media[i] = (nota1[i] + nota2[i])/2;

        if (media[i] >= 6) {
            printf ("%s %s\n", nome[i], sobrenome[i]);
        }
    } 

    return 0;   
}