#include <stdio.h>
#include <stdlib.h>
#define  RADIO 3
#define  VALOR_PI(x)  PI##x
#define  PI1 3.141592
#define  PI2 6.283184


/* Fuente: PI.C
   Programa: Directivas del preprocesador: operador concatenación de caracteres (##)
   Descripción: El operador concatenación de caracteres (##) permite juntar dos
   componentes léxicos y crear un tercer componente léxico.

    Así,                                VALOR_PI(1)
    será sustituido por                 PI1
    y posteriormente por                3.141592
    
    Del mismo modo,                     VALOR_PI(2)
    será sustituido por                 PI2
    y posteriormente por                6.283184

*/


int main(void) {
     float  area, circunferencia;

     printf("\nRadio del círculo: %d\n", RADIO);
     area = VALOR_PI(1)*RADIO*RADIO;
     circunferencia = VALOR_PI(2)*RADIO;

     printf("\nArea círculo= %f", area);
     printf("\nLongitud circunferencia= %f\n", circunferencia);
     
     system("pause");
     return 0;

 }

