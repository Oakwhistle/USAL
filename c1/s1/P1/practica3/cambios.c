#include <stdio.h>
#include <stdlib.h>

/* Fuente: CAMBIOS.C
   Programa: OPERADOR DE CAST
   Descrpción: Se muestra el resultado de un cambio de tipo (cast).
*/


int main(void) {
  int   numero;
  float real;

  printf("\nEscriba un entero (int): ");
  scanf("%d",&numero);

  printf("%d ocupa %d bytes.\n", numero, sizeof(numero));

  printf("(char)numero vale %c, y ocupa %d byte.\n",
	  (char)numero, sizeof((char)numero));

  printf("(long int)numero vale %ld, y ocupa %d bytes.\n",
	  (long int)numero, sizeof((long int)numero));

  printf("(float)numero vale %f, y ocupa %d bytes.\n",
	  (float)numero, sizeof((float)numero));

  printf("(double)numero vale %g, y ocupa %d bytes.\n",
	  (double)numero, sizeof((double)numero));


  printf("\n\n\nEscriba un número real (float): ");
  scanf("%f",&real);

  printf("\n%f ocupa %d bytes.\n\n", real, sizeof(real));

  printf("(char)real vale %c y ocupa %d bytes.\n",
	  (char)real, sizeof((char)real));

  printf("(int)real vale %d y ocupa %d bytes.\n",
	  (int)real, sizeof((int)real));

  printf("(double)real vale %g y ocupa %d bytes.\n",
	  (double)real, sizeof((double)real));

  system ("pause");
  return 0;
}


/* =====================================================================
   Notas - Como vemos esto es una verdadera conversión de tipos (se observa 
           a calcular el tamaño) y no una reinterpretación de sus bits
           como hace Pascal.
         - Se puede pasar de cualquier tipo a cualquier tipo
         - El casting puede tener sentido, o no tenerlo, dependiendo de
           lo que queramos hacer.
   ===================================================================== */






