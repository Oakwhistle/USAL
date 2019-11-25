#include <stdio.h>
#include <stdlib.h>

/* Fuente: CONTINUE.C
   Programa: COMPORTAMIENTO DE LA SENTENCIA CONTINUE DENTRO DE UN BUCLE.
   Descripción: Este programa permite comprobar el comportamiento de la sentencia
   continue invocada dentro de un bucle.
*/

int main(void) {

   int externo, interno;

   printf("\n");

   for (externo=3; externo <= 10; externo++)
   {
      if ((externo % 2) == 0)
	 continue;

      interno = 3;
      while (interno <= 5)
      {
	printf("externo: %d, interno: %d\n", externo, interno);
	interno++;
     }
   }

   printf("\n");
   system ("pause");
   return 0;

}

 /* -----------------------------------------------------------------
    El bucle interno no llega nunca a ejecutarse cuando la variable
    de control del bucle externo es par. Para los valores pares de la
    variable "externo" se salta sin ejecutarse el cuerpo del bucle
    while y se continúa con la siguiente iteración del bucle externo for.

    Comprobar el comportamiento del programa eliminando el sentencia
	 if ((externo % 2) == 0)
	    continue;
    ----------------------------------------------------------------- */
