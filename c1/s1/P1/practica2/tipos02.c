#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/* Fuente: TIPOS02.C
   Programa: Rango tipos en C
   Descripción: Muestra el rango y el tamaño en memoria de los tipos numéricos en C
  
   sizeof() es un operador que aplicado sobre un nombre de tipo devuelve el tamaño en
   memoria del mismo, en bytes
*/

int main(void) {

  printf("Rango y tamaño de los distintos tipos numéricos           \n");
  printf("==========================================================\n");

  printf("      Tipo       | Tamaño  |           Rango              \n");
  printf("                 | (bytes) |                              \n");
  printf("-----------------|---------|------------------------------\n");

  printf(" unsigned char   |    %d    | %d\t\t\t a %d \n",
	   sizeof(unsigned char), 0, UCHAR_MAX);

  printf(" char            |    %d    | %d\t\t a %d \n",
	   sizeof(char),   CHAR_MIN, CHAR_MAX);


  printf(" int             |    %d    | %d\t a %d \n",
	   sizeof(int), INT_MIN, INT_MAX);

  printf(" unsigned int    |    %d    | %d\t\t\t a %u \n",
	   sizeof(unsigned int), 0, UINT_MAX);

  printf(" short           |    %d    | %d\t\t a %d \n",
	   sizeof(short), SHRT_MIN, SHRT_MAX);

  printf(" unsigned short  |    %d    | %d\t\t\t a %u \n",
	   sizeof(unsigned short), 0, USHRT_MAX);

  printf(" long            |    %d    | %ld\t a %ld\n",
	   sizeof(long), LONG_MIN, LONG_MAX);

  printf(" unsigned long   |    %d    | %d\t\t\t a %lu \n",
	   sizeof(unsigned long), 0, ULONG_MAX);



  printf(" float           |    %d    | %e\t a %e \n",
	   sizeof(float),  FLT_MIN,  FLT_MAX);

  printf(" double          |    %d    | %le\t a %le \n",
	   sizeof(double), DBL_MIN,  DBL_MAX);

  printf(" long double     |   %d    | %Le\t a %Le \n",
	   sizeof(long double), LDBL_MIN,  LDBL_MAX);
	   
  system ("pause");
  return 0;
 }
