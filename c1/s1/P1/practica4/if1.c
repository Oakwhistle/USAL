#include <stdio.h>
#include <stdlib.h>

/* IF1.C */
/*
Programa: Ejemplo utilizacion sentencia IF.

Desarrollado por: Laboratorio de programacion.

Descripción: 	Presenta un mensaje si el número introducido es mayor que cero.
	     	    Pide un segundo número y presenta un mensaje sólo si los dos
         		números introducidos son mayores que cero.
*/

int main(void)
 {
     float numero1, numero2;

     printf("\n");

     printf("Introduzca un numero1 ==> ");
     scanf("%f",&numero1);

     if (numero1 > 0)
	             puts("El numero introducido es mayor que cero.");

     printf("Numero introducido: %6.4f\n", numero1);

     printf("Introduzca un segundo número ==> ");
     scanf("%f",&numero2);

     if ((numero1 > 0) && (numero2 > 0))
	              puts("Los dos numeros introducidos son mayores que cero.");

     printf("Segundo numero introducido: %6.4f\n", numero2);

     printf("\n");
     
     system ("pause");
     return 0;

 }
