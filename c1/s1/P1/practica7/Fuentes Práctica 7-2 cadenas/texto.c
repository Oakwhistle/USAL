/* Fuente: TEXTO.C
   Programa: TABLA DE CARACTERES DINAMICA
   Descripci�n: Crea din�micamente un array de cadenas de caracteres con l�neas de longitud variable.
   El programa utiliza la funci�n LeerTexto que retorna un "puntero a puntero a char" a trav�s del
   valor de retorno de la funci�n.
   Este puntero es quien soporta el array din�mico de cadenas de caracteres.
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
   char **LeerTexto  (int);
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
     puts("TABLA DE CARACTERES DINAMICA (v.1)");
     puts("==================================");
     puts("");
     puts("Crea din�micamente un array de cadenas de caracteres con l�neas de longitud");
     puts("variable. El programa utiliza la funci�n LeerTexto con prototipo           ");
     puts("");
     puts("                  char **LeerTexto  (int);                                 ");
     puts("");
     puts("es decir, retorna un \"puntero a puntero a char\", que ser� quien soporte  ");
     puts("el array din�mico de cadenas de caracteres.                                ");
     puts("");
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char **texto;
     int  nlineas;

     printf("\nIntroduzca el n�mero de l�neas del texto: ");
     scanf("%d", &nlineas);

     texto = LeerTexto  (nlineas);
     MostrarTexto (texto, nlineas);
     FreeTexto    (texto, nlineas);
}

/* ---------------------------------------------------------- */
   char **LeerTexto (int nlin) {
/* ---------------------------------------------------------- */
     int  i, j;
     long longitud;
     char buffer[MAXL];
     char **txt;
    
     if ( (txt = (char **) malloc (nlin * sizeof (char *))) == NULL )
      {   printf("\nError al reservar memoria 1\n");
          exit(-1);
      }

     for (i=0; i < nlin; i++)
       { printf("Introduzca l�nea %3d: ", i+1);
         fflush (stdin);
         gets (buffer);
         longitud = strlen(buffer)+1;
         if ((txt [i]=(char *) malloc(longitud * sizeof(char))) == NULL)
	    { for(j=i-1; j >=0 ; j--) free(txt[j]);
	      free(txt);
	      printf("\nError al reservar memoria 2\n");
	      exit(-1);
	    }
         else strcpy (txt[i], buffer);

       }

       return txt;
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
     for (i=0; i < nlin; i++)
         free(txt[i]);
     free(txt);
}
