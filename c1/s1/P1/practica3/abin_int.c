#include <stdio.h>
#include <stdlib.h>

/* Fuente: ABIN_INT.C
   Programa: Codificaci�n de un entero en binario.
   Descripci�n: Muestra la codificaci�n en binario de un n�mero
   entero que se introduzca por teclado, usando el operador l�gico and a nivel de bit (&).
*/

int main(void)
{
     short i;

     printf("\nIntroduzca un n�mero entero \n" \
	    "y se le presentar� en binario.\n");

     printf("\nTeclee el n�mero entero (int): ");
     scanf("%hd", &i);

     printf("\n");
     printf("N�mero introducido %5d: ", i);

     printf("\n");
     printf("Codificaci�n en binario: ");
     printf("%d", (i & -32768) != 0);
     printf("%d", (i &  16384) != 0);
     printf("%d", (i &  8192 ) != 0);
     printf("%d", (i &  4096 ) != 0);
     printf("%d", (i &  2048 ) != 0);
     printf("%d", (i &  1024 ) != 0);
     printf("%d", (i &  512  ) != 0);
     printf("%d", (i &  256  ) != 0);
     printf("%d", (i &  128  ) != 0);
     printf("%d", (i &  64   ) != 0);
     printf("%d", (i &  32   ) != 0);
     printf("%d", (i &  16   ) != 0);
     printf("%d", (i &  8    ) != 0);
     printf("%d", (i &  4    ) != 0);
     printf("%d", (i &  2    ) != 0);
     printf("%d", (i &  1    ) != 0);

     printf("\n");

     system ("pause");
     return 0;
}

/* ============================================================
   Recordar que en binario:
     -32768 = 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
      16384 = 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
       8192 = 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0
       4096 = 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
       2048 = 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0
       1024 = 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0
        512 = 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0
        256 = 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
        128 = 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0
         64 = 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0
         32 = 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0
         16 = 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
          8 = 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0
          4 = 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0
          2 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0
          1 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

   Estamos aprovechando que el operador relacional != devuelve 0 si falso y 1 si verdadero.
   Imprimimos un 1 (verdadero) si al hacer el and a nivel de bit (&) del n�mero introducido
   con la "m�scara de bits" correspondiente, el resultado no es 0; es decir, el n�mero
   introducido en la posici�n del bit activado de la "m�scara" ten�a un 1.

   ============================================================== */
