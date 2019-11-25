/* Fuente: PALABRAS.C
   Programa: DESCOMPONER UNA FRASE EN PALABRAS
   Descripci�n: El programa utiliza la funci�n strtok para descomponer una frase en
   las palabras que la componen
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
	       { printf("�Otra ejecuci�n (S/N)?: ");
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
     char cadena[80];
     char *separador = " ";
     char *ptr;
   
     printf("\nIntroduzca una frase: ");
     gets(cadena);
     printf("\nCadena introducida: %s\n", cadena);

     printf("\nSe descompone en palabras: \n");

     ptr = strtok(cadena, separador);
	  /* strtok coloca un caracter de terminaci�n NULL en la posici�n del
	     separador, si es que es encontrado en cadena */

     while (ptr)
     {  printf("\t%s\n", ptr);
	  /* Las siguientes llamadas a strtok con NULL en el primer par�metro
	     retornan un puntero al siguiente caracter al separador
	     encontrado y adem�s colocan un caracter de terminaci�n NULL
	     en la posici�n del siguiente separador */
       ptr = strtok(NULL, separador);
     }

	  /* La cadena original ha quedado modificada, por lo que
	     la hemos "perdido" */
     printf("\n\nCadena original: %s\n", cadena);
     printf("Ha quedado modificada. La hemos perdido !!!\n");
}

/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("DESCOMPONER UNA FRASE EN PALABRAS");
     puts("=================================");
     puts("");
     puts("El programa utiliza la funci�n strtok para descomponer una frase en");
     puts("las palabras que la componen.");
}
