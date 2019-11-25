#include <stdio.h>
#include <stdlib.h>
#define FILAS 4
#define COLUMNAS 5

/* Fuente: RECORRER.C
   Programa: ORECORRIDO DE UNA TABLA DE DISTINTAS FORMAS
   Descripción: Se recorre una tabla bidimnsional por distintos criterios:
	1 - Por filas, de modo ascendente de fila y columna
	2 - Por filas, de modo ascendente de fila y descendente de columna
	3 - Por filas, de modo descendente de fila y columna
	4 - Por filas, de modo descendente de fila y ascendente de columna
	5 - Por columnas, de modo ascendente de columna y fila
	6 - Por columnas, de modo ascendente de columna y descendente de fila
	7 - Por columnas, de modo descendente de columna y fila
	8 - Por columnas, de modo descendente de columna y ascendente de fila

*/



int main (void)  {

  int vc[FILAS][COLUMNAS] = {11, 12, 13, 14, 15,
			     21, 22, 23, 24, 25,
			     31, 32, 33, 34, 35,
			     41, 42, 43, 44, 45};
  int f, c;

  system ("cls");
  puts("1. Recorrido por filas, de modo ascendente de fila y columna");
  puts("------------------------------------------------------------");

  for (f = 0; f < FILAS; f++)
    for (c = 0; c < COLUMNAS; c++)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("2. Recorrido por filas, de modo ascendente de fila y descendente de columna");
  puts("---------------------------------------------------------------------------");

  for (f = 0; f < FILAS; f++)
    for (c = COLUMNAS-1; c >= 0; c--)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("3. Recorrido por filas, de modo descendente de fila y columna");
  puts("-------------------------------------------------------------");

  for (f = FILAS-1; f >= 0; f--)
    for (c = COLUMNAS-1; c >= 0; c--)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("4. Recorrido por filas, de modo descendente de fila y ascendente de columna");
  puts("---------------------------------------------------------------------------");

  for (f = FILAS-1; f >= 0; f--)
    for (c = 0; c < COLUMNAS; c++)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("5. Recorrido por columnas, de modo ascendente de columna y fila");
  puts("---------------------------------------------------------------");

  for (c = 0; c < COLUMNAS; c++)
    for (f = 0; f < FILAS; f++)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("6. Recorrido por columnas, de modo ascendente de columna y descendente de fila");
  puts("------------------------------------------------------------------------------");

  for (c = 0; c < COLUMNAS; c++)
    for (f = FILAS-1; f >= 0; f--)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("7. Recorrido por columnas, de modo descendente de columna y fila");
  puts("----------------------------------------------------------------");

  for (c = COLUMNAS-1; c >= 0; c--)
    for (f = FILAS-1; f >= 0; f--)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para continuar.");
  getchar();


  system ("cls");
  puts("8. Recorrido por columnas, de modo descendente de columna y ascendente de fila");
  puts("------------------------------------------------------------------------------");

  for (c = COLUMNAS-1; c >= 0; c--)
    for (f = 0; f < FILAS; f++)
	 printf("vc(%d, %d) = %d\n", f+1, c+1, vc[f][c]);

  printf("\n\nPulsa \"intro\" para terminar.");
  getchar();
  return 0;
}
