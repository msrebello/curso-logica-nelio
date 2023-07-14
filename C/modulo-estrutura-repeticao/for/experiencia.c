#include <stdio.h>

int main () {
    char cobaia;
    int teste, i, n, total_c = 0, total_s = 0, total_r = 0;
    double p_c, p_s, p_r, total = 0; 

    printf ("Quantos casos de teste serao digitados? ");
    scanf ("%d", &teste);

    for (i = 1;i <= teste;i++) {

        printf ("Quantidade de cobaias: ");
        scanf ("%d", &n);
        fflush(stdin);
        printf ("Tipo de cobaia: ");
        scanf ("%c", &cobaia);
        

        total = total + n;
        if (cobaia == 'C') {

            total_c = total_c + n;
            
        }
        else if (cobaia == 'S') {

            total_s = total_s + n;
            
        }
        else if (cobaia == 'R') {

            total_r = total_r + n;
            
        }
         p_c = (total_c/total)*100;
         p_s = (total_s/total)*100;
         p_r = (total_r/total)*100;
    }
        printf ("\nRELATORIO FINAL: \n");
        printf ("Total: %.0lf cobaias\n", total);
        printf ("Total de coelhos: %d\n", total_c);
        printf ("Total de ratos: %d\n", total_r);
        printf ("Total de sapos: %d\n", total_s);
        printf ("Percentual de coelhos: %.2lf\n", p_c);
        printf ("Percentual de ratos: %.2lf\n", p_r);
        printf ("Percentual de sapos: %.2lf\n", p_s);

    return 0; 
}
