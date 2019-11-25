/* Fuente: PERFECTO.C
   Programa: NUMEROS PERFECTOS
   Descripci�n: Presenta los 4 primeros n�meros perfectos.
   Un n�mero se dice que es perfecto si es igual a la suma se todos sus divisores, sin incluirse
   a s� mismo.
   El primer n�mero perfecto es el 6, ya que la suma de sus divisores 1, 2, 3 es igual a 6.
*/

#include <stdio.h>
#include <stdlib.h>
#define LIMITE 4UL

/* Prototipos */
int perfecto (unsigned long);
void presentacion (void);

int main(void) {
 unsigned long numero, cuantos;

 presentacion();

 cuantos = 0;
 numero = 1;
 while (cuantos < LIMITE)
 {  if (perfecto(numero))
       { printf("%8lu", numero);
	 cuantos++;
       }
    numero++;
  }
  
  printf ("\n\n");
  system ("pause");
  return 0;
}

int perfecto(unsigned long n) {
   unsigned long acu = 0;
   unsigned long j;

   for (j=1; j<n; j++)
      if (n % j == 0)
	  acu += j;
   return (acu==n);
}

 
void presentacion (void) {
  system ("cls");
  puts("N�meros perfectos");
  puts("=================");
  puts("");
  printf("El programa le presentar� los %lu primeros n�meros perfectos.", LIMITE);
  puts("");
  puts("");
}
