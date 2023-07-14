#include <stdio.h>

int main () {

    int taboada, x, cont = 10, mult;

    printf ("Deseja a tabuada para qual valor? ");
    scanf ("%d", &taboada);

    for (x=0;x<=cont;x++) {
    
        mult = taboada*x;
        printf ("%d x %d = %d\n",taboada, x, mult);
    }
    
    return 0;
}