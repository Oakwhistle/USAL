#include <stdio.h>
#include <stdlib.h>
#define  K1 '0'
#define  K2 '1'

/* Fuente: VARIACR3.C
   Programa: COMBINATORA: VARIACIONES CON REPETICION
   Descripción: Presenta la variaciones sin repetición de 0, 1 tomados de 4 en 4.
*/


int main(void) {

   char i, j, k, l;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las VARIACIONES CON REPETICION de 2 elementos tomados de 4 en 4.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=K1; j<= K2; j++)
         for (k=K1; k<= K2; k++)
            for (l=K1; l<= K2; l++) {
               printf("    %c%c%c%c", i, j, k, l);
               cuantas++;
            }

   printf("\n\n");
   printf("Variaciones encontradas %d.\n", cuantas);
   
   printf("\n");
   system ("pause");
   return 0;

}
