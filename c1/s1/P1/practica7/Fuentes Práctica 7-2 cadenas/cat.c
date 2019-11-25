/* Fuente: CAT.C
   Programa: COMPORTAMIENTO DE STRCAT
   Descripción: Muestra el comportamiento de la función strcat()
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
   char cad1[80] = "";
   char cad1prima[80] = "";
   char cad2[80] = "";
   char cad3[50];

   system ("cls");
   puts("Ejemplos de strcat()");
   puts("====================\n");
   puts("char *strcat(char *dest, const char *src);\n");
   puts("strcat() añade una copia de la cadena src al final de la cadena dest.");
   puts("La longitud de la cadena resultado es longitud(dest) + longitug(src).");
   puts("");
   puts("No se reserva más espacio para dest, por lo que esta cadena deberá haberse");
   puts("definido desde el principio con tantos caracteres como para poder almacenar");
   puts("el resultado de la concatenación\n");
   puts("strcat() retorna un puntero a la cadena resultado de la concatenación: dest\n");

   printf("Escriba una primera cadena (cad1): ");
   gets(cad1);

   strcpy(cad1prima, cad1);   /* Nos guardamos cad1 en cad1prima */

   printf("Escriba una segunda cadena (cad2): ");
   gets(cad2);

   cad3 = strcat(cad1, cad2);

   puts("\n\n      cad3 = strcat(cad1, cad2);\n");
   printf("La concatenación de \n");
   printf("cad1: \"%s\"\n", cad1);
   printf("y de \n");
   printf("cad2: \"%s\"\n", cad2);
   printf("es \n");
   printf("cad3: \"%s\"\n", cad3);

   printf("\n¿Esperaba el lector que cad1 siguiera siendo \"%s\"\?\n",cad1prima);

   printf("\n\n");
   printf("Dirección de cad1: %p. Cadena destino concatenación\n", cad1);
   printf("Dirección de cad2: %p. Cadena a concaterar\n", cad2);
   printf("Dirección de cad3: %p. La misma que la cadena destino concatenación\n", cad3);

/* Nota - strcat() NO crea una cadena NUEVA. Se limita a AÑADIR el contenido
   de cad2 al contenido de cad1 (dest). Tampoco se reserva más espacio para cad1 (dest).
*/

   printf("\n");
   system ("pause");
   return 0;

}

