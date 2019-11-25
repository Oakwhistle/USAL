#include <stdio.h>
#include <stdlib.h>

/* Fuente: PRINTF.C
   Programa: Especificadores de formato de la función printf().
   Descripción: Muestra el comportamiento de los especificadores de formato
   de la función printf() en C.
*/


int main(void)
{
     printf("El valor %d usando el tipo de campo d es %d. \n", 12, 12);
     printf("El valor %i usando el tipo de campo i es %i. \n", 12, 12);
     printf("El valor %d usando el tipo de campo u es %u. \n", 12, 12);
     printf("El valor %d usando el tipo de campo o es %o. \n", 12, 12);
     printf("El valor %d usando el tipo de campo x es %x. \n", 12, 12);
     printf("El valor %d usando el tipo de campo X es %X. \n", 12, 12);

     printf("El valor %f usando el tipo de campo f es %f. \n", 12.5, 12.5);
     printf("El valor %f usando el tipo de campo e es %e. \n", 12.5, 12.5);
     printf("El valor %f usando el tipo de campo E es %E. \n", 12.5, 12.5);
     printf("El valor %f usando el tipo de campo g es %g. \n", 12.5, 12.5);
     printf("El valor %f usando el tipo de campo G es %G. \n", 12.5, 12.5);

     printf("El valor %d usando el tipo de campo c es %c. \n", 65, 65);
     printf("El valor %d usando el tipo de campo c es %c. \n", 165, 165);
     printf("El valor %d usando el tipo de campo c es %c. \n", 92, 92);
     printf("El caracter %c usando el tipo de campo c es %c. \n", 'B', 'B');

     printf("La cadena %s usando el tipo de campo s es %s. \n","Hola", "Hola");
     printf("El símbolo %% se imprime simplemente %%. \n");
     
     system ("pause");
     return 0;

}
