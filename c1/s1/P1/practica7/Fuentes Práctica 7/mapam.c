#include <stdio.h>
#include <stdlib.h>

/* Fuente: MAPAM.C
   Programa: MAPA DE MEMORIA
   Descripción: Presenta el mapa de memoria de una declaración de variables
*/

int main(void) {
   double num = 52.75;
   float tab[] = {1.5, 2.5 ,3.5};
   double *p = &num;
   char  msg[]= "HOLA";
 
 
   printf("      DIRECCION TAMAÑO  VALOR \n");
   printf("      --------- ------ ------ \n");
 
   printf("num    %6p %6d %8.2lf \n", &num, sizeof(num), num);
   
   printf("tab[2] %6p %6d %8.2f  \n", &tab[2], sizeof(tab[2]), tab[2]);
   printf("tab[1] %6p %6d %8.2f  \n", &tab[1], sizeof(tab[1]), tab[1]);
   printf("tab[0] %6p %6d %8.2f  \n", &tab[0], sizeof(tab[0]), tab[0]);
 
   printf("p      %6p %6d %8p    \n", &p, sizeof(p), p);

   printf("msg[4] %6p%7d%6c-%2d\n", &msg[4], sizeof(msg[4]), msg[4], msg[4]);
   printf("msg[3] %6p%7d%6c-%2d\n", &msg[3], sizeof(msg[3]), msg[3], msg[3]);
   printf("msg[2] %6p%7d%6c-%2d\n", &msg[2], sizeof(msg[2]), msg[2], msg[2]);
   printf("msg[1] %6p%7d%6c-%2d\n", &msg[1], sizeof(msg[1]), msg[1], msg[1]);
   printf("msg[0] %6p%7d%6c-%2d\n", &msg[0], sizeof(msg[0]), msg[0], msg[0]);

   system ("pause");
   return 0;
}
