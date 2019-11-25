#include <stdio.h>
#include <stdlib.h>

/* Fuente: PROMOCI.C
   Programa: Promoci�n autom�tica de tipos.
   Descripci�n: Este programa ilustra el mecanismo de promoci�n de tipos
   en las distintas expresiones que mezclan tipos.
   
   Las reglas de promoci�n son las siguientes:
   1. Si cualquiera de los operandos es de tipo char, short o enumerado, se convierte a tipo int. 
   2. Si los operandos tienen distinto tipos, se convertir�n todos al tipo "m�s alto" de la expresi�n, 
      seg�n la siguiente lista. 
           int,  unsigned int,  long,  unsigned long,  float,  double,  long double

   
   
*/


int main(void) {
   char   a,b;
   short  entero_1;
   long   entero_2;
   float  real_1, real_2;
   double real_3 = 2.345;

/* Promoci�n de tipos para los char  */
/* --------------------------------- */
   printf("Escriba dos caracteres, separados por espacios: ");
   scanf("%c %c", &a, &b);

   printf("El tama�o de %c (%d) es %d.\n", a, a, sizeof(a));

   printf("El tama�o de %c (%d) es %d.\n", b, b, sizeof(b));

   // Si cualquiera de los operandos es de tipo char, short o enumerado, 
   // se convierte a tipo int. 
   printf("El tama�o de %d*%d es %d.\n", a, b, sizeof(a*b));

/* Promoci�n de tipos para short e int */
/* ----------------------------------- */
   printf("\n\nEscriba dos enteros, separados por espacios: ");
   scanf("%hd %ld", &entero_1, &entero_2);

   printf("El tama�o del entero corto %hd es %d.\n", entero_1, sizeof(entero_1));

   printf("El tama�o del entero largo %ld es %d.\n", entero_2, sizeof(entero_2));

   // Si cualquiera de los operandos es de tipo char, short o enumerado, 
   // se convierte a tipo int. 
   printf("El tama�o de %hd*%ld (%ld) es %d\n",
	   entero_1, entero_2, entero_1*entero_2, sizeof(entero_1*entero_2));


/* Promoci�n de tipos para float */
/* ----------------------------- */
   printf("\n\nEscriba un real: ");
   scanf("%f", &real_1);
   printf("Escriba el otro n�mero real: ");
   scanf("%f", &real_2);

   printf("El tama�o de %g (float) es %d.\n", real_1, sizeof(real_1));

   printf("El tama�o de %g  (float) es %d.\n", real_2, sizeof(real_2));

   printf("El tama�o de %g(float)*%g(float)= (%g) es %d\n",
	   real_1, real_2, real_1*real_2, sizeof(real_1*real_2));

   printf("El tama�o de %g(float)*%lg(double)= (%lg) es %d\n",
	   real_1, (double)real_2, real_1*(double)real_2, sizeof(real_1*(double)real_2));


   printf("\n\n\nMezclar un entero corto (%d) con un float (%g) tiene el tama�o: %d\n",
	  entero_1, real_1, sizeof(entero_1*real_1));

   printf("Mezclar un entero corto (%d) con un double (%lg) tiene el tama�o: %d\n",
	       entero_1, (double)real_2, sizeof(entero_1*(double)real_2));

   system ("pause");
   return 0;
}

