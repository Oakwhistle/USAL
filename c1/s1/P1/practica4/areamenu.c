#include <stdio.h>
#include <stdlib.h>

/* Fuente: areamenu.c
   Programa: CALCULO DE AREAS DE FICURAS GEOMETRICAS
   Descripción: Calcula el área de distintas figuras geométricas a través de un
   menú de opciones
*/

int main(void) {

/* Declaraciones */
  const float PI = 3.141592;
  float base, altura, ladoa, ladob, radio;
  char opcion;
  float area;

/* Presentación */
  system ("cls");  /* Borrado de la pantalla */

  printf("============================================================\n");
  printf("                     CALCULO DE AREAS                       \n");
  printf("============================================================\n");
  printf("\n");
  printf("        a) De un rectángulo       \n");
  printf("        b) De un triángulo        \n");
  printf("        c) De un círculo          \n");
  printf("        d) De un trapecio         \n");
  printf("        s) Salir                  \n");
  printf("\n");
  printf("Opción?: "); scanf("%c", &opcion);
  printf("\n\n");

/* Petición de datos, cálculos y resultados según la opción elegida */
switch (opcion) {
   case 'a': 
   case 'A': 
       printf("Base del rectángulo?: ");   scanf("%f", &base);
       printf("Altura del rectángulo?: "); scanf("%f", &altura);
       area = base * altura;
       printf("Area del rectángulo: %g\n", area);
       break;
 
   case 'b': 
   case 'B': 
       printf("Base del triángulo?: ");   scanf("%f", &base);
       printf("Altura del triángulo?: "); scanf("%f", &altura);
       area = (base * altura) / 2;
       printf("Area del triángulo: %g\n", area);
       break;
 
   case 'c': 
   case 'C': 
       printf("Radio del círculo?: ");   scanf("%f", &radio);
       area = PI * radio * radio;
       printf("Area del círculo: %g\n", area);
       break;

   case 'd': 
   case 'D': 
       printf("Altura trapecio?: ");                scanf("%f", &altura);
       printf("Primer lado paralelo trapecio?: ");  scanf("%f", &ladoa);
       printf("Segundo lado paralelo trapecio?: "); scanf("%f", &ladob);
       area = (ladoa + ladob) * (altura / 2);
       printf("Area del trapecio: %g\n", area);
       break;
  
   case 's': 
   case 'S': 
          /* Si el usuario teclea la letra s se sale sin hacer nada */
       break;

   default: 
       printf("Opción %c incorrecta\n", opcion);

 } /* Final de switch */
 
 printf("\n\n");
 system ("pause");
 return 0;

} /* Final del programa */
