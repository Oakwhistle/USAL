#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fuente: RAIZ.C
   Programa: ECUACI�N DE SEGUNDO GRADO
   Descripci�n: Se calculan las dos ra�ces de una ecuaci�n de segundo grado. 
   
   Ejecuta el programa para los siguientes datos:
      1) Discriminante positivo: dos ra�ces reales y distintas
	         a = 4.0    b = -3.0    c = -2.0
      2) Discriminante cero: una ra�z doble
	         a = 2.0    b = 4.0    c = 2.0
      3) Discriminante negativo: ra�ces complejas 
	         a = 2.0    b = -3.0    c = 4.0
             
   El programa no controla que el discriminante (b*b - 4*a*c) pueda ser negativo, 
   para en ese caso no calcular la ra�z cuadrada (sqrt) del mismo. 
   Esta situaci�n en algunos entornos producir� un error de ejecuci�n que
   abortar� el programa (por ejemplo con el compilador Turbo C++ de Borland), y
   en otros no se interrumpir� la ejecuci�n del programa pero se producir�
   un resultado visiblemente err�neo (por ejemplo con el compilador Dev-C++).
   
   La soluci�n pasa por controlar el signo del discriminante en el programa y
   proceder convenientemente en caso de que sea negativo. Se ver� uan versi�n
   m�s completa de este programa en un gui�n de pr�cticas posterior.
*/

int main(void) {
    
	float a, b, c, d, raiz1, raiz2;

	/* Leer los datos de entrada */

	printf("Teclea el valor de a:  ");
	scanf("%f",&a);
	printf("\n");
	printf("Teclea el valor de b:  ");
	scanf("%f",&b);
	printf("\n");
	printf("Teclea el valor de c:  ");
	scanf("%f",&c);
	printf("\n");

	/* Realizar los calculos */

	d = sqrt(b*b-4*a*c);
	raiz1 = (-b+d)/(2*a);
	raiz2 = (-b-d)/(2*a);

	printf("Las raices son %f ", raiz1);
	printf("  y  %f \n", raiz2);

    system ("pause");
    return 0;
}

