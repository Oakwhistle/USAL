/* Fuente: PSILLA.C
   Programa: PUNTO DE SILLA
   Descripción: Localiza un punto de silla en una matriz.
   Se dice que una matriz tiene un punto de silla si algún elemento de
   la matriz es el menor valor de su fila, y a la vez el mayor de su columna.

   La función puntodesilla() devuelve el primer punto de silla que se encuentre en la matriz

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
   void puntodesilla     (long (*)[COL], int, int, int *, int *);

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
     puts ("Programa para calcular un punto de silla de una matriz");
     puts ("------------------------------------------------------");
     puts ("");
}

   
/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     long matrizA[FIL][COL];  /* matriz                              */
     int filA, colA;          /* filas, columnas efectivas matriz    */
     int ps_f, ps_c;          /* coordenadas del punto de silla      */
   
   /* Se lee del número de filas y columnas de la primera matriz --- */
     do
      { printf("¿Número filas matriz (máx. %d)?: ", FIL);
        scanf("%d", &filA);
      } while ((filA <=0) || (filA > FIL));
   
     do
      { printf("¿Número columnas matriz (máx. %d)?: ", COL);
        scanf("%d", &colA);
      } while ((colA <=0) || (colA > COL));
   
   
     printf("Introduzca la matriz:\n");
     leer_matriz(matrizA, filA, colA);
   
     puntodesilla (matrizA, filA, colA, &ps_f, &ps_c);
   
     printf("\nMatriz:\n");
     escribir_matriz(matrizA, filA, colA);
   
     if (ps_f != -1 && ps_c != -1)
          printf("Punto de silla en Elemento [%2d][%2d] con valor %6ld \n",
                  ps_f+1, ps_c+1, matrizA[ps_f][ps_c]);
     else printf("La matriz no tiene puntos de silla\n");
   
}

/* ---------------------------------------------------------- */
void puntodesilla  (long (*ma)[COL], int filas, int columnas, int *ff, int *cc) {
/* ---------------------------------------------------------- */
     int f, f2, c; /* Para recorrido matriz                        */
     int menorf;   /* Determina el menor elemento de la fila       */
     int cm;       /* Determina la columna de menorf               */
     int flag_ps;  /* Flag para determinar si el punto es silla    */
   
     *ff = *cc = -1;
   
     for (f = 0;
          f < filas && (*ff == -1 && *cc == -1); /* Condición para salir al encontrar el primer punto de silla */
          f++)  /* Recorrido por filas */
     {
        menorf = ma[f][0];
        cm     = 0; 
        for (c = 1; c < columnas; c++)
          if (menorf > ma[f][c])
            { menorf = ma[f][c];
              cm     = c; 
            }
         /* -----> Ha quedado determinado el menor de la fila f */
         /* -----> La columna del menorf es mc                  */
             
         /* -----> Recorremos la columna cm hasta que encontrar */
         /* -----> un valor mayor que menorf. Si fuera así, el  */
         /* -----> el punto menorf en la fila f, no es de silla */
         flag_ps = 1;
         f2      = 0;
         while (flag_ps && f2 < filas)
           {  flag_ps = menorf >= ma[f2][cm];
              f2++;
           }
   
         if (flag_ps)
           {   *ff = f;
               *cc = cm;
           }   /* ---> Si el punto de la fila f es de silla, */ 
               /* ---> su columna es cm                      */
     }
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

