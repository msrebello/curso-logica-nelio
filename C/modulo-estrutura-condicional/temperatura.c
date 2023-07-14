#include <stdio.h>



int main(){

char escala;
double celsius, farenheit;

printf("Voce vai digitar a temperatura em qual escala (C/F)?");
scanf("%c", &escala);

if (escala=='F'){

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%lf", &farenheit);

    celsius=(5*(farenheit-23))/9;

    printf("Temperatura equivalente em Celsius: %.2lf", celsius);

}
    else 
        printf("Digite a temperatura em Celsius:");
        scanf("%lf", &celsius);

        farenheit=celsius*1.8+32;

        printf("Temperatura equivalente em Farenheit: %.2lf", farenheit);
    
    return 0;
}