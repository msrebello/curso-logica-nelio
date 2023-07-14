#include <stdio.h>

int main (){

    int inicial, final, duracao;

    printf("Hora inicial: ");
    scanf("%d", &inicial);

    printf("Hora final: ");
    scanf("%d", &final);

    if(final>inicial) //O jogo ocorreu no mesmo dia
    
        duracao=final-inicial;

    else //Caso contrario, muda-se o dia

        duracao=24-inicial+final; //24 Horas 

    
    printf("O JOGO DUROU %d HORA(S).", duracao);

    return 0;
}