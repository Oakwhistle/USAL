#include <stdio.h>
#include <stdlib.h>

/* Fuente: PROMOCI.C
   Programa: Promoción automática de tipos.
   Descripción: Este programa ilustra el mecanismo de promoción de tipos
   en las distintas expresiones que mezclan tipos.
   
   Las reglas de promoción son las siguientes:
   1. Si cualquiera de los operandos es de tipo char, short o enumerado, se convierte a tipo int. 
   2. Si los operandos tienen distinto tipos, se convertirán todos al tipo "más alto" de la expresión, 
      según la siguiente lista. 
           int,  unsigned int,  long,  unsigned long,  float,  double,  long double

   
   
*/


int main(void) {
   char   a,b;
   short  entero_1;
   long   entero_2;
   float  real_1, real_2;
   double real_3 = 2.345;

/* Promoción de tipos para los char  */
/* --------------------------------- */
   printf("Escriba dos caracteres, separados por espacios: ");
   scanf("%c %c", &a, &b);

   printf("El tamaño de %c (%d) es %d.\n", a, a, sizeof(a));

   printf("El tamaño de %c (%d) es %d.\n", b, b, sizeof(b));

   // Si cualquiera de los operandos es de tipo char, short o enumerado, 
   // se convierte a tipo int. 
   printf("El tamaño de %d*%d es %d.\n", a, b, sizeof(a*b));

/* Promoción de tipos para short e int */
/* ----------------------------------- */
   printf("\n\nEscriba dos enteros, separados por espacios: ");
   scanf("%hd %ld", &entero_1, &entero_2);

   printf("El tamaño del entero corto %hd es %d.\n", entero_1, sizeof(entero_1));

   printf("El tamaño del entero largo %ld es %d.\n", entero_2, sizeof(entero_2));

   // Si cualquiera de los operandos es de tipo char, short o enumerado, 
   // se convierte a tipo int. 
   printf("El tamaño de %hd*%ld (%ld) es %d\n",
	   entero_1, entero_2, entero_1*entero_2, sizeof(entero_1*entero_2));


/* Promoción de tipos para float */
/* ----------------------------- */
   printf("\n\nEscriba un real: ");
   scanf("%f", &real_1);
   printf("Escriba el otro número real: ");
   scanf("%f", &real_2);

   printf("El tamaño de %g (float) es %d.\n", real_1, sizeof(real_1));

   printf("El tamaño de %g  (float) es %d.\n", real_2, sizeof(real_2));

   printf("El tamaño de %g(float)*%g(float)= (%g) es %d\n",
	   real_1, real_2, real_1*real_2, sizeof(real_1*real_2));

   printf("El tamaño de %g(float)*%lg(double)= (%lg) es %d\n",
	   real_1, (double)real_2, real_1*(double)real_2, sizeof(real_1*(double)real_2));


   printf("\n\n\nMezclar un entero corto (%d) con un float (%g) tiene el tamaño: %d\n",
	  entero_1, real_1, sizeof(entero_1*real_1));

   printf("Mezclar un entero corto (%d) con un double (%lg) tiene el tamaño: %d\n",
	       entero_1, (double)real_2, sizeof(entero_1*(double)real_2));

   system ("pause");
   return 0;
}

