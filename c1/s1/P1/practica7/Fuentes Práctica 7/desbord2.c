#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* Fuente: DESBORD2.C
   Programa: DESBORDAMIENTO DE INDICES EN MATRICES UNIDIMENSIONALES.
   Descripción: Las matrices están formadas por posiciones contiguas de memoria,
   correspondiendo el primer elemento (mat[0]) a la posición de memoria más baja.

   No existe comprobación de límites en ejecución. Es decir si la matriz
   tiene TAM elementos, es posible seguir escribiendo valores por encima del
   índice TAM-1, o por debajo del índice 0, sin que esto produzca un error de 
   ejecución. Lo que estará ocurriendo es que estamos sobreescribiendo sobre las
   memoria de las variables declaradas en las posiciones anteriores o siguientes
   a la matriz. Algo siempre "muy peligroso", salvo que se busque intencionadamente.

   Es un programa similar al fuente DESBORDA.C pero en este se añade la presentación
   de las direcciones de las variables declaradas, para comprobar su posición contigua
   en memoria. 
*/

int main(void) {
    int x = 255, mat[TAM],  y = 256;
    int i;

    printf("\n");

 /* Iniciamos la matriz unidimensional "mat": A cada posición le damos    */
 /* el valor de su índice: mat[0] <-- 0, mat[1] <-- 1, ... mat[5] <-- 5   */
 /* Mostramos posteriormente el valor de sus posiciones.                  */

    printf("Declaración de constantes:\n");
    printf("TAM=%d\n", TAM);
    printf("Declaración de variables:\n");
    printf("int x = %d, mat[TAM],  y = %d \n", x, y);
    printf("\n");
    printf("Damos valores a la matriz mat.\n");
    printf("Cada posición tendrá el valor de su índice.\n\n");
    printf("Contenido de la matriz mat y sus variables contiguas en memoria.\n");

    for(i=0; i <= TAM-1; ++i)
	mat[i] = i;

    printf("dirección %p - x      = %d\n", &x, x);

    for(i=TAM-1; i >=0; --i)
       printf("dirección %p - mat[%d] = %d\n", &mat[i], i, mat[i]);

    printf("dirección %p - y      = %d\n", &y, y);


 /* Las matrices en C no tiene comprobación de límites en ejecución:        */
 /* mat[TAM] no está definido, aunque en compilación y ejecución no         */
 /* da error el acceder a esa posición.                                     */
 /*                                                                         */
 /* Lo que ocurre es que estamos invadiendo las posiciones de memoria       */
 /* por encima de la matriz "mat". En este caso invadimos y perdemos el     */
 /* valor de la variable "x" declarada en posiciones de memoria posteriores */ 
 /* a "mat".                                                                */
 /* Está claro que este tipo de cosas puede darnos resultados               */
 /* imprevisibles en ejecución y errores en los programas difíciles         */
 /* de encontrar.                                                           */


    printf("\nPulsa INTRO para continuar.");
    getchar();
    printf("\n");
    printf("Desbordamos la matriz mat, escribiendo por encima "\
	   "de su índice mayor.\n" \
	   "Multiplicamos por 100 el valor de sus elementos.\n");
    for(i=0; i <= TAM+8; ++i)
       mat[i] = i*100;


    printf("dirección %p - x      = %d\n", &x, x);

    for(i=TAM; i >=0; --i)
       printf("dirección %p - mat[%d] = %d\n", &mat[i], i, mat[i]);

    printf("dirección %p - y      = %d\n", &y, y);




    printf("\nPulsa INTRO para continuar.");
    getchar();
    printf("\n");
    printf("Desbordamos la matriz mat, escribiendo por debajo "\
	   "de su índice menor\n"\
	   "La sentencia es: mat[-1] = 5555\n");
    mat[-1] = 5555;


    printf("dirección %p - x      = %d\n", &x, x);
    for(i=TAM; i >=-1; --i)
       printf("dirección %p - mat[%d] = %d\n", &mat[i], i, mat[i]);
    printf("dirección %p - y      = %d\n", &y, y);

    printf("\nPulsa INTRO para terminar.");
    getchar();

    return 0;
}

