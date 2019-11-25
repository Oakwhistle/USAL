#include <stdio.h>
#include <stdlib.h>


/* Fuente: SCANF.C
   Programa: Especificadores de formato de la función scanf().
   Descripción: Muestra el comportamiento de la función scanf() en C.
*/


int main(void)
{

     float valor;    /* Un número real introducido por el usuario.   */
     int   numero;   /* Un número entero introducido por el usuario. */
     float num_real; /* Un número real introducido por el usuario.   */


     printf("\nIntroduzca un número real => ");
     scanf("%f", &valor);
     printf("El valor es => %f\n", valor);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un número en octal => ");
     scanf("%o", &numero);
     printf("El valor en decimal es => %d\n", numero);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un número en hexa con mayúsculas => ");
     scanf("%X", &numero);
     printf("El valor en decimal es => %d\n", numero);
     printf("El valor en octal   es => %o\n", numero);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un número real en notación E (xxEyy) => ");
     scanf("%E", &num_real);
     printf("El valor del real         => %f\n", num_real);
     printf("El valor en notación e es => %e\n", num_real);

     system ("pause");
     return 0;
}

