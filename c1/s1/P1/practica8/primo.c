/* Fuente: PRIMO.C
   Programa: NUMEROS PRIMOS
   Descripción: Determina si un número entero positivo es primo o no. 
   Para ello utiliza una función que recibe por valor el número a investigar y 
   devuelve un valor "lógico" indicando que el número es o no es primo.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* -- prototipo de la función -- */
int esprimo (long);

int main (void){
  long  num;
 
  system ("cls");
  printf("Números primos \n");
  printf("============== \n");

  do
  {  printf("\nIntroduzca un número entero positivo: ");
     scanf("%ld", &num);
  } while (num <= 0);

  if (esprimo(num))
      printf("\n%ld es primo\n", num);
  else printf("\n%ld NO es primo\n", num);
  
  printf ("\n\n");
  system ("pause");
  return 0;
}


int esprimo(long n) {
  const int CIERTO = 1;
  const int FALSO = 0;

  int primo = CIERTO;
  long divisor = 2;
  float limite;

  limite = sqrt(n);

  while (primo && divisor <= limite) { 
      if (n % divisor == 0)
          primo = FALSO;
      divisor++;
    }
  
  return (primo);

}
