#include <stdio.h>
#include <stdlib.h>
#define  K1 '6'
#define  K2 '8'

/* Fuente: PERMUTA1.C
   Programa: COMBINATORA: PERMUTACIONES ORDINARIAS O SIN REPETICION
   Descripción: Presenta las permutaciones de los dígitos 6, 7, 8.
*/

int main(void) {

   char i, j, k;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las PERMUTACIONES SIN REPETICION de 3 elementos.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=K1; j<= K2; j++)
         for (k=K1; k<= K2; k++)
            if ((i != j) && (i != k) && (j != k)) {
               printf("  %c%c%c", i, j, k);
               cuantas++;
            }

   printf("\n\n");
   printf("Permutaciones encontradas %d.\n", cuantas);

   printf("\n");
   system ("pause");
   return 0;
}
