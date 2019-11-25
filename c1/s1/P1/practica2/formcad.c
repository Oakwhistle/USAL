#include <stdio.h>
#include <stdlib.h>

/* formchar.c */
/*

Programa: Formatos salida de los datos de tipo char.

Desarrollado por: Practicas de programacion.

Descripci¢n: Visualiza una cadena de tipo char como cadena y como char.


*/


int main(void)

{
   char   cadena[12] = "Informatica";
   char   cadena2[80] = "Ingenieria tecnica en informatica de sistemas"; 

   printf("Variable cadena con %%s  = %s  \n", cadena);
   printf("Variable cadena con %%s  = %s  \n", cadena2);   
   printf("Variable cadena como %%c = %c  \n", cadena);
  	   
  system ("pause");
  return 0;


}

