#include <stdio.h>
#include <stdlib.h>
/*

Programa: Formatos salida n£meros enteros.

Desarrollado por: Prácticas de programacion.

Descripci¢n: Visualiza un n£mero entero en varios formatos diferentes.


*/

int main(void)

{
   int   entero1 = 2;
   int	 entero2 = -2;

   system ("cls");
   printf("El entero 2 en binario ser¡a: 00000000 00000010");
   printf("\n");
   printf("Variable entero1 con %%d  = %d  \n", entero1);
   printf("Variable entero1 con %%i  = %i  \n", entero1);
   printf("Variable entero1 con %%u  = %u  \n", entero1);
   printf("Variable entero1 con %%hd  = %hd  \n", entero1);
   printf("Variable entero1 con %%ld  = %ld  \n", entero1);  // Ojo sigue ocupando 4 bytes
   printf("Variable entero1 con %%lu  = %lu  \n", entero1);  // Ojo sigue ocupando 4 bytes

   printf("\n");

   printf("El entero -2 en binario ser¡a: 11111111 11111110");
   printf("\n");
   printf("Variable entero2 con %%d  = %d  \n", entero2);
   printf("Variable entero2 con %%i  = %i  \n", entero2);
   printf("Variable entero2 con %%u  = %u  \n", entero2);    // Ojo sin signo es un n£mero muy grande
   printf("Variable entero2 con %%hd  = %hd  \n", entero2);
   printf("Variable entero2 con %%ld  = %ld  \n", entero2);  // Ojo sigue ocupando 4 bytes
   printf("Variable entero2 con %%lu  = %lu  \n", entero2);  // Ojo sigue ocupando 4 bytes

   printf("\n");
   printf("Al presentar un entero como caracter se pierde precisi¢n\n");
   printf("La variable entero1 como %%c = %c \n", entero1);
   printf("La variable entero2 como %%c = %c \n", entero2);
   printf("Realmente estamos representando el c¢digo ASCII de estas dos variables\n");
   	   
  system ("pause");
  return 0;

}

