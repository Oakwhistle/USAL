#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define DIMMAX 25

/* Fuente: SIZEOF.C
   Programa: TAMA�O DE UN ARRAY
   Descripci�n: Se presenta el tama�o de varios arrays, tanto unidimensionales
   como bidimensionales, calculados de distintas formas.
   En programa sirve de comprobaci�n de que el operador sizeof puede utilizarse 
   con estructuras de datos como los arrays
*/


int main(void) {

/* Definiciones de variables y constantes
   ---------------------------------------
*/
  float vector1[DIMMAX];
  int   vector2[DIMMAX+5];
  int   vector3[] ={1,2,3,4,5,6,7};
  
  double tabla1[12][3];
  int    tabla2[][3] = {1,2,3,4,5,6};


/* Presentaci�n del programa
   ---------------------------------------
*/
  printf("Tama�o vector1: %3d - %3d\n", sizeof(float) * DIMMAX,   sizeof(vector1));
  printf("Tama�o vector2: %3d - %3d\n", sizeof(int) * (DIMMAX+5), sizeof(vector2));
  printf("Tama�o vector3: %3d - %3d\n", sizeof(int) * 7,          sizeof(vector3));
  printf("Tama�o tabla1 : %3d - %3d\n", sizeof(double) * 12 * 3,  sizeof(tabla1));
  printf("Tama�o tabla2 : %3d - %3d\n", sizeof(int) * 6,          sizeof(tabla2));
  
  printf("\n\n");
  system ("pause");
  return 0;
}
