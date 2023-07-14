#include <stdio.h>

int main (){

    double salario, novoSalario, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if (salario<1000) {

        porcentagem=20;
        aumento=salario*0.20;
        novoSalario=salario*1.20;
     
    }
        else if (salario<=3000) {

        porcentagem=15;
        aumento=salario*0.15;
        novoSalario=salario*1.15;
     
    }
        else if (salario<=8000) {

        porcentagem=10;
        aumento=salario*0.10;
        novoSalario=salario*1.10;
     
    }
        else {

        porcentagem=5;
        aumento=salario*0.05;
        novoSalario=salario*1.05;
     
    }
        printf("Novo salario = %.2lf\n", novoSalario);
        printf("Aumento = %.2lf\n", aumento);
        printf("Porcentagem = %d%%\n", porcentagem);

    return 0;
}