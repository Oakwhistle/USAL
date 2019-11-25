#include <stdio.h>
#include <stdlib.h>
#define presenta_valor(x)   printf(#x " = %d\n", x)

/* Fuente: PRESENTA.C
   Programa: Directivas del preprocesador: operador cadena de caracteres (#)
   Descripción: El operador de cadena de caracteres (#) permite crear una cadena
   de caracteres de salida, desde un operando con prefijo #.

   Así,                 presenta_valor(area)
   es sustituido por    printf("area" " = %d\n", area);
   que es lo mismo que  printf("area = %d\n", area);
*/

int main(void) {
    int area      =    15,
        edad      =    28,
        total     =  1234,
        velocidad =  -345;

     presenta_valor(area);
     presenta_valor(edad);
     presenta_valor(total);
     presenta_valor(velocidad);
     
     system("pause");
     return 0;
}
