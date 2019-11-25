/* Fuente: ABINARIO.C
   Programa: REPRESENTACION EN BINARIO
   Descripción: Presenta en pantalla la representación en binario de un número enteo de un byte
   Para ello utiliza una función que recibe un número entero de un byte y una cadena de caracteres
   con longitud 8, y convierte el número recibido a binario, devolviendo en cada una de las posiciones
   de la cadena el bit a 1 o 0, según corresponda.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void abinario (char, char *);
   void modulo_principal (void);
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
   void modulo_principal(void) {
/* ---------------------------------------------------------- */
     unsigned char numero;
     char cadenabin[9];

     do
     { printf("Introduzca número a convertir a binario (entre 0 y 255): ");
       scanf("%d", &numero);
     } while (numero < 0);

     abinario(numero, cadenabin);

     printf("\nEl número %d en binario es %s\n", numero, cadenabin);
}


/* ---------------------------------------------------------- */
   void abinario (char num, char *cad) {
/* ---------------------------------------------------------- */
     unsigned char mascara = 0x80;
     char temp;
     int k = 0;

     while (mascara != 0)
     {  temp = num & mascara;
       (temp == 0) ? (cad[k] = '0') : (cad[k] = '1');
	k++;
	mascara = mascara >> 1;
     }

     cad[k] = '\0';
}

/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("Representación en binario");
     puts("=========================");
     puts("");
     puts("Presenta en pantalla la representación en binario de un número enteo de un byte");
     puts("");
}
