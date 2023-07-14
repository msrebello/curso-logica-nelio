#include <stdio.h>

int a, b, c, menor;

int main()
{
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a<b) && (a<c)) menor=a;

    else if ((b<a) && (b<c)) menor=b;

    else menor=c;

    printf("MENOR = %d", menor);

    return 0;
}
