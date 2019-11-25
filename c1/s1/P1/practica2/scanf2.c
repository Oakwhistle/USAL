#include <stdio.h>
#include <stdlib.h>

/* Fuente: SCANF2.C
   Programa: Lactura de varios datos con scanf().
   Descripci�n: Muestra la forma de leer varios datos en una misma l�nea de entrada
   
*/


int main(void)
{
  char mes;
  double v;
  int dd, mm, aa;



  printf("Introduzca un numero real (double) => ");
  scanf("%lf", &v);
  printf("El valor es => %f \n\n", v);


  printf("Introduzca una fecha ( dd(int) m(char) aaaa(int) ) \n");
  printf("Por ejemplo 25 D 1993 \n");
  printf("=> ");
  scanf("%d %c %d", &dd, &mes, &aa);
  printf("La fecha introducida es => %d del mes %c del a�o %d \n\n", dd, mes, aa);


  printf("Introduzca una fecha (dd/mm/aaaa) \n");
  printf("Por ejemplo 25/12/1993 \n");
  printf("=> ");
  scanf("%d/%d/%d", &dd, &mm, &aa);
  printf("La fecha introducida es => %d-%d-%d \n", dd, mm, aa);

  system ("pause");
  return 0;
}


/* ------------------------------------------------------------------------------

   =====> COMENTARIOS AL PROGRAMA

   En aquellos casos en que la cadena de control de scanf() est� constituida por
   caracteres que no sea un car�cter separador ni un especificador de formato,
   dichos caracteres ser�n detectados en la l�nea de entrada y descartados.
   Es una forma de leer datos con un determinado formato.

   Si en la sentencia 
               scanf("%d/%d/%d", &dd, &mm, &aa);
   la entrada no coincidiera con los caracteres de la cadena de control (es decir,
   la entrada debe de ser 25/12/1993, incluyendo las barras), se terminar� de forma
   prematura la ejecuci�n de scanf(), quedando tal vez algunas variables con valores
   indeterminados no deseados.


   Aunque la funci�n scanf() permite la introducci�n de varios datos en la misma
   l�nea de entrada, esto no es una t�cnica habitual en programaci�n.
   Un h�bito de buen estilo de programaci�n es realizar la lectura de los datos
   de entrada de uno en uno y adem�s, siempre acompa�ando a cada lectura de datos
   de un r�tulo por delante que especifique claramente al usuario el dato que
   est� introduciendo.

   Es decir, si tenemos que leer tres datos como los �ltimos tratados en el presente 
   programa, lo m�s correcto ser� realizarlo de la siguiente forma:

 
       ...
       ...
       printf("Introduzca una fecha (dd/mm/aaaa) \n");
       printf("Por ejemplo 25/12/1993 \n");
       printf("Introduzca el d�a (dd) => ");
       scanf("%d", &dd);
       printf("Introduzca el mes (mm) => ");
       scanf("%d", &mm);
       printf("Introduzca el a�o (aaaa) => ");
       scanf("%d", &aa);
       ...
       ...

   ------------------------------------------------------------------------------ */
