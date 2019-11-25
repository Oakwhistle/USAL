#include <stdio.h>
#include <stdlib.h>

/*IF2.C */
/*
Programa: Ejemplo utilizacion sentencia IF con sentencia compuesta.

Descripcion:	Solo si el primer numero que se pide por teclado es
			    positivo se pide un segundo. En caso contrario, el 
			    programa termina sin pedir un segundo numero. */

int main(void)
 {
     float numero1, numero2;

         printf("Introduzca un numero ==> ");
     scanf("%f",&numero1);

     if (numero1 > 0)
	{
	 printf("El numero %6.4f introducido es positivo.\n", numero1);
	 printf("Introduzca un segundo numero ==> ");
	 scanf("%f",&numero2);
	 printf("Segundo numero introducido: %6.4f\n", numero2);
	 if ((numero1 > 0) && (numero2 > 0))
	              puts("Los dos numeros introducidos son positivos.");
	}
     printf("\n");
     
     system ("pause");
     return 0;

 }
