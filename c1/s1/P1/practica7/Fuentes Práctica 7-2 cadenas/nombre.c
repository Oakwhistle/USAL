/* Fuente: NOMBRE.C
   Programa: NOMBRE*APELLIDO1*APELLIDO2 
   Descripción: Lee en tres variables cadena, el nombre y los dos apellidos de una persona
   y, posteriormente, concatena en una cuarta variable cadena las tres anteriores,
   separando cada una de ellas por el caracter asterisco (*).
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 30
#define SEPARADOR '*'
#define NULO '\0'

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion     (void);

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
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     int j, i;
     char nomb[N];
     char ape1[N];
     char ape2[N];
     char iden_persona[3*N];
    
     printf("Introduzca el nombre: ");           gets(nomb);
     printf("Introduzca el primer apellido: ");  gets(ape1);
     printf("Introduzca el segundo apellido: "); gets(ape2);
    
     i = 0;
    
     /* Recorremos carácter a carácter la cadena nomb, llevando de uno en
        uno los caracteres a la cadena iden_persona. Terminamos cuando 
        localicemos el carácter nulo final de la cadena nomb */
     j = 0;
     while (nomb[j] != NULO)
       {   iden_persona[i] = nomb[j];
           j++;
           i++;
       }
    
     /* Colocamos el carácter separador a iden_persona */
     iden_persona[i] = SEPARADOR;
     i++;
    
     /* Recorremos carácter a carácter la cadena ape1, llevando de uno en
        uno los caracteres a la cadena iden_persona. Terminamos cuando 
        localicemos el carácter nulo final de la cadena ape1 */
     j = 0;
     while (ape1[j] != NULO)
       {   iden_persona[i] = ape1[j];
           j++;
           i++;
       }
    
     iden_persona[i] = SEPARADOR;
     i++;
        
     /* Se recorre carácter a carácter la cadena ape2, llevando de uno en 
        uno los caracteres a la cadena iden_persona. Se termina cuando 
        se localiza el carácter nulo final de la cadena ape2 */
     j = 0;
     while (ape2[j] != NULO)
       {   iden_persona[i] = ape2[j];
           j++;
           i++;
       }
    
     /* Colocamos el carácter nulo final a iden_persona */
     iden_persona[i] = NULO; 
    
     printf("Identificación persona: %s\n", iden_persona);
}

/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("FORMATO NOMBRE*APELLIDO1*APELLIDO2");
     puts("==================================");
     puts("");
     puts("Solicita por separado el nombre y los dos apellidos de una persona y,");
     puts("posteriormente realiza la concatenación de las tres variables anteriores");
     puts("separándolas por el caracter asterisco (*).");
     puts("");
}
