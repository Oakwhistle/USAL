/* Fuente: ESPACIOS.C
   Programa: ELIMINA ESPACIOS POR LA DERECHA E IZQUIERDA
   Descripción: Las funciones ELIMINA_ESPACIOS_IZQ y ELIMINA_ESPACIOS_DER, reciben una cadena
   de caracteres y devuelven la propia cadena una vez que han eliminado respectivamente los
   espacios en blanco de comienzo y final de la cadena
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void elimina_espacios_izq (char *);
void elimina_espacios_der (char *);


int main(void) {
   char cadena[] = "  Texto para ejemplo de espaciado  ";
   printf("\nCadena original:\n>>>%s<<<\n", cadena);

   elimina_espacios_izq(cadena);

   printf("\nSin espacios por la izquierda:\n>>>%s<<<\n", cadena);

   elimina_espacios_der(cadena);

   printf("\nSin espacios por la derecha:\n>>>%s<<<\n", cadena);
   
   printf ("\n\n");
   system ("pause");
   return 0;
}

void elimina_espacios_izq (char *cad) {
  const char BLANCO = ' ';
  int   k, k2;

/* localizamos el primer carácter no espacio */
   k=0;
   while (cad[k] == BLANCO) k++;

/* desplazamos todos los elementos hacia el principio de la cadena */
   k2 = 0;
   while (cad[k] != '\0') cad[k2++] = cad[k++];

/* hemos terminado porque cadena[k] vale '\0', por lo que    */
/* desplazamos este carácter también                         */
   cad[k2] = cad[k];
}

void elimina_espacios_der (char *cad) {
  const char BLANCO = ' ';
  int   k;

/* desde el final de la cadena vamos hacia atrás hasta localizar el   */
/* primer carácter no espacio                                         */
   k = strlen(cad) - 1;
   while ( (cad[k] == BLANCO) && (k >= 0) )  k--;

/* k apunta al primer carácter por la derecha no espacio, por lo que  */
/* colocamos un \0 en el siguiente                                    */
   cad[++k] = '\0';
}
