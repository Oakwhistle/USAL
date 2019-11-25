#include <stdio.h>
#include <stdlib.h>

/* Fuente: PASARSE1.C
   Programa: Representación de números enteros en complemento a 2.
   Descripción: En este programa puede comprobarse que al trabajar en complemento a 2,
   al llegar al último valor positivo si le sumamos un 1 pasamos al primer valor
   negativo, si le sumamos dos pasamos al segundo...
*/

int main(void)
{
  short i=32767; /* En binario 01111111 11111111 */

  printf("%d es el mayor positivo entero corto\n",i);
  printf("sizeof(short): %d\n", sizeof(short));
   
  
  i=i+1;  /* En binario 10000000 00000000 y al se C-2 es el -32768 */
  printf("%hd es el entero anterior + 1\n",i);

  i=i+1;  /* En binario 10000000 00000001 y al se C-2 es el -32767 */
  printf("%hd es el entero anterior + 2\n",i);

  i=i+1;  /* En binario 10000000 00000010 y al se C-2 es el -32766 */
  printf("%hd es el entero anterior + 3\n",i);

  i=i+1;  /* En binario 10000000 00000011 y al se C-2 es el -32765 */
  printf("%hd es el entero anterior + 4\n",i);
  
  system ("pause");
  return 0;
}

