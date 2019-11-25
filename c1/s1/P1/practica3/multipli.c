#include <stdio.h>
#include <stdlib.h>

/* Fuente: MULTIPLI.C
   Programa: MULTIPLICA DOS NUMEROS ENTEROS DE HASTA 3 CIFRAS
   Descripción: El programa pide dos numeros enteros positivos de
   hasta tres cifras, y representa su producto de la forma:
              325
              426
          --------
             1950
             650
           1300
          --------
           138450

   Sirve este programa como presentación de un ejemplo de uso del operador
   de casting y de los especificadores de longitud mínima de campo y número
   de decimales para la función printf.
*/


int main(void) {
   unsigned short int  factor_1, factor_2;
   unsigned short int  unidad, decena, centena;
   unsigned long producto;
   unsigned short int  temporal;

   printf("El programa le pedirá dos números enteros de hasta 3 cifas \n");
   printf("y le mostrará su producto formateado en pantalla.          \n");
   printf("\n");

   printf("Introduzca el primer factor : ");
   scanf("%hu", &factor_1);
   printf("\n");

   printf("Introduzca el segundo factor : ");
   scanf("%hu", &factor_2);
   printf("\n");

   /* Descomponemos Factor_2 en Unidades, Decenas y Centenas */
   centena  = factor_2 / 100;
   temporal = factor_2 % 100;

   decena   = temporal / 10;
   unidad   = temporal % 10;


   printf("\n");

   printf("%20hu\n", factor_1);
   printf("%16c%4hu\n", 'x', factor_2);
   printf("%21s\n", "-------");

   printf("%20hu\n", unidad * factor_1);

   printf("%19hu\n", decena * factor_1);

   printf("%18hu\n", centena * factor_1);

   printf("%21s\n", "----------");

   producto =  factor_1 * factor_2;

   printf("%20lu\n", producto);
   printf("\n", producto);
  
   system ("pause");
   return 0;
}




