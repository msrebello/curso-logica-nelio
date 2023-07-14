#include <stdio.h>

int main () {

int i, n;

    printf ("Quantas pessoas serao digitadas? ");
    scanf ("%d", &n);

    double altura[n], media, soma_f = 0,  menor, maior;
    char genero[n]; // caractere simples nao precisa de segundo indice
    int idade[n], nman = 0, nfem = 0;

    for (i=0;i<=n-1;i++) { // os arrays em C são indexados a partir de 0, portanto i inicia em 0, e n recebe - 1

        printf ("Altura da %da pessoa: ", i+1);
        scanf ("%lf", &altura[i]);
        fflush(stdin);
        printf ("Genero da %da pessoa:  ", i+1);
        scanf (" %c", &genero[i]);   
    }

    menor = altura[0]; // menor receber altura na posicao 0 é o mesmo que o aprendido de if (i==1)
    maior = altura [0];

    for (i=0;i<=n-1;i++){

        if (altura[i] < menor) menor = altura[i];
        if (altura[i] > maior) maior = altura[i];
    }

    printf ("Menor altura = %.2lf\n", menor);
    printf ("Maior altura = %.2lf\n", maior);

    for (i=0;i<=n-1;i++) {

        if (genero[i]=='F') {

            soma_f = soma_f + altura[i]; 
            nfem++; 
        } 
        else if (genero[i] ==  'M') {

            nman++;
        }     
    }
    
    media = soma_f/nfem;
    printf ("Media das alturas das mulheres = %.2lf\n", media);
    printf ("Numero de homens = %d\n", nman);

    return 0;
}