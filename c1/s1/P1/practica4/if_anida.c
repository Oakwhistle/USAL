#include <stdio.h>
#include <stdlib.h>

/* Fuente: IF_ANIDA.C
   Programa: OBTENER EL MAYOR DE ENTRE TRES VALORES
   Descrpci�n: Presenta el mayor de los tres n�meros que se tecleen.
   Previamente comprueba que los tres n�meros introducidos sean distintos.
   Utiliza una sentencia if-else anidada para proporcionar m�ltiples alternativas.
*/

int main(void) {
   int n1, n2, n3; /* variables de entrada */
   int el_mayor;   /* variable de salida   */

   printf("\n");

   /* Introducci�n de datos */
   puts ("Introduzca tres n�meros enteros y distintos.");
   puts ("El programa le indicar  cual es el mayor de los tres.");
   puts ("");
   printf("Primer  n�mero: "); scanf("%d",&n1);
   printf("Segundo n�mero: "); scanf("%d",&n2);
   printf("Tercer  n�mero: "); scanf("%d",&n3);
   puts("");

   /*Comprobamos que los tres n�meros introducidos son distintos
     y si as� lo fueran procedemos a calcular el mayor de los tres */

   if  ((n1 == n2) || (n1 == n3) || (n2 == n3))
      {
         puts ("Los tres n�meros introducidos NO son distintos.");
         puts ("Ejecute de nuevo el programa y vuelva a introducirlos.");
      }
   else
       {
	 if (n1 > n2)
	    if   (n1 > n3)
		 el_mayor = n1;
	    else el_mayor = n3;
	 else
	    if   (n2 > n3)
		 el_mayor = n2;
	    else el_mayor = n3;

	    printf ("El n�mero mayor de los tres es %d\n", el_mayor);
	};

   printf("\n");
   
   system ("pause");
   return 0;
}


