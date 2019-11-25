/* Fuente: SENO.C
   Programa: LA SERIE SENO
   Descripci�n: Calcula el valor de seno(x) a trav�s del desarrollo de su serie matem�tica
   y compara el resultado obtenido con el que proporciona la funci�n intr�nseca sin()
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define PUNTOS 15.0

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   double seno (double);
   void presentacion (void);
   void modulo_principal (void);

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
     double limite1, limite2, incremento, x;
    
     printf("Introduzca l�mite inferior del intervalo: ");
     scanf("%lf", &limite1);

     do
     { printf("Introduzca l�mite superior del intervalo: ");
       scanf("%lf", &limite2);
     } while (limite2 <= limite1);

     incremento = (limite2 - limite1) / PUNTOS;

     puts("");
     puts("   Valor x    seno(x)    sin(x)  ");
     puts(" ---------- ---------- ----------");
     for (x = limite1; x <= limite2; x+=incremento)
	 printf("%10.6lf %10.6lf %10.6lf \n", x, seno(x), sin(x));
}


/* ---------------------------------------------------------- */
   double seno(double px) {
/* ---------------------------------------------------------- */
     const int MAXTERMINOS = 20;
     double termino, suma = 0;
     int    nterm, i;
     
     i = nterm = 1;
     termino = px;
     suma = px;
     while (nterm < MAXTERMINOS) {
       i += 2;
       termino = - ( (px * px) /(i*(i-1)) )* termino;
       suma += termino;
       nterm += 1;
     }
     
     return (suma);
}


/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("Serie para la funci�n seno");
     puts("==========================");
     puts("");
     puts("El programa le presenta el resultado de la funci�n seno(x) en");
     puts("varios puntos de un intervalo, calculado a trav�s de su serie");
     puts("que la define y de la funci�n intr�nseca sin(x).");
     puts("");
}
