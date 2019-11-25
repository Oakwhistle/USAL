/* Fuente: GETS2.C
   Programa: OTRA VERSION DE GETS
   Descripción: Se crea con la función de biblioteca getchar una función de usuario con
   el mismo comportamiento que la funcion de biblioteca gets
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion     (void);
   char *gets2 (char *);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     do
       { printf("\n");
 	     fflush(stdin); /* Limpia el buffer de teclado */
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
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("OTRA VERSION DE GETS");
     puts("====================");
     puts("");
     puts("Se crea con la función de biblioteca getchar una función de usuario con el");
     puts("mismo comportamiento que la funcion de biblioteca gets                    ");
     puts("");
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char cad[100], cad2[100];
  
     printf("(gets)Introduzca una cadena de caracteres: ");
     gets(cad);
     printf("(gets2)Introduzca una segnda cadena de caracteres: ");
     gets2(cad2);

     printf("Primera cadena (con gets): ");
     puts(cad);
     printf("Segunda cadena (con gets2): ");
     puts(cad2);
}

/* ---------------------------------------------------------- */
char *gets2 (char *cadena) {
/* ---------------------------------------------------------- */
     char c, *p = cadena;

     while ((c = getchar()) != '\n')
          *p++ = c;
     *p = '\0';

     return cadena;
}
