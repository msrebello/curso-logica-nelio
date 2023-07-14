#include <stdio.h>

int main () {

    int n, i;

    printf ("Serao digitados dados de quantos produtos? ");
    scanf ("%d", &n);

    char nome[n][50];
    double pCompra [n], pVenda[n], lucro[n], somaCompra = 0, somaVenda = 0, lucroTotal;
    int cont_lucro10 = 0, cont_lucro20 = 0, cont_lucro = 0;

    for (i=0; i <= n-1; i++) {

        printf ("Produto %d\n", i + 1);
        fflush(stdin);
        printf ("Nome: ");
        scanf ("%s", &nome[i]);
        printf ("Preco de compra: ");
        scanf ("%lf", &pCompra[i]);
        printf ("Preco de venda: ");
        scanf ("%lf", &pVenda[i]);   

    }

    printf ("\nRELATORIO: \n");

    for (i=0; i <= n-1; i++) {

        lucro[i] = ((pVenda[i] - pCompra[i])*100)/pVenda[i];
        printf ("%.2lf\n", lucro[i]);

        if (lucro[i] < 10) cont_lucro10++;        
        else if (lucro[i] <= 20) cont_lucro20++;
        else if (lucro[i] > 20) cont_lucro++;
    }

    printf ("Lucro abaixo de 10%: %d\n", cont_lucro10);
    printf ("Lucro entre 10 e 20%: %d\n", cont_lucro20);
    printf ("Lucro acima de 20%: %d\n", cont_lucro);

    for (i=0; i <= n-1; i++) {

        somaCompra = somaCompra + pCompra[i];
        somaVenda = somaVenda + pVenda[i];
        lucroTotal = somaVenda - somaCompra;

    }
                        
        printf ("Valor total de compra: %.2lf\n", somaCompra);
        printf ("Valor total de venda: %.2lf\n", somaVenda);
        printf ("Lucro total: %.2lf\n", lucroTotal);
    
    return 0;
}