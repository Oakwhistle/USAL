/* Fuente: CMP.C
   Programa: COMPORTAMIENTO DE STRCMP
   Descripción: Muestra el comportamiento de la función strcmp()
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char cad1[80] = "";
   char cad2[80] = "";
   int resultado = 0;

   system ("cls");
   puts("Ejemplos de strcmp()");
   puts("====================\n");
   puts("int strcmp(const char *cad1, const char *cad2);\n");
   puts("Compara alfabéticamente las cadenas cad1 y cad2 y devuelve:");
   puts("   0 si cad1 es igual a cad2");
   puts("  <0 si cad1 < cad2");
   puts("  >0 si cad1 > cad2");

   printf("\n\nIntroduzca una cadena (cad1) : ");
   gets(cad1);
   printf("Introduzca otra cadena (cad2): ");
   gets(cad2);

   resultado = strcmp(cad1,cad2);

   printf("\nY después de aplicar    resultado = strcmp(cad1,cad2)\n\n");
   printf("Resultado de la comparación: %d\n\n", resultado);

   switch ( (resultado>0) ? 1 : (resultado<0) ? -1 : 0 ) {
     case -1: printf("cad1 \"%s\"\nes menor que\ncad2 \"%s\"\n", cad1, cad2);
	      break;
     case  0: printf("cad1 \"%s\"\nes igual que\ncad2 \"%s\"\n", cad1, cad2);
	      break;
     case  1: printf("cad1 \"%s\"\nes mayor que\ncad2 \"%s\"\n", cad1, cad2);
              break;
     default: printf("Algo ha fallado en strcmp().\n");
              break;
   }
   
   printf("\n");
   system ("pause");
   return 0;
}
