/* Fuente: DIVISOR.C
   Programa: CALCULO DE DIVISORES
   Descripción: Calcula a través de una función los divisores de un número entero positivo,
   devolviéndolos en un vector. La función además devuelve a través de su valor de retorno
   el número de divisores, o –1 en caso de que la longitud del vector recibido sea insuficiente
*/
         
#include <stdio.h>
#include <stdlib.h>
#define DIM 50
#define NUMERO 1280U

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void presentacion (void);
   int  divisores (unsigned int *, int, unsigned int);
   void presenta_vector (unsigned int *, int);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */

     unsigned int vdiv[DIM];
     int cuantos;

     system ("cls");
     presentacion();

     cuantos = divisores (vdiv, DIM, NUMERO);

     if (cuantos < 0)
	      printf("ERROR. Desbordamiento vector divisores longitud %d\n", DIM);
     else
       {  printf("El número %u tiene %d divisores.\n", NUMERO, cuantos);
	      printf("\nSon los siguientes:\n");
	      presenta_vector (vdiv, cuantos);
       }
     
     printf ("\n\n");
     system ("pause");  
     return 0;
       
} /* Fin del main */


/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("Divisores");
     puts("=========");
     puts("");
     printf("El programa le presentará los divisores de %u", NUMERO);
     puts("");
     puts("");
}


/* ---------------------------------------------------------- */
   int divisores (unsigned int *v, int dim, unsigned int num) {
/* ---------------------------------------------------------- */
     int contar = 0;
     unsigned int k = 0;

     while (k++ < num)
	if (num % k == 0)
	   if (contar < dim)
	    v[contar++] = k;
	   else return (-1);

     return (contar);
}


/* ---------------------------------------------------------- */
   void presenta_vector (unsigned int *v, int dim) {
/* ---------------------------------------------------------- */
     int j;
     for (j=0; j< dim; j++)
	printf("%8u", v[j]);
}
