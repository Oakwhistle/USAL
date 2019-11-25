
#include <stdio.h>
#include <stdlib.h>

/*IF_ELSE1.C */

/*
Programa: Ejemplo utilización sentencia IF ELSE.

Desarrollado por: Laboratorio de programacion.

Descripción:	Pide un número por teclado. Presenta un mensaje si
			    es positivo y otro si es cero o negativo.
*/

int main(void)
 {
     float aceleracion;

     printf("\n");
     printf("Introduzca el valor de la aceleracion ==> ");
     scanf("%f",&aceleracion);

     if (aceleracion > 0)
     
          puts("La velocidad aumenta.");
          
     else
          puts("La velocidad se mantiene o disminuye.");

     printf("Valor de la aceleracion es: %6.4f\n", aceleracion);
     printf("\n");

     system ("pause");
     return 0;

 }
