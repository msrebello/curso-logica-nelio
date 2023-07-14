#include <stdio.h>

int minutos, valor=50, extra;

int main()
{
    printf("Minutos: ");
    scanf("%d", &minutos);

    if (minutos<=100) printf("Valor a pagar: %d", valor);

    else {
        extra=minutos%100;
        valor=valor+extra*2;

    printf("Valor a pagar: %d", valor);
    }
    
    return 0;
}