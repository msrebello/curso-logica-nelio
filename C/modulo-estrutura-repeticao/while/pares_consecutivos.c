#include <stdio.h>

int main () {

    int x , soma, um, dois, tres, quatro, cinco;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &x);

    while (x != 0) {

        if (x%2 == 0) {
        
            um =  x; //4
            dois = um + 2; //6
            tres = dois + 2; //8
            quatro = tres + 2; //10
            cinco = quatro + 2; // 12
        }

        else {

            um = x + 1; //4
            dois = um + 2; //6
            tres = dois + 2; //8
            quatro = tres + 2; //10
            cinco = quatro + 2; // 12 
        }
            soma = um + dois + tres + quatro + cinco;

            printf ("SOMA = %d\n", soma);
            printf ("Digite um numero inteiro: ");
            scanf ("%d", &x);
        
    }

    return 0;
}