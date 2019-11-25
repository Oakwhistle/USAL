#include <stdio.h>
#include <stdlib.h>
#define  K1 '6'
#define  K2 '9'

/* Fuente: COMBINA2.C
   Programa: COMBINATORA: COMBINACIONES
   Descripción: Presenta la combinaciones de 6, 7, 8, 9 de orden 3.
*/

int main(void) {

   char i, j, k;
   int  cuantas = 0;

   puts("");
   puts("Se presentan las COMBINACIONES de orden 3 de 4 elementos.");
   puts("Elementos: 6, 7, 8 y 9.");
   puts("");

   for (i=K1; i<= K2; i++)
      for (j=i+1; j<= K2; j++)
         for (k=j+1; k<= K2; k++) {
            printf("  %c%c%c", i, j, k);
            cuantas++;
          }

   printf("\n\n");
   printf("Combinaciones encontradas %d.\n", cuantas);

   printf("\n");
   system ("pause");
   return 0;
}
