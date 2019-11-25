#include <stdio.h>
#include <stdlib.h>

/* Fuente: OPEDESPLA.C
   Programa: Operadores de desplazamiento de bits
   Descripción: Muestra el comportamiento de los operadores de
   desplazamiento de bits >> y << sobre una variable de dos bytes.
*/

int main(void) {
     short i = 128;

     printf("\nOPERADOR DESPLAZAMIENTO DE BITS >>:");
     printf("\nValor de i: %hd", i);
     printf("\n>> 1 desplazamiento.  i: %hd", i = i>>1);
     printf("\n>> 2 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 3 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 4 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 5 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 6 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 7 desplazamientos. i: %hd", i = i>>1);
     printf("\n>> 8 desplazamientos. i: %hd", i = i>>1);

     printf("\nOPERADOR DESPLAZAMIENTO DE BITS <<:");
     i = 128;
     printf("\nValor de i: %hd", i);
     printf("\n<< 1 desplazamiento.  i: %hd", i = i<<1);
     printf("\n<< 2 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 3 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 4 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 5 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 6 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 7 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 8 desplazamientos. i: %hd", i = i<<1);
     printf("\n<< 9 desplazamientos. i: %hd", i = i<<1);
     printf("\n\n");
    
     system ("pause");
     return 0;
}

/* ============================================================
   Recordar que en binario:
          128 = 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0
   >>1     64 = 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0
   >>1     32 = 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0
   >>1     16 = 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
   >>1      8 = 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0
   >>1      4 = 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0
   >>1      2 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0
   >>1      1 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
   >>1      0 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
   
          128 = 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0
   <<1    256 = 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
   <<1    512 = 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0
   <<1   1024 = 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0
   <<1   2048 = 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0
   <<1   4096 = 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
   <<1   8192 = 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
   <<1  16384 = 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
   <<1 -32768 = 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
   <<1      0 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

   ============================================================== */
