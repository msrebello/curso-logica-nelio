#include <stdio.h>

float nota1, nota2, final;

int main()
{
    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    final=nota1+nota2;
    printf("NOTA FINAL: %.1f\n", final);

    if (final<60) printf ("REPROVADO\n");

    return 0;
}
