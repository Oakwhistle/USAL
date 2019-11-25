#include <stdio.h>
#include <stdlib.h>
/*

Programa: Formatos salida numeros double y long double.

Desarrollado por: Practicas de programacion.

Descripci¢n: Visualiza un numero double y long double en
	     varios formatos diferentes.


*/


int main(void)

{
   double       dv = 0.00000000000813;
   long double ldv = 1.25E+120;


   printf("Variable dv con %%f  = %f  \n", dv); // Ojo, s¢lo 6 decimales
   printf("Variable dv con %%e  = %e  \n", dv);
   printf("Variable dv con %%g  = %g  \n", dv);
   printf("Variable dv con %%lf = %lf \n", dv); // Ojo, s¢lo 6 decimales.
   printf("Variable dv con %%le = %le \n", dv);
   printf("Variable dv con %%lg = %lg \n", dv);
   printf("Variable dv con %%Lf = %Lf \n", dv); // Ojo, s¢lo 6 decimales. 
   
   // Ojo, en el compilador Dev-C++ entiende %, %le y %Lg (en otros compiladores hay que utilizar obligatoriamente l.


   printf("\n");
   printf("Variable ldv con %%f     = %f     \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%E     = %E     \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%G     = %G     \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%lf    = %lf    \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%lE    = %lE    \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%lG    = %lG    \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%.10lE = %.10lE \n", ldv); // Ojo a la salida.

   printf("\n");
   printf("Variable ldv con %%Lf      = %Lf     \n", ldv);
   printf("Variable ldv con %%.15Lf   = %.15Lf  \n", ldv);
   printf("Variable ldv con %%LE      = %LE     \n", ldv);
   printf("Variable ldv con %%10.10LE = %.10LE  \n", ldv);
   printf("Variable ldv con %%LG      = %LG     \n", ldv);


   /* No es lo mismo Le que le */
   /* Parece que para long double debe utilizarse L */


  	   
  system ("pause");
  return 0;


}

