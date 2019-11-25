#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* Fuente: TIPOS01.C
   Programa: Rango tipos b�sicos en C
   Descripci�n: Muestra el rango y el tama�o en memoria de los tipos b�sicos en C

   sizeof() es un operador que aplicado sobre un nombre de tipo devuelve el tama�o en
   memoria del mismo, en bytes
*/

int main(void) {
  printf("Rango y tama�o de los distintos tipos de datos b�sicos    \n");
  printf("==========================================================\n");

  printf("      Tipo       | Tama�o  |           Rango              \n");
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
