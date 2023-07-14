#include <stdio.h>

int main () {

int i, n, cont_idade = 0;
double media, perc, soma = 0;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

        char nome[n][50];
        double altura[n];
        int idade[n];

    for (i=1;i<=n;i++) {

        printf ("Dados da %da pessoa: \n", i);

        fflush(stdin);
        printf ("Nome: ");
        scanf ("%s", &nome[i]);
        fflush(stdin);
        printf ("Idade: ");
        scanf ("%d", &idade[i]);
        fflush(stdin);
        printf ("Altura: ");
        scanf ("%lf", &altura[i]);

        soma = soma + altura[i];      
    }

    media = soma/n;
    printf ("\nAltura media: %.2lf\n", media);

    for (i=1;i<=n;i++) {

        if (idade[i] < 16) cont_idade++;
    }

    perc = ((double)cont_idade/n)*100;
    printf ("Pessoas com menos de 16 anos: %.1lf%%\n", perc);

    for (i=1;i<=n;i++) {

        if (idade[i] < 16) printf ("%s\n", nome[i]);
    }

    return 0;
}