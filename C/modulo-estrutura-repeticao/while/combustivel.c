#include <stdio.h>
int produtos (){
    
    int cod;
        printf ("[1] Alcool.\n");
        printf ("[2] Gasolina.\n");
        printf ("[3] Diesel.\n");
        printf ("[4] Fim.\n\n");
        printf ("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf ("%d", &cod);

        return cod;
}

int main () {

    int cod, a=0, g=0, d=0;

    while (1) {
    cod = produtos ();

        if (cod == 1) {
            
            a = a + 1;
        }

        else if (cod == 2) {
            
            g = g + 1;
        }
 
        else if (cod == 3) {
            
            d = d + 1;
        }

        else if (cod == 4) {
            
            printf ("MUITO OBRIGADO!\n");
            printf ("Alcool: %d\n", a);
            printf ("Gasolina: %d\n", g);
            printf ("Diesel: %d\n", d);

            break;
        }

    }

    return 0;
}       