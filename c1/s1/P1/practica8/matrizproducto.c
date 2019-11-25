/* Fuente: MATRIZP.C
   Programa: PRODUCTO MATRICIAL
   Descripción: Realiza el producto de 2 matrices de hasta 25 x 25

*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define FIL  25
#define COL  25

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
void presentacion     (void);
void modulo_principal (void);
void leer_matriz      (long (*)[COL], int, int);
void escribir_matriz  (long (*)[COL], int, int);
void producto_matriz  (long (*)[COL], int, int,
		       long (*)[COL], int,
		       long (*)[COL]);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     do
       { printf("\n");
	 modulo_principal();
	 printf("\n");
	 do
	   { printf("¿Otra ejecución (S/N)?: ");
	     fflush(stdin); /* Limpia el buffer de teclado */
	     respuesta = toupper(getchar());
	   }
	 while (respuesta != 'S' && respuesta != 'N');

       }
     while (respuesta != 'N');
     
     return 0;

} /* Fin del main */


/* ---------------------------------------------------------- */
   void presentacion(void) {
/* ---------------------------------------------------------- */
     puts ("Programa para realizar el producto de dos matrices de enteros");
     puts ("-------------------------------------------------------------");
}


/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     long matrizA[FIL][COL];      /* matriz a                      */
     long matrizB[FIL][COL];      /* matriz b                      */
     long matrizP[FIL][COL];      /* matriz producto               */
   
     int filA, colA;  /* filas, columnas efectivas matriz a        */
     int filB, colB;  /* filas, columnas efectivas matriz b        */
     int filP, colP;  /* filas, columnas efectivas matriz producto */
   
     int f, c;        /* índices para recorrido matriz             */
     int j;
   
   /* Se lee del número de filas de la primera matriz (A) -------- */
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
     printf("Introduzca la matriz A:\n");
     leer_matriz(matrizA, filA, colA);
   
     printf("Introduzca la matriz B:\n");
     leer_matriz(matrizB, filB, colB);
   
   /* ------------------------------------------------
      Tamaño de la matriz producto:
          Número de filas de la de la primera matriz.
          Número de columnas de la segunda matriz.
      ------------------------------------------------ */
     filP = filA;
     colP = colB;
   
   /* Se calcula la matriz producto ------------------------------ */
     producto_matriz (matrizA, filA, colA, matrizB, colB, matrizP);
   
   /* Se presentan matrices introducidas y la matriz producto ---- */
     printf("\nMatriz A:\n");
     escribir_matriz(matrizA, filA, colA);
     printf("\nMatriz B:\n");
     escribir_matriz(matrizB, filB, colB);
     printf("\nMatriz Producto:\n");
     escribir_matriz(matrizP, filP, colP);
}


/* ---------------------------------------------------------- */
   void leer_matriz (long (*ma)[COL], int filas, int columnas) {
/* ---------------------------------------------------------- */
/* ------- Se solicita la matriz por filas ----------- */
     int f,c;
     for (f = 0; f < filas; f++)
       for (c = 0; c < columnas; c++)
   	 { printf("Elemento (%d, %d)=> ", f+1, c+1);
   	   scanf("%ld", &ma[f][c]);
          }
}


/* ---------------------------------------------------------- */
void escribir_matriz (long (*ma)[COL], int filas, int columnas) {
/* ---------------------------------------------------------- */
/* ------- Se escribe la matriz por filas ------------ */
     int f,c;
     for (f = 0; f < filas; f++)
     {
       for (c = 0; c < columnas; c++)
   	  printf("%5ld", ma[f][c]);
       printf("\n");
     }
}


/* ---------------------------------------------------------- */
void producto_matriz (long (*ma)[COL], int f_a, int c_a,
		      long (*mb)[COL], int c_b,
		      long (*mp)[COL] ) {
/* ---------------------------------------------------------- */
     int f,c,j;
     for (f = 0; f < f_a; f++)
       for (c = 0; c < c_b; c++)
       { mp[f][c] = 0;
         for (j = 0; j < c_a; j++)
             mp[f][c] = mp[f][c] + (ma[f][j] * mb[j][c]);
       }
}
