#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fuente: RAIZ.C
   Programa: ECUACIÓN DE SEGUNDO GRADO
   Descripción: Se calculan las dos raíces de una ecuación de segundo grado. 
   
   Ejecuta el programa para los siguientes datos:
      1) Discriminante positivo: dos raíces reales y distintas
	         a = 4.0    b = -3.0    c = -2.0
      2) Discriminante cero: una raíz doble
	         a = 2.0    b = 4.0    c = 2.0
      3) Discriminante negativo: raíces complejas 
	         a = 2.0    b = -3.0    c = 4.0
             
   El programa no controla que el discriminante (b*b - 4*a*c) pueda ser negativo, 
   para en ese caso no calcular la raíz cuadrada (sqrt) del mismo. 
   Esta situación en algunos entornos producirá un error de ejecución que
   abortará el programa (por ejemplo con el compilador Turbo C++ de Borland), y
   en otros no se interrumpirá la ejecución del programa pero se producirá
   un resultado visiblemente erróneo (por ejemplo con el compilador Dev-C++).
   
   La solución pasa por controlar el signo del discriminante en el programa y
   proceder convenientemente en caso de que sea negativo. Se verá uan versión
   más completa de este programa en un guión de prácticas posterior.
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

