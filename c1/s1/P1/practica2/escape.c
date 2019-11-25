#include <stdio.h>
#include <stdlib.h>

/* Fuente: ESCAPE.C
   Programa: Secuencias de escape en C
   Descripción: Muestra el comportamiento de las secuencias de escape en C.
*/


int main(void) {
     printf("Avanzo tres líneas \n\n\ny escribo. \n");

     printf("Escribo una regla en pantalla para comprobar el tabulador\n");
     printf("         1         2         3         4         5 \n");
     printf("12345678901234567890123456789012345678901234567890 \n");
     printf("Compra\tVenta\tTotal\n");
     printf("1.100\t345\t755\n");
     printf("1.520\t786\t734\n");


     printf("ABCDEFG\b12345 \n");
     /* La letra G no aparece pues el dígito 1 se sobreescribe encima,
        debido a la secuencia de escape de retroceso \b
     */


     printf("RSTUVWXYZ\r12345\n");
     /* Los dígitos se sobreescriben sobre las primeras letras
        impresas en pantalla, debido a la secuencia de retroceso
        de carro \r
     */


     printf("\"El Quijote de la \'Mancha\' de Cervantes\" \n");
     /* La secuencia \" permite imprimir las dobles comillas
        La secuencia \' permite imprimir la comilla simple
     */


     printf("\\Madrid\\ \n");
     /* Para imprimir el símbolo \ se dobla" el mismo */

     printf("\x41 \n");  /* Código ASCII en hexa: 41 --> 65 --> A */
     printf("\x4b \n");  /* Código ASCII en hexa: 4b --> 75 --> K */
     printf("\x4B \n");  /* Código ASCII en hexa: 4B --> 75 --> K */

     printf("\51 \n");   /* Código ASCII en octal:  51 -->  41 --> ) */
     printf("\145 \n");  /* Código ASCII en octal: 145 --> 101 --> e */

     printf("\a\a");       /* Suena pitido 2 veces */

     system ("pause");
     return 0;
}
