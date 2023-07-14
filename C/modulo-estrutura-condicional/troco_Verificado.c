#include <stdio.h>

int main(){

    float unitario, quantidade, troco, total, dinheiro;

    printf("Preco unitario do produto: ");
    scanf("%f", &unitario);

    printf("Quantidade comprada: ");
    scanf("%f", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    total=unitario*quantidade;
    troco=dinheiro-total;

    if(dinheiro>total) printf("TROCO = %.2f", troco);
    else {
        
        troco=total-dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS", troco);
    }

    return 0;
}