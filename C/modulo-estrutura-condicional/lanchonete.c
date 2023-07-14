#include <stdio.h>

int main(){

    int codigo, quantidade;
    double preco;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);


    switch (codigo)
    {
    case 1:
        preco=5*quantidade;
        printf("Valor a pagar: %.2lf", preco);
        break;

    case 2:
        preco=3.50*quantidade;
        printf("Valor a pagar: %.2lf", preco);
        break;

    case 3:
        preco=4.80*quantidade;
        printf("Valor a pagar: %.2lf", preco);
        break;

    case 4:
        preco=8.90*quantidade;
        printf("Valor a pagar: %.2lf", preco);
        break;
    
    case 5:
        preco=7.32*quantidade;
        printf("Valor a pagar: %.2lf", preco);
        break;


    default: printf("Numero digitado invalido");


        break;
    }

    return 0;
}