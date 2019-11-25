#include <stdio.h>
#include <stdlib.h>

/* Fuente: areamenu_ifelse.c
   Programa: CALCULO DE AREAS DE FICURAS GEOMETRICAS
   Descripci�n: Calcula el �rea de distintas figuras geom�tricas a trav�s de un
   men� de opciones
*/

int main(void) {

/* Declaraciones */
  const float PI = 3.141592;
  float base, altura, ladoa, ladob, radio;
  char opcion;
  float area;

/* Presentaci�n */
  system ("cls");  /* Borrado de la pantalla */

  printf("============================================================\n");
  printf("                     CALCULO DE AREAS                       \n");
  printf("============================================================\n");
  printf("\n");
  printf("        a) De un rect�ngulo       \n");
  printf("        b) De un tri�ngulo        \n");
  printf("        c) De un c�rculo          \n");
  printf("        d) De un trapecio         \n");
  printf("        s) Salir                  \n");
  printf("\n");
  printf("Opci�n?: "); scanf("%c", &opcion);
  printf("\n\n");

/* Petici�n de datos, c�lculos y resultados seg�n la opci�n elegida */


  if (opcion == 'a' || opcion == 'A') { 
       printf("Base del rect�ngulo?: ");   scanf("%f", &base);
       printf("Altura del rect�ngulo?: "); scanf("%f", &altura);
       area = base * altura;
       printf("Area del rect�ngulo: %g\n", area);
  }
  else if (opcion == 'b' || opcion == 'B') { 
            printf("Base del tri�ngulo?: ");   scanf("%f", &base);
            printf("Altura del tri�ngulo?: "); scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("Area del tri�ngulo: %g\n", area);
       }
       else if (opcion == 'c' || opcion == 'C') { 
                 printf("Radio del c�rculo?: ");   scanf("%f", &radio);
                 area = PI * radio * radio;
                 printf("Area del c�rculo: %g\n", area);
            }
            else if (opcion == 'd' || opcion == 'D') { 
                      printf("Altura trapecio?: ");                scanf("%f", &altura);
                      printf("Primer lado paralelo trapecio?: ");  scanf("%f", &ladoa);
                      printf("Segundo lado paralelo trapecio?: "); scanf("%f", &ladob);
                      area = (ladoa + ladob) * (altura / 2);
                      printf("Area del trapecio: %g\n", area);
                 }
                 else if (opcion != 's' && opcion != 'S') 
                           printf("Opci�n %c incorrecta\n", opcion);
                           
 printf("\n\n");
 system ("pause");
 return 0;

} /* Final del programa */
