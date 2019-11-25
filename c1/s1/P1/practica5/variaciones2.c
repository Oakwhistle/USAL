#include <stdio.h>
#include <stdlib.h>
#define  K1 'A'
#define  K2 'F'

/* Fuente: VARIAC2.C
   Programa: COMBINATORA: VARIACIONES SIN REPETICION
   Descripción: Presenta la variaciones sin repetición de A, B, C, D, E, F tomados de 4 en 4.
*/


int main(void) {

   char i, j, k, l;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las VARIACIONES SIN REPETICION de 6 elementos tomados de 4 en 4.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=K1; j<= K2; j++)
         for (k=K1; k<= K2; k++)
            for (l=K1; l<= K2; l++)
               if ((i != j) && (i != k) && (i != l) &&
                   (j != k) && (j != l) && (k != l))
                 {
                    printf(" %c%c%c%c", i, j, k, l);
                    cuantas++;
                 }

   printf("\n");
   printf("Variaciones encontradas %d.", cuantas);
   
   printf("\n");
   system ("pause");
   return 0;
}
