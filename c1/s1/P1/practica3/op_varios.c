#include <stdio.h>
#include <stdlib.h>

/* op_varios.c */
/*

Programa: Principales operadores en C.

Desarrollado por: Pr cticas de programaci¢n.

Descripci¢n: Muestra el comportamiento de los operadores de
	     relaci¢n,
	     l¢gicos,
	     asignaci¢n,
	     unarios.

*/

int main(void)
{
     int i, j;

     puts("\nIntroduzca dos n£meros enteros:");
     printf("\nPrimer n£mero (int)  ===> ");
     scanf("%d", &i);
     printf("\nSegundo n£mero (int) ===> ");
     scanf("%d", &j);


     printf("\nOPERADORES DE RELACION:");
     printf("\n%d == %d es %d", i, j, i == j);
     printf("\n%d != %d es %d", i, j, i != j);
     printf("\n%d <= %d es %d", i, j, i <= j);
     printf("\n%d >= %d es %d", i, j, i >= j);
     printf("\n%d >  %d es %d", i, j, i >  j);
     printf("\n%d <  %d es %d", i, j, i <  j);



     printf("\n\nOPERADORES LOGICOS:");
     printf("\n%d && %d es %d", i, j, i && j);
     printf("\n%d || %d es %d", i, j, i || j);
     printf("\n!%d es %d", i, !i);
     printf("\n!%d es %d", j, !j);


     printf("\n\nOPERADORES DE ASIGNACION:");
     printf("\ni = j (i = %d) es %d", j, i = j);
     printf("\n");

     printf("\n\nOPERADORES UNARIOS:");
     printf("\ni vale %d", i);
     printf("\n++i es %d", ++i);
     printf("\ni++ es %d", i++);
     printf("\ni vale ahora %d", i);

     printf("\n");
     printf("\nj vale %d", j);
     printf("\nj-- es %d", j--);
     printf("\nj vale ahora %d", j);
     printf("\n--j es %d", --j);
     printf("\nj vale ahora %d", j);


     printf("\n");
     
     system("pause");

return 0;

/*
En C, TODA ASIGNACION TIENE UN VALOR, que es precisamente el valor que
tome el rvalue (el valor de la expresion de la derecha, despues de ser
evaluada).
Por esta raz¢n,
     printf("\ni = j (i = %d) es %d", j, i = j);
tiene sentido.
Esto no se puede hacer en Pascal, porque la asignacion carece de valor.
*/


}
