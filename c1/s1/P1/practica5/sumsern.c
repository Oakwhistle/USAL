#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Fuente: SUMSERN.C
   Programa: SUMA SERIE HASTA UN NUMERO DE TERMINO DADO
   Descripci�n: Calcula la suma de la serie
                    1/2   2/3   3/4   4/5   ...   N /(N+1)
   hasta el t�rmino N que se introduce por teclado. 
   El valor de N debe estar comprendido entre (0 < N <= 60000)
*/
 
int main(void) {

/* Declaraciones */
  const unsigned int LIMTERM_INF = 0, LIMTERM_SUP = 60000;

  unsigned int limite_term;   /* Entrada: Valor l�mite N               */
  char  terminar;             /* Entrada: Para pedir al usuario terminar o no */
  unsigned int nterm;         /* C�lculo: N�mero de t�rminos se van sumando   */
  float suma;                 /* Salida : Acumulador suma de la serie         */

/* Presentaci�n */
  printf("Suma series\n");
  printf("===========\n");
  printf("El programa calcula la suma de la serie\n"
         "\n           1/2   2/3   3/4   4/5   ...   N /(N+1) \n\n"
         "hasta el t�rmino N que se introduce por teclado.\n"
         "El valor de N debe estar comprendido entre (%u < N <= %u)\n\n",
          LIMTERM_INF, LIMTERM_SUP);

do  /*-- 1 --*/
  { 
    /* Petici�n y validaci�n de datos */

      do
      {   printf("\nValor de N?: ");
          scanf("%u", &limite_term);
      } while (limite_term <= LIMTERM_INF || limite_term > LIMTERM_SUP);

    /* C�lculos */
      suma = 0;
      for (nterm = 1; nterm <= limite_term; nterm++)
           suma += (float) nterm / (nterm + 1);
  
    /* La divisi�n de enteros en C no saca decimales, por ello utilizamos
       el operador de molde o cast sobre el numerador de la divisi�n */ 



    /* Resultados */
      printf("\nSumando %u t�rminos, la suma de la serie vale %g",
              limite_term, suma);

    /* Petici�n de una nueva ejecuci�n */
      do
      {   printf("\n\nSalir del programa (S/N)?: "); 
          fflush(stdin);  /* Vaciado del buffer de teclado */
          scanf("%c", &terminar);
          terminar = toupper(terminar);
      } while (terminar != 'S' && terminar != 'N');

      system("cls");  /* Borrado de la pantalla */

  } while (toupper(terminar) != 'S'); /*-- cierre de 1 --*/

  return 0;
  
} /* Final del programa */


/* ==============================================>
   La funci�n toupper(), cuyo prototipo es int toupper(int c) y su archivo de
   cabecera ctype.h, devuelve convertido a su correspondiente may�scula el
   car�cter recibido como argumento.
   En caso de que el argumento ya est� en may�sculas o no sea un car�cter
   alfab�tico, devolver� el mismo car�cter del argumento.
   ============================================== */
