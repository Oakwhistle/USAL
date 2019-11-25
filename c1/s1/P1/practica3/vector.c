/* Fuente: vector.c
   Programa CALCULO VECTORIAL BASICO
   Descripción: Pide un vector tridimensional por pantalla y calcula
   su módulo, la media de sus componentes y el vector unitario
   en la misma dirección.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

/* Declaraciones */
  float v1, v2, v3;     /* Tres componentes del vector */
  float modulo, media;
  float u1, u2, u3;     /* Tres componentes del vector unitario */


/* Presentación */
  printf("Cálculo vectorial básico\n");
  printf("========================\n\n");
  printf("Pide un vector de trimimensional por pantalla y calcula:\n");
  printf("     - su módulo\n");
  printf("     - la media de sus componentes\n");
  printf("     - el vector unitario en la misma dirección\n");
  printf("\n\n");

/* Petición de datos */
  printf("Introduzca la primera componente del vector: ");
  scanf("%f", &v1);
  printf("Introduzca la segunda componente del vector: ");
  scanf("%f", &v2);
  printf("Introduzca la tercera componente del vector: ");
  scanf("%f", &v3);


 
/* Cálculos */
   /* Módulo
   *	         -----------------
   *	        /	  2     2     2
   *	    \  /	v1  + v2  + v3
   *   m =   \/
   *
   */

   modulo = sqrt (v1*v1 + v2*v2 + v3*v3);


   /* Media de sus componentes */

   media = (v1 + v2 + v3) / 3;


   /* Vector unitario en la misma dirección
   *
   *	    v1   v2   v3
   *	 ( ---, ---, --- )
   *	    m    m    m
   *
   */

   u1 = v1 / modulo;
   u2 = v2 / modulo;
   u3 = v3 / modulo;


/* Resultados */
   printf("\n\n");
   printf("Vector introducido...............: (%g, %g, %g)\n", v1, v2, v3);
   printf("Módulo...........................: %g\n", modulo);
   printf("Media de sus componentes.........: %g\n", media);
   printf("Vector unitario en su dirección..: (%g, %g, %g)\n", u1, u2, u3);

   printf("\n\n");
   system ("pause");
   return 0;
}
