#include <stdio.h>

int main () {

    int i, n;

    printf ("Quantos numeros voce vai digitar? ");
    scanf ("%d", &n);

    
    int A[n], B[n], C[n];

    printf ("Digite os valores do vetor A: \n");

    for (i=0;i<=n-1;i++) {

        scanf ("%d", &A[i]);  
    }

    printf ("Digite os valores do vetor B: \n");
    
    for (i=0;i<=n-1;i++) { 

        scanf ("%d", &B[i]);

    }
    
    printf ("VETOR RESULTANTE: \n");
    
    for (i=0;i<=n-1;i++) {
            
        C[i] = A[i] + B[i];
        printf ("%d\n", C[i]);

    } 

    return 0;
}