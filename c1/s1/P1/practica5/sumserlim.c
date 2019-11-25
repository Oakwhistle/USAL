#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Fuente: SUMSELIM.C
   Programa: SUMA SERIE HASTA ALCANZAR SU SUMA UN LIMITE
   Descripción: Calcula cuantos términos deben sumarse de la serie
                  1/2   2/3   3/4   4/5   ...   N /(N+1)
   para que su suma supere el valor límite S que se
   introduce por teclado. 
   El valor de S debe estar comprendido entre (0 < S <= 10000.8)
*/

int main(void) {
  const float LIMSUM_INF = 0.0F;
  const float LIMSUM_SUP = 10000.8F;

  float limite_suma;   /* Entrada: Valor límite S                      */
  char  terminar;      /* Entrada: Para pedir al usuario terminar o no */
  float suma;          /* Cálculo: Acumulador suma de la serie         */
  int   nterm;         /* Salida : Número de términos se van sumando   */

/* Presentación del programa */
  printf("Suma series\n");
  printf("===========\n");
  printf("El programa calcula cuantos términos deben sumarse de la serie\n"
         "\n           1/2   2/3   3/4   4/5   ...   N /(N+1) \n\n"
         "para que su suma supere el valor límite S que se introduce por "            
         "teclado.\n"
         "El valor de S debe estar comprendido entre (%g < S <= %g)\n\n",
          LIMSUM_INF, LIMSUM_SUP);

  do  /*--1--*/
  { 
    /* Petición y validación de datos */
      do
      {   printf("\nValor de S?: ");
          scanf("%f", &limite_suma);
      } while (limite_suma <= LIMSUM_INF || limite_suma > LIMSUM_SUP);


    /* Cálculos */
      suma = 0;
      nterm = 0;
       while (suma <= limite_suma)
      {  nterm++;
         suma += (float) nterm / (nterm + 1);
      }

    /* La división de enteros en C no saca decimales, por ello utilizamos
       el operador de molde o cast sobre el numerador de la división */ 

    /* Resultados */
      printf("\nSumando %d términos, la suma de la serie vale %g",
              nterm, suma);
      
      do
      {   printf("\n\nSalir del programa (S/N)?: "); 
          fflush(stdin);  /* Vaciado del buffer de teclado */
          scanf("%c", &terminar);
          terminar = toupper(terminar);
      } while (terminar != 'S' && terminar != 'N');

      system("cls");  /* Borrado de la pantalla */

  } while (terminar != 'S'); /*--cierre de 1--*/

  return 0;
}


/* ===========================================================>
   Este mismo algoritmo podría haberse codificado con un bucle do while
   también controlado por acumulador.
   En ese caso, el bucle principal del programa se escribiría de la
   siguiente forma:
      suma = 0;
      nterm = 0;
      do 
      {  nterm++;
         suma += (float) nterm / (nterm + 1);
      } while (suma <= limite_suma)

   =========================================================== */
