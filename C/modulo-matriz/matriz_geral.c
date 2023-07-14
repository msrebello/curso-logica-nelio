#include <stdio.h>
#include <math.h>

int main () {

    int ordem, i, j;

    printf ("Qual a ordem da matriz? ");
    scanf ("%d", &ordem);

    //Matriz unica
    double matriz [9][9];

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) { 

            printf ("Elemento [%d,%d]: ", i, j);
            scanf ("%lf", &matriz[i][j]);
        }
    }

    //Soma dos positivos
    double somaPositvo = 0;

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {
                    
            if (matriz[i][j] > 0) // Pega somente os valores positivos da matriz
                    somaPositvo = somaPositvo + matriz[i][j];
            }
    }

    printf ("\nSOMA DOS POSITIVOS: %.1lf\n", somaPositvo);

    //Escolhendo uma linha
    int linha;

    printf ("Escolha uma linha: ");
    scanf ("%d", &linha);
    printf ("LINHA ESCOLHIDA: ");

    for (j=0; j <= ordem-1; j++) {

        printf ("%.1lf ", matriz[linha][j]);
    }
    
    printf ("\n");

    //Escolhendo uma coluna
    int coluna;

    printf ("Escolha uma linha: ");
    scanf ("%d", &coluna);
    printf ("COLUNA ESCOLHIDA: ");

    for (i=0; i <= ordem-1; i++) {

        printf ("%.1lf ", matriz[i][coluna]);
    }
    
    printf ("\n");

    //Mostrando a diagonal principal
    printf ("DIAGONAL PRINCIPAL: ");

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {
                        
            if (i == j)  
                printf ("%.1lf ", matriz[i][j]);
            }
    }

    printf ("\n");
                
    //Alterando a matriz elevando ao quadrado os elementos negativos
    double matrizAlterada [9][9];

    printf ("MATRIZ ALTERADA: \n");

    for (i=0; i <= ordem-1; i++) {

        for (j=0; j <= ordem-1; j++) {

            if (matriz[i][j] < 0) {

                matrizAlterada[i][j] = pow(matriz[i][j],2);
            }
            else if (matriz[i][j] >= 0) {
                                
                matrizAlterada[i][j] = matriz[i][j];
            }

            printf ("%.1lf ", matrizAlterada[i][j]);
        }
    
    printf ("\n");
    }
    
    return 0;
}