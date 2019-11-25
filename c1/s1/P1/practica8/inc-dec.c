/* Fuente: INC-DEC.C
   Programa: FUNCIONES INCREMENTO Y DECREMENTO
   Descripción: Comprueba el comportamiento del paso por referencia con las funciones
   básicas incremento y decremento, observando como el parámetro real es modificado
   desde el interior de la función
*/

#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
void inc (int *, int);
void dec (int *, int);


/* ---------------------------------------------------------- */
   int main(void) {
/* ---------------------------------------------------------- */
     int numero, incremento, decremento;

     printf("Introduzca un número entero: ");  scanf("%d", &numero);
     printf("Valor para el incremento?: ");    scanf("%d", &incremento);
     printf("Valor para el decremento?: ");    scanf("%d", &decremento);

     printf("El número introducido es %d\n", numero);


     inc (&numero, incremento);
     printf("Incrementado en %d su nuevo valor es %d\n", incremento, numero);

     dec (&numero, decremento);
     printf("Decrementado en %d su nuevo valor es %d\n", decremento, numero);
     
     printf("\n");
     system ("pause");
     return 0;
}


/* ---------------------------------------------------------- */
   void inc (int *n, int mas) {
/* ---------------------------------------------------------- */
     *n = *n + mas;
}


/* ---------------------------------------------------------- */
   void dec (int *n, int menos) {
/* ---------------------------------------------------------- */
     *n = *n - menos;
}
