#include <stdio.h>
#include <stdlib.h>
#define  RADIO 3
#define  VALOR_PI(x)  PI##x
#define  PI1 3.141592
#define  PI2 6.283184


/* Fuente: PI.C
   Programa: Directivas del preprocesador: operador concatenaci�n de caracteres (##)
   Descripci�n: El operador concatenaci�n de caracteres (##) permite juntar dos
   componentes l�xicos y crear un tercer componente l�xico.

    As�,                                VALOR_PI(1)
    ser� sustituido por                 PI1
    y posteriormente por                3.141592
    
    Del mismo modo,                     VALOR_PI(2)
    ser� sustituido por                 PI2
    y posteriormente por                6.283184

*/


int main(void) {
     float  area, circunferencia;

     printf("\nRadio del c�rculo: %d\n", RADIO);
     area = VALOR_PI(1)*RADIO*RADIO;
     circunferencia = VALOR_PI(2)*RADIO;

     printf("\nArea c�rculo= %f", area);
     printf("\nLongitud circunferencia= %f\n", circunferencia);
     
     system("pause");
     return 0;

 }

