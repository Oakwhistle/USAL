/* Fuente: ACRONIMO.C
   Programa: ACRONIMO
   Descripción: El programa utiliza una función para generar el acrónimo de una cadena
   de caracteres que recibe como parámero
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion     (void);
   void ejemplos         (void);
   char *acronimo (char *cadena);
   char mayuscula (char letra);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     ejemplos();
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
     puts("ACRONIMO");
     puts("========");
     puts("");
     puts("Genera el acrónimo de una cadena de caracteres que se recibe por teclado");
     puts("");
}

/* ---------------------------------------------------------- */
   void ejemplos (void) {
/* ---------------------------------------------------------- */
     char cadena1[] = "United Nations International Children Emergency Fund";
     char cadena2[] = "Red digital servicios integrados";
     char *acro;
    
     printf("Ejemplos\n");
     printf("Cadena1 : %s\n", cadena1);
     acro = acronimo(cadena1);
     printf("Acrónimo: %s\n", acro);
     printf("\n");

     printf("Cadena2 : %s\n", cadena2);
     printf("Acrónimo: %s\n", acronimo(cadena2));
     printf("\n");
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char cadena[100];
     char *acro;

     printf("\n");
     printf("Introduzca cadena a convertir:\n");
     gets(cadena);
     acro = acronimo(cadena);
     printf("Acrónimo: %s\n", acro);
     printf("\n");
}

/* ---------------------------------------------------------- */
   char mayuscula (char letra) {
/* ---------------------------------------------------------- */
     if  (letra == 'ñ')
          letra = 'Ñ';
     else if ((letra >= 'a') && (letra <= 'z'))
   	    letra = (letra - 32);
   
    return (letra);
}

/* ---------------------------------------------------------- */
   char *acronimo (char *cadena) {
/* ---------------------------------------------------------- */
     const char BLANCO = ' ';
     int   blancos;   /* Número de espacios dentro de la cadena recibida */
     int   k, k2;
     char  *aux;     /* Cadena auxiliar */
   
     /* Contamos las palabras de la cadena recibida, que serán  */
     /* igual al número de espacios + 1.                        */
   
     blancos = 0;
     k=0;
     while (cadena[k] != '\0')
       if (cadena[k++] == BLANCO) blancos++;
   
     blancos++;
   
     aux = (char *) calloc (blancos+1, sizeof(char));
   			 /* Reservamos memoria para la cadena  */
   			 /* de salida, que contendrá tantos    */
   			 /* caracteres como palabras de la     */
   			 /* cadena recibida.                   */
   
     /* Desplazamos la primera letra de cada palabra de la cadena       */
     /* recibida a la cadena aux, convirtiéndola a la vez en mayúsculas */
   
     k=0;
     k2=0;
   
     aux[k2] = mayuscula(cadena[k]);
   
     while (cadena[k] != '\0')
       if (cadena[k] == BLANCO)
   	{
   	  k2++;
   	  k++;
   	  aux[k2] = mayuscula(cadena[k]);
   	}
       else
          k++;
   
       k2++;
       aux[k2] = '\0';
   
     return(aux);
}
