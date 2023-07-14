#include <stdio.h>

int main () {

    int x, y;

    printf ("Digite dois numeros: ");
    scanf ("%d %d", &x, &y);

    if (x == y)    
        return 0;

    else {

    while (x > y) {
        printf ("DECRESCENTE!\n");
        printf ("Digite outros dois numeros: ");
        scanf ("%d %d", &x, &y);
    }

    while (y > x) {   
        printf ("CRESCENTE!\n");
        printf ("Digite outros dois numeros: ");
        scanf ("%d %d", &x, &y);
    }

    }

    return 0;
}

