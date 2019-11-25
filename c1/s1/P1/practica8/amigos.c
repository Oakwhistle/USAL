/* Fuente: AMIGOS.C
   Programa: NUMEROS AMIGOS
   Descripción: Determina si dos números son amigos.
   Dos números son amigos si la suma de los divisores distintos de sí mismo de cada uno de ellos
   coincide con el otro número.
   Por ejemplo, 284 y 220 son dos números amigos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   unsigned long divisores (unsigned long);
   int amigos (unsigned long, unsigned long);
   void presentacion (void);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     do
       { printf("\n");
	 modulo_principal();
	 printf("\n");
	 do
	   { printf("¿Otra ejecución (S/N)?: ");
	     fflush(stdin); /* Limpia el buffer de teclado */
	     respuesta = toupper(getchar());
	   }
	 while (respuesta != 'S' && respuesta != 'N');

       }
     while (respuesta != 'N');
     
     return 0;

} /* Fin del main */


/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
    long numero1, numero2;

    do
    { printf("Introduzca primer número (entero positivo): ");
      scanf("%ld", &numero1);
    } while (numero1 <= 0);

    do
    { printf("Introduzca segundo número (entero positivo): ");
      scanf("%ld", &numero2);
    } while (numero2 <= 0);

    if (amigos(numero1, numero2))
	 printf("\nLos números %ld y %ld son amigos.\n", numero1, numero2);
    else
	 printf("\nLos números %ld y %ld NO son amigos.\n", numero1, numero2);
}


/* ---------------------------------------------------------- */
   unsigned long divisores(unsigned long n) {
/* ---------------------------------------------------------- */
      unsigned long acu = 0;
      unsigned long j;

      for (j=1; j<n; j++)
	    if (n % j == 0) 
	      acu += j;
      return (acu);
}


/* ---------------------------------------------------------- */
   int amigos(unsigned long n1, unsigned long n2) {
/* ---------------------------------------------------------- */
      return ((n1==divisores(n2)) && (n2==divisores(n1)));
}


/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("Números amigos");
     puts("==============");
     puts("");
     puts("El programa indica si dos números enteros positivos son amigos");
     puts("");
}
