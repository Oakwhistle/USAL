/* Fuente: vector.c
   Programa CALCULO VECTORIAL BASICO
   Descripci�n: Pide un vector tridimensional por pantalla y calcula
   su m�dulo, la media de sus componentes y el vector unitario
   en la misma direcci�n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

/* Declaraciones */
  float v1, v2, v3;     /* Tres componentes del vector */
  float modulo, media;
  float u1, u2, u3;     /* Tres componentes del vector unitario */


/* Presentaci�n */
  printf("C�lculo vectorial b�sico\n");
  printf("========================\n\n");
  printf("Pide un vector de trimimensional por pantalla y calcula:\n");
  printf("     - su m�dulo\n");
  printf("     - la media de sus componentes\n");
  printf("     - el vector unitario en la misma direcci�n\n");
  printf("\n\n");

/* Petici�n de datos */
  printf("Introduzca la primera componente del vector: ");
  scanf("%f", &v1);
  printf("Introduzca la segunda componente del vector: ");
  scanf("%f", &v2);
  printf("Introduzca la tercera componente del vector: ");
  scanf("%f", &v3);


 
/* C�lculos */
   /* M�dulo
   *	         -----------------
   *	        /	  2     2     2
   *	    \  /	v1  + v2  + v3
   *   m =   \/
   *
   */

   modulo = sqrt (v1*v1 + v2*v2 + v3*v3);


   /* Media de sus componentes */

   media = (v1 + v2 + v3) / 3;


   /* Vector unitario en la misma direcci�n
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
   printf("M�dulo...........................: %g\n", modulo);
   printf("Media de sus componentes.........: %g\n", media);
   printf("Vector unitario en su direcci�n..: (%g, %g, %g)\n", u1, u2, u3);

   printf("\n\n");
   system ("pause");
   return 0;
}
