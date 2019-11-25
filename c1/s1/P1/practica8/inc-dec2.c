/* Fuente: INC-DEC2.C
   Programa: FUNCIONES INCREMENTO Y DECREMENTO CON PASO POR VALOR
   Descripci�n: Comprueba el comportamiento del paso por valor, mediante el cual no  
   es posible modificar el valor del par�metro real en la llamada
*/

#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
void inc (int, int); 
void dec (int, int);


/* ---------------------------------------------------------- */
   int main(void) {
/* ---------------------------------------------------------- */
     int numero, incremento, decremento;

     printf("Introduzca un n�mero entero: ");  scanf("%d", &numero);
     printf("Valor para el incremento?: ");    scanf("%d", &incremento);
     printf("Valor para el decremento?: ");    scanf("%d", &decremento);

     printf("El n�mero introducido es %d\n", numero);


     inc (numero, incremento);
     printf("Incrementado en %d su nuevo valor es %d\n", incremento, numero);

     dec (numero, decremento);
     printf("Decrementado en %d su nuevo valor es %d\n", decremento, numero);
     
     printf ("\n");
     system ("pause");
     return 0;
}


/* ---------------------------------------------------------- */
   void inc(int n, int mas) {
/* ---------------------------------------------------------- */
     n = n + mas;
}


/* ---------------------------------------------------------- */
   void dec(int n, int menos) {
/* ---------------------------------------------------------- */
     n = n - menos;
}
