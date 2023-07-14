#include <stdio.h>
#include<math.h>

double x1, x2, delta, a, b, c;

int main()
{
    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta=pow(b,2)-4*a*c;
    printf("%lf", delta);
    
    if (delta<0) printf("Esta equacao nao possui raizes reais.");

    else {

        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);

        printf("X1 = %.4lf\nX2 = %.4lf", x1, x2);
    }

    return 0;
}
