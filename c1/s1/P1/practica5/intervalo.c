#include <stdio.h>
#include <stdlib.h>
#define LIMINF 0
#define LIMSUP 30000

/* Fuente: INTERV.C
   Programa: SUMAS DE INTERVALOS DE N�MEROS
   Descripci�n: Pide por pantalla tres n�meros enteros. Los dos primeros definen
   un intervalo.
   El programa calcula cuantos n�meros m�ltiplos del tercero existen dentro del
   intervalo definido, as� como la suma de todos ellos.
*/

int main(void) {

/* Declaraciones */
  int limite1, limite2, num;  /* Variables de entrada */
  int temp, i;                /* Variables auxiliares */
  float suma = 0; 
  int cuantos = 0;

/* Presentaci�n */

  printf("Sumas en intervalos de enteros\n");
  printf("==============================\n\n");
  printf("Introduzca dos n�meros enteros entre %d y %d que definir�n "    
         "un intervalo.\n", LIMINF, LIMSUP);
  printf("Introduzca un tercer entero y el programa calcular� cuantos " 
         "m�tiplos de �ste\n");
  printf("hay en dicho intervalo, as� como la suma de ellos.\n\n");


/* Petici�n y validaci�n de datos */
  do
  {   printf("L�mite inferior (entre %d y %d)?: ", LIMINF, LIMSUP);
      scanf("%d", &limite1);
  } while (limite1 < LIMINF || limite1 > LIMSUP);

  do
  {   printf("L�mite superior (entre %d y %d)?: ", LIMINF, LIMSUP);
      scanf("%d", &limite2);
  } while (limite2 < LIMINF || limite2 > LIMSUP);

  /* Intercambiamos si los l�mites se han introducido al rev�s */
  if  (limite2 < limite1)
     { temp = limite1;
       limite1 = limite2;
       limite2 = temp;
     }
   
  do
  {   printf("N�mero a investigar (entre %d y %d)?: ", limite1, limite2);
      scanf("%d", &num);
  } while (num < limite1 || num > limite2);

 
/* C�lculos y resultados */
  printf("\nN�meros m�ltiplos de %d en el intervalo [%d, %d]:\n",
          num, limite1, limite2);

  for (i = limite1; i <= limite2; i++)
       if ( !(i % num) )
         { cuantos++;
           suma += i;
           printf("%8d", i);
         }

  printf("\n");
  printf("N�meros presentados %d\n", cuantos);
  printf("Valor de su suma %g\n", suma);
 
  printf("\n");
  system ("pause");
  return 0;

}

