#include <stdio.h>

int main () {

    int x, y, aux, soma=0, i;

    printf ("Digite dois numeros: ");
    scanf ("%d %d", &x, &y);

    if (x>y) {
    aux = x;
    x = y;
    y = aux;
    }
    for (i = x;i < y-1;i++) { //Incremento para funcao
      printf ("%d ", i);  // Mostra todas as sequencias de numeros
    if (i%2==0) {  
        i++; // Incremento para soma, aproveitando o valor da funcao, caso esta recebe um valor par
        soma = soma + i; // Transforma em impar e soma
        printf ("%d ", i); //Mostra apenas os numeros impares
    }
        
    }
      printf ("\nSOMA DOS IMPARES = %d\n", soma);
  
  return 0;
  
}