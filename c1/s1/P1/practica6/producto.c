#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FIL  25
#define COL  25


/* Fuente: PRODUCTO.C
   Programa: MULTIPLICA MATRICES DE HASTA 25 X 25
   Descripción:
     - Pedimos que se introduzca la primera matriz por filas.
     - Pedimos que se introduzca la segunda matriz por filas.
     - Obtenemos la matriz producto de ambas.
     - Presentamos las matrices introducidas y la matriz producto obtenida.

*/

int main (void) {

  long matrizA[FIL][COL];      /* matriz a                      */
  long matrizB[FIL][COL];      /* matriz b                      */
  long matrizP[FIL][COL];      /* matriz producto               */

  int filA, colA;  /* filas, columnas efectivas matriz a        */
  int filB, colB;  /* filas, columnas efectivas matriz b        */
  int filP, colP;  /* filas, columnas efectivas matriz producto */

  int f, c;        /* índices para recorrido matriz             */
  int j;


  system ("cls");  /* Borrado de pantalla */
  puts ("Programa para realizar el producto de dos matrices de enteros");
  puts ("-------------------------------------------------------------");

/* Se lee el número de filas de la primera matriz (A) -------- */
  do
   { printf("¿Número filas matriz A (máx. %d)?: ", FIL);
     scanf("%d", &filA);
   } while ((filA <=0) || (filA > FIL));


/* Se lee el número de columnas de la primera matriz (A) ------ */
  do
   { printf("¿Número columnas matriz A (máx. %d)?: ", COL);
     scanf("%d", &colA);
   } while ((colA <=0) || (colA > COL));


/* filas segunda = columnas primera  -------------------------- */
  filB = colA;


/* Se lee el número de columnas de la segunda matriz (B) ------ */
  do
  { printf("¿Número columnas matriz B (máx. %d)?: ", COL);
    scanf("%d", &colB);
  } while ((colB <=0) || (colB > COL));


/* Se introducen desde teclado las dos matrices A y B --------- */
/* Se solicitan las matrices por filas                --------- */

  printf("\nIntroduzca la matriz A:\n");
  for (f = 0; f < filA; f++)
    for (c = 0; c < colA; c++)
	 { printf("Elemento (%d, %d)=> ", f+1, c+1);
	   scanf("%ld", &matrizA[f][c]);
         }
  

  printf("\n\nIntroduzca la matriz B:\n");
  for (f = 0; f < filB; f++)
    for (c = 0; c < colB; c++)
	 { printf("Elemento (%d, %d)=> ", f+1, c+1);
	   scanf("%ld", &matrizB[f][c]);
         }

/* ------------------------------------------------
   Tamaño de la matriz producto:
       Número de filas de la de la primera matriz.
       Número de columnas de la segunda matriz.
   ------------------------------------------------ */
  filP = filA;
  colP = colB;

/* Se calcula la matriz producto ------------------------------ */
  for (f = 0; f < filA; f++)
    for (c = 0; c < colB; c++)
    { matrizP[f][c] = 0;
      for (j = 0; j < colA; j++)
          matrizP[f][c] = matrizP[f][c] + (matrizA[f][j] * matrizB[j][c]);
    }

/* Se presentan matrices introducidas y la matriz producto ---- */
/* Se escriben las matrices por filas                      ---- */

  printf("\nMatriz A:\n");
  for (f = 0; f < filA; f++)
  {
    for (c = 0; c < colA; c++)
	  printf("%5ld", matrizA[f][c]);
    printf("\n");
  }

  printf("\nMatriz B:\n");
  for (f = 0; f < filB; f++)
  {
    for (c = 0; c < colB; c++)
	  printf("%5ld", matrizB[f][c]);
    printf("\n");
  }

  printf("\nMatriz Producto:\n");
  for (f = 0; f < filP; f++)
  {
    for (c = 0; c < colP; c++)
	  printf("%5ld", matrizP[f][c]);
    printf("\n");
  }

  printf ("\n\n");
  system ("pause");
  return 0;

} /* Fin del main */
