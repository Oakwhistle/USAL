#include <stdio.h>
#include <stdlib.h>


/* Fuente: SCANF.C
   Programa: Especificadores de formato de la funci�n scanf().
   Descripci�n: Muestra el comportamiento de la funci�n scanf() en C.
*/


int main(void)
{

     float valor;    /* Un n�mero real introducido por el usuario.   */
     int   numero;   /* Un n�mero entero introducido por el usuario. */
     float num_real; /* Un n�mero real introducido por el usuario.   */


     printf("\nIntroduzca un n�mero real => ");
     scanf("%f", &valor);
     printf("El valor es => %f\n", valor);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un n�mero en octal => ");
     scanf("%o", &numero);
     printf("El valor en decimal es => %d\n", numero);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un n�mero en hexa con may�sculas => ");
     scanf("%X", &numero);
     printf("El valor en decimal es => %d\n", numero);
     printf("El valor en octal   es => %o\n", numero);

 /* --------------------------------------------------------------- */

     printf("\nIntroduzca un n�mero real en notaci�n E (xxEyy) => ");
     scanf("%E", &num_real);
     printf("El valor del real         => %f\n", num_real);
     printf("El valor en notaci�n e es => %e\n", num_real);

     system ("pause");
     return 0;
}

