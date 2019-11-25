#include <stdio.h>
#include <stdlib.h>
#define  MERCURIO 0.38
#define  VENUS    0.78
#define  TIERRA   1.00
#define  MARTE    0.39
#define  JUPITER  2.65
#define  SATURNO  1.17
#define  URANO    1.05
#define  NEPTUNO  1.23
#define  PLUTON   0.05


/* Fuente: GRAVEDAD.C
   Programa: GRAVEDAD RELATIVA EN EL SISTEMA SOLAR.
   Descripción: Dado el peso se un objeto en la tierra (dato que se lee por teclado)
   se calcula el peso del mismo objeto en los restantes planetas del Sistema Solar.
*/


int main(void)
{
/*DECLARACIONES*/
   float peso;     /* Variable de entrada. Peso objeto en la Tierra */

/*CUERPO DEL PROGRAMA*/
   /* Presentación */
   printf("Pesos en los distintos planetas del Sistema Solar\n");
   printf("=================================================\n");

   /* Petición de datos */
   printf("Introduzca el peso de un objeto en la Tierra: ");
   scanf("%f", &peso);

   /* Cálculos y presentación de resultados */
   printf("\n\n");
   printf("Peso en la Tierra.....: %g\n", peso);
   printf("Peso en la Mercurio...: %g\n", peso * MERCURIO);
   printf("Peso en la Venus......: %g\n", peso * VENUS);
   printf("Peso en la Marte......: %g\n", peso * MARTE);
   printf("Peso en la Júpiter....: %g\n", peso * JUPITER);
   printf("Peso en la Saturno....: %g\n", peso * SATURNO);
   printf("Peso en la Urano......: %g\n", peso * URANO);
   printf("Peso en la Neptuno....: %g\n", peso * NEPTUNO);
   printf("Peso en la Plutón.....: %g\n", peso * PLUTON);
 
   system ("pause");
   return 0;

}

