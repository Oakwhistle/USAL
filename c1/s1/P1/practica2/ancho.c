#include <stdio.h>
#include <stdlib.h>

/* ancho.c */
/*
Programa: Especificadores de ancho de campo en C.
Desarrollado por: Pr cticas de programaci¢n.

Descripci¢n: Muestra el comportamiento de los especificadores de
	     ancho de campo de la funci¢n printf() en C.
*/


int main(void)
{
  printf("%1d  \n", 123);
  printf("%2d  \n", 123);
  printf("%3d  \n", 123);
  printf("%4d  \n", 123);
  printf("%5d  \n", 123);
  printf("%10d \n", 123);

  printf("%10o \n", 12);  /* El 12 decimal es el 14 octal */
  printf("%20X \n", 12);  /* El 12 decimal es el  C hexa  */


  printf("%6.3f \n", 12.567);
  printf("%6.2f \n", 12.567);  /* Redondear  a 12.57 la salida */
  printf("%6.4f \n", 12.567);
  printf("%6.0f \n", 12.567);  /* Redondear  a 13 la salida */

  printf("%c \n", 'B');
  printf("%3c \n", 'B');

  printf("%2s \n","Hola");
  printf("%3s \n","Hola");
  printf("%4s \n","Hola");
  printf("%5s \n","Hola");
  printf("%6s \n","Hola");


  printf("%.1f \n", 39.8702); /* S¢lo se especifican los decimales */
  printf("%12f \n", 39.8702); /* S¢lo se especifican el ancho de campo */

  printf("**%14f \n", 12.14);  /* Justificaci¢n a la derecha, por defecto */
  printf("**%-14f \n", 12.14); /* - para justificaci¢n a la izquierda */

  system ("pause");
  return 0;

}
