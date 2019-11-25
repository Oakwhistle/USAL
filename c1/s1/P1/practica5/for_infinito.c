#include <stdio.h>
#include <stdlib.h>

/* Fuente: FORINFIN.C
   Programa: FOR INFINITO
   Descripci�n: Lee de teclado n n�meros y calcula su suma. Se controla en fin de 
   la lectura mediante un bucle for infinito y una sentencia break.
*/

int main(void) {
  const int LIMITE_SUP = 30000;
  int   n, cuantos = 1, numero;
  float suma = 0;

  printf("Suma de n n�meros le�dos de teclado\n");
  printf("===================================\n");
  printf("Realiza la suma de una serie de n�meros que se introducen "
         "por teclado.\n");

  do {   printf("Cu�ntos n�meros (0 < n <= %d)?: ", LIMITE_SUP);
         scanf("%d", &n);
     } while (n <= 0 || n > LIMITE_SUP);

  for (;;) /* bucle infinito */
    if (cuantos <= n)
       { printf("N�mero %d)?: ", cuantos);
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
