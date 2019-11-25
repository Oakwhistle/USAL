#include <stdio.h>
#include <stdlib.h>
#define  K1 'A'
#define  K2 'D'

/* Fuente: COMBINA1.C
   Programa: COMBINATORA: COMBINACIONES
   Descripción: Presenta la combinaciones de A, B, C, D de orden 2.
*/

int main(void) {

   char i, j;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las COMBINACIONES de orden 2 de 4 elementos.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=i+1; j<= K2; j++)
         {
           printf("   %c%c", i, j);
		   cuantas++;
         }

   printf("\n\n");
   printf("Combinaciones encontradas %d.\n", cuantas);
   
   printf("\n");
   system ("pause");
   return 0;
}
