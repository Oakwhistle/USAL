#include <stdio.h>
#include <stdlib.h>

/* Fuente: TABLAV.C
   Programa: Tabla de verdad de los operadores lógicos.
   Descrpción: Muestra la tabla de verdad de los operadores lógicos:
	         NOT (!)
	         AND (&&)
	         OR  (||)
*/

int main(void)
{
     puts  ("\nOPERADOR LOGICO NOT (!):");
     printf("!0 = %d\n", !0);
     printf("!1 = %d\n", !1);

     puts  ("\nOPERADOR LOGICO AND (&&):");
     printf("0 && 0 = %d\n", 0 && 0);
     printf("0 && 1 = %d\n", 0 && 1);
     printf("1 && 0 = %d\n", 1 && 0);
     printf("1 && 1 = %d\n", 1 && 1);

     puts  ("\nOPERADOR LOGICO OR (||):");
     printf("0 || 0 = %d\n", 0 || 0);
     printf("0 || 1 = %d\n", 0 || 1);
     printf("1 || 0 = %d\n", 1 || 0);
     printf("1 || 1 = %d\n", 1 || 1);

     system ("pause");
     return 0;
}
