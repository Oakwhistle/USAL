#include <stdio.h>
#include <stdlib.h>

/* Fuente: FORINFIN.C
   Programa: FOR INFINITO
   Descripción: Lee de teclado n números y calcula su suma. Se controla en fin de 
   la lectura mediante un bucle for infinito y una sentencia break.
*/

int main(void) {
  const int LIMITE_SUP = 30000;
  int   n, cuantos = 1, numero;
  float suma = 0;

  printf("Suma de n números leídos de teclado\n");
  printf("===================================\n");
  printf("Realiza la suma de una serie de números que se introducen "
         "por teclado.\n");

  do {   printf("Cuántos números (0 < n <= %d)?: ", LIMITE_SUP);
         scanf("%d", &n);
     } while (n <= 0 || n > LIMITE_SUP);

  for (;;) /* bucle infinito */
    if (cuantos <= n)
       { printf("Número %d)?: ", cuantos);
         scanf("%d", &numero);
         suma += numero;
         cuantos++;
       }
    else break;
  
  printf("\n");
  printf("El valor de la suma es %.0f\n", suma);

  printf("\n");
  system ("pause");
  return 0;
}
