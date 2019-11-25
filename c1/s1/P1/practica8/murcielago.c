/* Fuente: MURCIELA.C
   Programa: CODIGO MURCIELAGO
   Descripci�n: Codifica d�gito a d�gito un n�mero entero positivo de hasta 4 cifras
   utilizando el siguiente c�digo  
        Valor del d�gito: 9  8  7  6  5  4  3  2  1  0  
        C�digo asociado : M  U  R  C  I  E  L  A  G  O
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion (void);
   void descomponer_en_digitos (int, int *, int *, int *, int *);
   char traduce_digito (int);
   void presenta_resultados (int, char *);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system("cls");
     presentacion();
     do
       { printf("\n");
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

} /* Fin del main */


/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
    char codigo[5] = "\0";

    int  cantidad;
    int  unidad, decena, centena, millar;
    int  resto;

    /* Se solicita la cantidad de codificar */
    do
     { printf("Introduzca la cantidad a codificar (entre 1 y 9999): ");
       scanf("%d", &cantidad);
     } while (cantidad <= 0 || cantidad > 9999 );

    descomponer_en_digitos (cantidad, &unidad, &decena, &centena, &millar);

    codigo[0] = traduce_digito(millar);
    codigo[1] = traduce_digito(centena);
    codigo[2] = traduce_digito(decena);
    codigo[3] = traduce_digito(unidad);
    codigo[4] = '\0';

    presenta_resultados (cantidad, codigo);
}

/* ---------------------------------------------------------- */
   void presentacion(void) {
/* ---------------------------------------------------------- */
     puts("Conversi�n a c�digo MURCIELAGO");
     puts("==============================");
     puts("");
     puts("Introduzca una cantidad entre 1 y 9999 y el programa la codificar�");
     puts("seg�n el c�digo:  M U R C I E L A G O         ");
     puts("                  9 8 7 6 5 4 3 2 1 0         ");
     puts("");
}


/* ---------------------------------------------------------- */
   void descomponer_en_digitos(int cant, int *u, int *d, int *c, int *m) {
/* ---------------------------------------------------------- */
/* Obtenemos los cuatro d�gitos de que puede constar el n�mero*/
     
     int resto;
   
     /* Unidades de mil */
     *m     = cant / 1000;
     resto  = cant % 1000;

     /* Centenas */
     *c     = resto / 100;
     resto  = resto % 100;

     /* Decena y Unidad */
     *d     = resto / 10;
     *u     = resto % 10;
}


/* ---------------------------------------------------------- */
   char traduce_digito(int dig) {
/* ---------------------------------------------------------- */
     char codigo;

     switch (dig) {
	   case  9 : codigo = 'M'; break;
	   case  8 : codigo = 'U'; break;
	   case  7 : codigo = 'R'; break;
	   case  6 : codigo = 'C'; break;
	   case  5 : codigo = 'I'; break;
	   case  4 : codigo = 'E'; break;
	   case  3 : codigo = 'L'; break;
	   case  2 : codigo = 'A'; break;
	   case  1 : codigo = 'G'; break;
	   case  0 : codigo = 'O'; break;
    }
    return (codigo);
}


/* ---------------------------------------------------------- */
   void presenta_resultados(int cant, char *cod) {
/* ---------------------------------------------------------- */
     puts("");
     printf("La cantidad %d codificada es %s.\n", cant, cod);
}

