/* Fuente: TEXTO3.C
   Programa: TABLA DE CARACTERES DINAMICA Y RELLENO DE TODAS LAS LINEAS A LA LONGITUD MAYOR
   Descripci�n: Crea din�micamente un array de cadenas de caracteres con l�neas de longitud variable.
   El programa utiliza la funci�n LeerTexto que utiliza un par�metro de salida de tipo
   "puntero a puntero a puntero a char".
   Este puntero es quien soporta el array din�mico de cadenas de caracteres.

   El programa utiliza una segunda funci�n FijarTexto para formater el array recibido para que todas
   las l�neas tengan la longitud de la m�xima l�nea, completando las l�neas que sean necesarias con
   un car�cter que se le pasar� tambi�n como par�metro a la funci�n.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXL 200

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion     (void);
   void LeerTexto    (char ***, int);
   void MostrarTexto (char  **, int);
   void FreeTexto    (char  **, int);
   void FijarTexto   (char  **, int, char);


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
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("TABLA DE CARACTERES DINAMICA FIJANDO LA LONGITUD DE LAS LINEAS A LA MAYOR");
     puts("=========================================================================");
     puts("");
     puts("Crea din�micamente un array de cadenas de caracteres con l�neas de longitud");
     puts("variable. El programa utiliza la funci�n FijarTexto con prototipo          ");
     puts("");
     puts("             void FijarTexto (char **txt, int nlin, char c);               ");
     puts("");
     puts("para completar todas las l�neas a la longitud de la mayor.                 ");
     puts("");
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char **texto;
     int  nlineas;

     printf("\nIntroduzca el n�mero de l�neas del texto: ");
     scanf("%d", &nlineas);

     LeerTexto    (&texto, nlineas);
     MostrarTexto (texto,  nlineas);
     FijarTexto   (texto,  nlineas, '.');
     MostrarTexto (texto,  nlineas);
     FreeTexto    (texto,  nlineas);
}

/* ---------------------------------------------------------- */
   void LeerTexto (char ***txt, int nlin) {
/* ---------------------------------------------------------- */
     int  i, j;
     long longitud;
     char buffer[MAXL];
   
     if ( (*txt = (char **) malloc (nlin * sizeof (char *))) == NULL )
        { printf("\nError al reservar memoria 1\n");
          exit(-1);
        }
   
     for (i=0; i < nlin; i++) {
     	 printf("Introduzca l�nea %3d: ", i+1);
         fflush (stdin);
         gets (buffer);
         longitud = strlen(buffer)+1;
         if (((*txt)[i]=(char *) malloc(longitud * sizeof(char))) == NULL)
   	 { for(j=i-1; j >=0 ; j--) free(*txt[j]);
   	   free(*txt);
   	   printf("\nError al reservar memoria 2\n");
	   exit(-1);
   	 }
         else strcpy ((*txt)[i], buffer);
       }
}

/* ---------------------------------------------------------- */
   void FijarTexto (char **txt, int nlin, char c) {
/* ---------------------------------------------------------- */
     int  i, j;
     long longmax;
     const char NULO   = '\0';

     if (nlin <= 0) return;
   
     longmax = strlen (txt[0]);
     for (i=1; i < nlin; i++)
         if (strlen (txt[i]) > longmax)
   	   longmax = strlen (txt[i]);
   
     for (i=0; i < nlin; i++)
     {  if ( (txt[i] = (char *) realloc (txt[i], longmax+1)) == NULL )
         { printf("\nError al reservar memoria en FijarTexto\n");
           exit(-1);
         }
        for (j = strlen (txt[i]); j < longmax; j++)
   	    txt[i][j] = c;
        txt[i][j] = NULO;
     }
}                 

/* ---------------------------------------------------------- */
   void MostrarTexto (char **txt, int nlin) {
/* ---------------------------------------------------------- */
     int  i;
     long longitud;
   
     printf("L�nea Longitud Contenido                                \n");
     printf("----- -------- -----------------------------------------\n");
     for (i=0; i < nlin; i++)
       { longitud = strlen(txt[i]);
         printf("%5d %8ld ", i+1, longitud);
         puts (txt[i]);
       }
}

/* ---------------------------------------------------------- */
   void FreeTexto (char **txt, int nlin) {
/* ---------------------------------------------------------- */
     int  i;
     for(i=0; i < nlin; i++)
         free(txt[i]);
     free(txt);
}
