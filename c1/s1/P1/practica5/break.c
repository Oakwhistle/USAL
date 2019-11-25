#include <stdio.h>
#include <stdlib.h>

/* Fuente: BREAK.C
   Programa: COMPORTAMIENTO DE LA SENTENCIA BREAK DENTRO DE UN BUCLE.
   Descripción: Este programa permite comprobar el comportamiento de la sentencia
   break invocada dentro de un bucle.
*/

int main(void) {

   int externo, interno;

   for (externo=0; externo <= 5; externo++)
   {
      interno = 3;
      while (interno <= 9)
      {
	printf("externo: %d, interno: %d\n", externo, interno);
	interno++;
	if (interno == 5)
	   break;
      }
   }
   
   printf("\n");
   system ("pause");
   return 0;
} 

/* ========================================================>
   El bucle interno no llega nunca a realizar las iteraciones con valores
   de la variable "interno" 5, 6, 7, pues en el momento que la variable "interno"
   toma valor 5 salimos del bucle interno volviendo a ejecutarse la siguiente
   iteración del bucle externo.

   Comprobar el comportamiento del programa eliminando el sentencia
       if (interno == 5)
           break;

 ========================================================== */



