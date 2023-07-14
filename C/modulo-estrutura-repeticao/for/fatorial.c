#include <stdio.h>

int main () {

    int N, i, fat=1;

    printf ("Digite o valor de N (ate 15): ");
    scanf ("%d", &N);

    for (i = N;i > 0;i--) {
        
        fat = fat*i;
        printf ("%d ", i);
        
    }
        printf ("FATORIAL = %d\n", fat); 

    return 0;  
}