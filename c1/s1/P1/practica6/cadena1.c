#include <stdio.h>
#include <stdlib.h>

/* Fuente: CADENA1.C
   Programa: ESPECIFICADORES PARA CADENAS DE CARACTERES 
   Descripción: Muestra cómo imprimir cadenas de caracteres con diferentes tipos
   de iniciación de las cadenas y diferentes formas de sustituciones de los
   especificadores de formato.
 */

int main(void) {
   char palabra1[] = {"balon"};
   char palabra2[] = {'c', 'e', 's', 't', 'o', '\0'};

   printf("La meta en el %s%s es meter el %s en el %s.\n",
           palabra1, palabra2, palabra1, palabra2);
    
   printf("\n\n");
   system ("pause"); 
   return 0;

}
