#include <stdio.h>
#include <stdlib.h>

/* formchar.c */
/*

Programa: Formatos salida de los datos de tipo char.

Desarrollado por: Practicas de programacion.

Descripci¢n: Visualiza un char como char y como decimal (con y sin isgno).


*/


int main(void)

{
   char   caracter = 'a';

   printf("El caracter a en ASCII se corresponde con: 01100001 = 97 en decimal");
   printf("\n");
   printf("Variable caracter con %%c  = %c  \n", caracter);
   printf("Variable caracter con %%d  = %d  \n", caracter);
 
 
  system ("pause");
  return 0;
}

