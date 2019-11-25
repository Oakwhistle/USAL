#include <stdio.h>
#include <stdlib.h>
#define LIMINF 0
#define LIMSUP 30000

/* Fuente: INTERV.C
   Programa: SUMAS DE INTERVALOS DE NÚMEROS
   Descripción: Pide por pantalla tres números enteros. Los dos primeros definen
   un intervalo.
   El programa calcula cuantos números múltiplos del tercero existen dentro del
   intervalo definido, así como la suma de todos ellos.
*/

int main(void) {

/* Declaraciones */
  int limite1, limite2, num;  /* Variables de entrada */
  int temp, i;                /* Variables auxiliares */
  float suma = 0; 
  int cuantos = 0;

/* Presentación */

  printf("Sumas en intervalos de enteros\n");
  printf("==============================\n\n");
  printf("Introduzca dos números enteros entre %d y %d que definirán "    
         "un intervalo.\n", LIMINF, LIMSUP);
  printf("Introduzca un tercer entero y el programa calculará cuantos " 
         "mútiplos de éste\n");
  printf("hay en dicho intervalo, así como la suma de ellos.\n\n");


/* Petición y validación de datos */
  do
  {   printf("Límite inferior (entre %d y %d)?: ", LIMINF, LIMSUP);
      scanf("%d", &limite1);
  } while (limite1 < LIMINF || limite1 > LIMSUP);

  do
  {   printf("Límite superior (entre %d y %d)?: ", LIMINF, LIMSUP);
      scanf("%d", &limite2);
  } while (limite2 < LIMINF || limite2 > LIMSUP);

  /* Intercambiamos si los límites se han introducido al revés */
  if  (limite2 < limite1)
     { temp = limite1;
       limite1 = limite2;
       limite2 = temp;
     }
   
  do
  {   printf("Número a investigar (entre %d y %d)?: ", limite1, limite2);
      scanf("%d", &num);
  } while (num < limite1 || num > limite2);

 
/* Cálculos y resultados */
  printf("\nNúmeros múltiplos de %d en el intervalo [%d, %d]:\n",
          num, limite1, limite2);

  for (i = limite1; i <= limite2; i++)
       if ( !(i % num) )
         { cuantos++;
           suma += i;
           printf("%8d", i);
         }

  printf("\n");
  printf("Números presentados %d\n", cuantos);
  printf("Valor de su suma %g\n", suma);
 
  printf("\n");
  system ("pause");
  return 0;

}

