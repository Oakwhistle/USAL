#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/*
   Fuente: DESBORDA.C
   Programa: DESBORDAMIENTO DE INDICES EN MATRICES UNIDIMENSIONALES.
   Descripción: Las matrices están formadas por posiciones contiguas de memoria,
   correspondiendo el primer elemento (mat[0]) a la posición de memoria más baja.

   No existe comprobación de límites en ejecución. Es decir si la matriz
   tiene TAM elementos, es posible seguir escribiendo valores por encima del
   índice TAM-1, o por debajo del índice 0, sin que esto produzca un error de
   ejecución. Lo que estará ocurriendo es que estamos sobreescribiendo sobre las
   memoria de las variables declaradas en las posiciones anteriores o siguientes
   a la matriz. Algo siempre "muy peligroso", salvo que se busque intencionadamente.
*/

int main(void) {

    int i;
    int a= 100, b= 101, mat[TAM], x = 255, y = 256;

    /* Orden declaraciones de las variables en la Pila
          a              dirección más alta
          b
          mat[4]
          mat[3]
          mat[2]
          mat[1]
          mat[0]
          x
          y              dirección más baja
    ------------------------------------------------------ */



    printf("\n");

 /* Iniciamos la matriz unidimensional "mat": A cada posición le damos    */
 /* el valor de su índice: mat[0] <-- 0, mat[1] <-- 1, ... mat[5] <-- 5   */
 /* Mostramos posteriormente el valor de sus posiciones.                  */

    printf("Declaración de constantes:\n");
    printf("TAM=%d\n", TAM);
    printf("Declaración de variables:\n");
    printf("int a = %d, b = %d, mat[TAM],  x = %d, y = %d \n", a, b, x, y);
    printf("Damos valores a la matriz mat.\n");
    printf("Cada posición tendrá el valor de su índice.\n");
    printf("\n");
    printf("Contenido de la matriz mat y sus variables contiguas en memoria.\n");

    for(i=0; i < TAM; ++i)
	     mat[i] = i;

    printf("%p a      = %d\n", &a, a);
    printf("%p b      = %d\n", &b, b);
    for(i=TAM-1; i >=0; --i)
       printf("%p mat[%d] = %d\n", &mat[i], i, mat[i]);
    printf("%p x      = %d\n", &x, x);
    printf("%p y      = %d\n", &y, y);

 /* Las matrices en C no tiene comprobación de límites en ejecución:        */
 /* ni mat[TAM] ni mat[-1] está definidos, aunque en compilación y          */
 /* ejecución no da error el acceder a esas posiciones.                     */
 /* Lo que ocurre es que estamos invadiendo las posiciones de memoria       */
 /* contiguas a la matriz "mat".                                            */
 /* Está claro que este tipo de cosas puede darnos resultados               */
 /* imprevisibles en ejecución y errores lógicos en los programas difíciles */
 /* de encontrar.                                                           */

    printf("\nPulsa INTRO para continuar");
    getchar();
    printf("\n");
    printf("Desbordamos la matriz mat, escribiendo por debajo " \
	       "de su índice menor \ny por encima de su indice mayor\n");
	printf("Las sentencias son: mat[TAM]   = 1111\n");
	printf("                    mat[TAM+1] = 2222\n");
	printf("                    mat[-1]    = 5555\n");
	printf("                    mat[-2]    = 6666\n");
	mat[TAM]   = 1111;
    mat[TAM+1] = 2222;
    mat[-1]    = 5555;
    mat[-2]    = 6666;

    printf("\nObservamos como hemos invadido y modificado las variables " \
           "contiguas a, b, x e y\n");

    printf("%p a      = %d\n", &a, a);
    printf("%p b      = %d\n", &b, b);
    for(i=TAM-1; i >=0; --i)
       printf("%p mat[%d] = %d\n", &mat[i], i, mat[i]);
    printf("%p x      = %d\n", &x, x);
    printf("%p y      = %d\n", &y, y);

    printf("\nPulsa INTRO para terminar");
    getchar();
    return 0;
}

