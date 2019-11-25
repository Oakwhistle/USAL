/* Fuente: CPY.C
   Programa: COMPORTAMIENTO DE STRCPY
   Descripci�n: Muestra el comportamiento de la funci�n strcpy()
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char origen1[] = "UNIVERSIDAD DE SALAMANCA";
   char destino1[30] = "";
   char origen2[] = "DEPARTAMENTO DE INFORMATICA Y AUTOMATICA";
   char destino2[50] = "SOY LA CADENA DESTINO2";
   char *pntcad;

   system ("cls");
   puts("Ejemplos de strcpy()");
   puts("====================\n");
   puts("char *strcpy(char *dest, const char *src);\n");
   puts("strcpy() copia la cadena src sobre la cadena dest.");
   puts("strcpy() restorna un puntero a la cadena destino de la copia: dest\n");

   printf("\nSituaci�n inicial: \n");
   printf("  Cadena origen1 tiene informaci�n: %s\n", origen1);
   printf("  Cadena destino1 est� vac�a: %s\n", destino1);

   /* Aqu� despreciamos el valor de retorno de strcpy() */

   printf("\nY despu�s de aplicar strcpy(destino1, origen1)):\n\n");
   strcpy(destino1, origen1);

   printf("Situaci�n final: Ambas cadenas contienen los mismo.\n");
   printf("  Cadena origen1 : %s\n", origen1);
   printf("  Cadena destino1: %s\n", destino1);

   printf("\n");
   system ("pause");

   printf("\n\nOtro ejemplo. Situaci�n inicial: \n");
   printf("  Cadena origen2 tiene informaci�n: %s\n", origen2);
   printf("  Cadena destino2 tiene informaci�n: %s\n", destino2);

   /* Aqu� no despreciamos el valor de retorno de strcpy() */
   printf("\nY despu�s de aplicar pntcad = strcpy(destino2, origen2)):\n\n");
   pntcad = strcpy(destino2, origen2);

   printf("Situaci�n final: \n");
   printf("Ambas cadenas contienen los mismo. Perdemos el valor inicial de destino2\n");
   printf("  Cadena origen2 : %s\n", origen2);
   printf("  Cadena destino2: %s\n", destino2);
   printf("\nstrcpy() proporciona un puntero a la cadena destino de la copia:\n");
   printf("La cadena copiada es : %s\n\n", pntcad);
   printf("Direcci�n de origen2 : %p. Cadena origen copia\n", origen2);
   printf("Direcci�n de destino2: %p. Cadena destino copia\n", destino2);
   printf("Direcci�n de pntcad  : %p. La misma que la cadena destino copia\n", pntcad);

   printf("\n");
   system ("pause");
   return 0;
}
