/* Fuente: COMPLEJO.C
   Programa: ARITMÉTICA BASICA DE COMPLEJOS
   Descripción: Pide dos números complejos por pantalla y calcula
   el complejo suma, el complejo producto y el módulo de
   ambos complejos
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

/* Declaraciones */
  float c1_r, c1_i;        /* Dos componentes del primer complejo  */
  float c2_r, c2_i;        /* Dos componentes del segundo complejo */

  float cs_r, cs_i;        /* Dos componentes complejo suma        */
  float cp_r, cp_i;        /* Dos componentes complejo producto    */
  float modulo1, modulo2;  /* Módulos de ambos complejos           */

 
/* Presentación */
  printf("Aritmética básica de complejos\n");
  printf("===============================\n\n");
  printf("Pide dos números complejos por pantalla y calcula:\n");
  printf("     - el complejo suma\n");
  printf("     - el complejo producto\n");
  printf("     - el módulo de cada uno de ellos\n");
  printf("\n\n");


/* Petición de datos */
  printf("Introduzca el primer complejo (a, bi).\n");
  printf("Parte real a: ");
  scanf("%f", &c1_r);
  printf("Parte imaginaria b: ");
  scanf("%f", &c1_i);

  printf("\nIntroduzca el segundo complejo (c, di).\n");
  printf("Parte real c: ");
  scanf("%f", &c2_r);
  printf("Parte imaginaria d: ");
  scanf("%f", &c2_i);

/* Cálculos */
   /* Complejo suma
   *
   *  (sr, si) = (a + c, b + d)
   */

   cs_r = c1_r + c2_r;
   cs_i = c1_i + c2_i;


   /* Complejo producto
   *
   *  (pr, pi) = (ac - bd, ad + bc)
   */

   cp_r = (c1_r * c2_r - c1_i * c2_i);
   cp_i = (c1_r * c2_i + c1_i * c2_r);


  
 
  /* Módulos de ambos complejos
   * 
   *	                     ----------
   *	                    / 2    2
   *	                \  / a  + b
   *   modulo (a, b) =   \/
   *
   */

   modulo1 = sqrt(c1_r * c1_r + c1_i * c1_i);
   modulo2 = sqrt(c2_r * c2_r + c2_i * c2_i);


/* Resultados */
   printf("\n\n");
   printf("Números complejos introducidos\n");
   printf("    Complejo 1.....................: (%g, %g)\n", c1_r, c1_i);
   printf("    Complejo 2.....................: (%g, %g)\n", c2_r, c2_i);
   printf("\n");
   printf("Complejo suma......................: (%g, %g)\n", cs_r, cs_i);
   printf("Complejo producto..................: (%g, %g)\n", cp_r, cp_i);
   printf("Módulo complejo 1.................: %g\n", modulo1);
   printf("Módulo complejo 2.................: %g\n", modulo2);

   printf("\n\n");
   system ("pause");
   return 0;
}
