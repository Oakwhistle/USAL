#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fuente: ec2grado.c
   Programa: RESOLUCIÓN ECUACIÓN DE SEGUNDO GRADO
   Descripción: Resuelve la ecuación de segundo grado ax + bx + c = 0
*/

int main(void) {

/* Declaraciones */
  float a, b, c;         /* Coeficientes ecuación de segundo grado  */
  float x1, x2;          /* Soluciones reales                       */ 
  float x1real, x2real;  /* Partes reales soluciones complejas      */ 
  float x1imag, x2imag;  /* Partes imaginarias soluciones complejas */ 
  float discriminante; 

 
/* Presentación */
  system ("cls");  /* Borrado de la pantalla */

  printf("Resolución de la ecuación de segundo grado\n");
  printf("==========================================\n");
  printf("El programa soluciona la ecuación de segundo grado\n");
  printf("                  2                       \n");
  printf("                ax  + bx  + c = 0         \n");

/* Petición de datos */
  printf("Introduzca los coeficientes:\n");
  printf("Coeficiente a?: ");  scanf("%f", &a);
  printf("Coeficiente b?: ");  scanf("%f", &b);
  printf("Coeficiente c?: ");  scanf("%f", &c);

/* Cálculos y resultados */
   discriminante = b*b - 4*a*c;

   printf("\nLa ecuación\n");
   
   printf("%14d\n", 2);
   printf("%12gx + %gx + %g = 0\n", a, b, c);

   printf("tiene por soluciones ");


   if (discriminante == 0)
     {
        printf("una raíz real doble\n");
        x1 = x2 = -b / (2*a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
     }
   else if (discriminante > 0)
          {
            printf("dos raíces reales\n");
            x1 = (-b + sqrt(discriminante)) / (2*a);
            x2 = (-b - sqrt(discriminante)) / (2*a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
          }
        else 
          {
            printf("dos raices complejas conjugadas\n");
            x1real = x2real = -b / (2*a);
            x1imag = sqrt(-discriminante) / (2*a);
            x2imag = -sqrt(-discriminante) / (2*a);
            printf("x1 = (%.2f, %.2fi)\n", x1real, x1imag);
            printf("x2 = (%.2f, %.2fi)\n", x2real, x2imag);
          }
          
   printf("\n\n");
   system ("pause");
   return 0;
}

/* ============================================================
             Ejemplos de ejecución del programa
   ============================================================

Resolución de la ecuación de segundo grado
==========================================
El programa soluciona la ecuación de segundo grado
                  2
                ax  + bx  + c = 0
Introduzca los coeficientes:
Coeficiente a?: 3
Coeficiente b?: 6
Coeficiente c?: 3

La ecuación
             2
           3x + 6x + 3 = 0
tiene por soluciones una raíz real doble
x1 = -1.00
x2 = -1.00


Resolución de la ecuación de segundo grado
==========================================
El programa soluciona la ecuación de segundo grado
                  2
                ax  + bx  + c = 0
Introduzca los coeficientes:
Coeficiente a?: 1
Coeficiente b?: -3
Coeficiente c?: 2

La ecuación
             2
           1x + -3x + 2 = 0
tiene por soluciones dos raíces reales
x1 = 2.00
x2 = 1.00



Resolución de la ecuación de segundo grado
==========================================
El programa soluciona la ecuación de segundo grado
                  2
                ax  + bx  + c = 0
Introduzca los coeficientes:
Coeficiente a?: 1
Coeficiente b?: 3
Coeficiente c?: 6

La ecuación
             2
           1x + 3x + 6 = 0
tiene por soluciones dos raíces complejas conjugadas
x1 = (-1.50, 1.94i)
x2 = (-1.50, -1.94i)

 ============================================================
 ============================================================ */
