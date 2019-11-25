/* Fuente: TEXTO2.C
   Programa: TABLA DE CARACTERES DINAMICA (SEGUNDA VERSION DE LA FUNCION LeerTexto)
   Descripción: Crea dinámicamente un array de cadenas de caracteres con líneas de longitud variable.
   El programa utiliza la función LeerTexto que utiliza un parámetro de salida de tipo
   "puntero a puntero a puntero a char".
   Este puntero es quien soporta el array dinámico de cadenas de caracteres.
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
   void MostrarTexto (char **, int);
   void FreeTexto    (char **, int);

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
     puts("TABLA DE CARACTERES DINAMICA (v.2)");
     puts("==================================");
     puts("");
     puts("Crea dinámicamente un array de cadenas de caracteres con líneas de longitud");
     puts("variable. El programa utiliza la función LeerTexto con prototipo           ");
     puts("");
     puts("                 void LeerTexto (char ***, int);                           ");
     puts("");
     puts("es decir, utiliza un \"puntero a puntero a puntero a char\", que será      ");
     puts("quien soporte el array dinámico de cadenas de caracteres.                  ");
     puts("");
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char **texto;
     int  nlineas;

     printf("\nIntroduzca el número de líneas del texto: ");
     scanf("%d", &nlineas);

     LeerTexto    (&texto, nlineas);
     MostrarTexto (texto, nlineas);
     FreeTexto    (texto, nlineas);
}

/* ---------------------------------------------------------- */
   void LeerTexto (char ***txt, int nlin) {
/* ---------------------------------------------------------- */
     int  i, j;
     long longitud;
     char buffer[MAXL];

     if ( (*txt = (char **) malloc (nlin * sizeof (char *))) == NULL )
      {   printf("\nError al reservar memoria 1\n");
       exit(-1);
      }

     for (i=0; i < nlin; i++)
       { printf("Introduzca línea %3d: ", i+1);
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
   void MostrarTexto (char **txt, int nlin) {
/* ---------------------------------------------------------- */
     int  i;
     long longitud;

     printf("Línea Longitud Contenido                                \n");
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
