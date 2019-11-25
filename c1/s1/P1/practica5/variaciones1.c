#include <stdio.h>
#include <stdlib.h>
#define K1 '1'
#define K2 '4'

/* Fuente: VARIAC1.C
   Programa: COMBINATORA: VARIACIONES SIN REPETICION
   Descripción: Presenta la variaciones sin repetición de 1, 2, 3, 4 tomados de 3 en 3.
*/


int main(void) {

   char i, j, k;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las VARIACIONES SIN REPETICION de 4 elementos tomados de 3 en 3.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=K1; j<= K2; j++)
         for (k=K1; k<= K2; k++)
	       if ((i != j) && (i != k) && (j != k)) {
              printf("     %c%c%c", i, j, k);
              cuantas++;
	       }

   printf("\n\n");
   printf("Variaciones encontradas %d.\n", cuantas);

   printf("\n");
   system ("pause");
   return 0;
}
