#include <stdio.h>
#include <stdlib.h>

/*Programa: Formatos salida n£meros reales.
Desarrollado por: Pr cticas de programaci¢n.
Descripci¢n: Visualiza un n£mero real en varios formatos diferentes.*/

int main(void)

{
   float fv  = 1026.75;
   float fv1 = 1.2;
   float fv2 = 1024.5;

   long double ldv = 11.23;

   printf("Variable fv con %%f  = %f  \n", fv);
   printf("Variable fv con %%e  = %e  \n", fv);
   printf("Variable fv con %%E  = %E  \n", fv);
   printf("Variable fv con %%g  = %g  \n", fv);
   printf("Variable fv con %%G  = %G  \n", fv);
   printf("Variable fv con %%lf = %lf \n", fv);
   printf("Variable fv con %%le = %le \n", fv);
   printf("Variable fv con %%lg = %lg \n", fv);
   printf("Variable fv con %%Lf = %Lf \n", fv); // Ojo a la salida en algunos compiladores no entiende la L
   printf("Variable fv con %%Le = %Le \n", fv);
   printf("Variable fv con %%Lg = %Lg \n", fv);

   printf("\n");
   printf("Variable fv1 con %%f    = %f    \n", fv1);
   printf("Variable fv2 con %%f    = %f    \n", fv2);
   printf("Variable fv1 con %%.3f  = %.3f  \n", fv1);
   printf("Variable fv2 con %%.3f  = %.3f  \n", fv2);
   printf("Variable fv1 con %%8.2f = %8.2f \n", fv1);
   printf("Variable fv2 con %%8.2f = %8.2f \n", fv2);

   printf("\n");
   printf("Variable fv1 con %%e     = %e     \n", fv1);
   printf("Variable fv2 con %%e     = %e     \n", fv2);
   printf("Variable fv1 con %%.3e   = %.3e   \n", fv1);
   printf("Variable fv2 con %%.3e   = %.3e   \n", fv2);
   printf("Variable fv1 con %%10.2E = %10.2E \n", fv1);
   printf("Variable fv2 con %%10.2E = %10.2E \n", fv2);

   printf("\n");
   printf("Variable ldv con %%e    = %e    \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%g    = %g    \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%le   = %le   \n", ldv); // Ojo a la salida.
   printf("Variable ldv con %%Le   = %Le   \n", ldv); // Ojo a la salida.

   /* En algunos compiladores es lo mismo L que l */
   /* En muchos compiladores para float hay que utilizar l, aquí vemos que entiende L o l*/
   /* En Dev-C++ no se sabe como imprimir un long double. En general para long double debe utilizarse L. Si tienes Turbo C pruebalo*/
     	   
   system ("pause");
   return 0;
}








