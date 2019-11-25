#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* Fuente: TIPOS01.C
   Programa: Rango tipos básicos en C
   Descripción: Muestra el rango y el tamaño en memoria de los tipos básicos en C

   sizeof() es un operador que aplicado sobre un nombre de tipo devuelve el tamaño en
   memoria del mismo, en bytes
*/

int main(void) {
  printf("Rango y tamaño de los distintos tipos de datos básicos    \n");
  printf("==========================================================\n");

  printf("      Tipo       | Tamaño  |           Rango              \n");
  printf("                 | (bytes) |                              \n");
  printf("-----------------|---------|------------------------------\n");

  printf(" char            |    %d    | %d\t\t a %d \n",
	   sizeof(char),   CHAR_MIN, CHAR_MAX);

  printf(" int             |    %d    | %d\t a %d \n",
	   sizeof(int),    INT_MIN, INT_MAX);

  printf(" float           |    %d    | %e\t a %e \n",
	   sizeof(float),  FLT_MIN,  FLT_MAX);

  printf(" double          |    %d    | %le\t a %le \n",
	   sizeof(double), DBL_MIN,  DBL_MAX);
	   
  system ("pause");
  return 0;
 }
