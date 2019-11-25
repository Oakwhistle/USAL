#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define DIMMAX 25

/* Fuente: SIZEOF.C
   Programa: TAMAÑO DE UN ARRAY
   Descripción: Se presenta el tamaño de varios arrays, tanto unidimensionales
   como bidimensionales, calculados de distintas formas.
   En programa sirve de comprobación de que el operador sizeof puede utilizarse 
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


/* Presentación del programa
   ---------------------------------------
*/
  printf("Tamaño vector1: %3d - %3d\n", sizeof(float) * DIMMAX,   sizeof(vector1));
  printf("Tamaño vector2: %3d - %3d\n", sizeof(int) * (DIMMAX+5), sizeof(vector2));
  printf("Tamaño vector3: %3d - %3d\n", sizeof(int) * 7,          sizeof(vector3));
  printf("Tamaño tabla1 : %3d - %3d\n", sizeof(double) * 12 * 3,  sizeof(tabla1));
  printf("Tamaño tabla2 : %3d - %3d\n", sizeof(int) * 6,          sizeof(tabla2));
  
  printf("\n\n");
  system ("pause");
  return 0;
}
