#include <stdio.h>
#include <stdlib.h>

/* Fuente: SCANF2.C
   Programa: Lactura de varios datos con scanf().
   Descripción: Muestra la forma de leer varios datos en una misma línea de entrada
   
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
  printf("La fecha introducida es => %d del mes %c del año %d \n\n", dd, mes, aa);


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

   En aquellos casos en que la cadena de control de scanf() esté constituida por
   caracteres que no sea un carácter separador ni un especificador de formato,
   dichos caracteres serán detectados en la línea de entrada y descartados.
   Es una forma de leer datos con un determinado formato.

   Si en la sentencia 
               scanf("%d/%d/%d", &dd, &mm, &aa);
   la entrada no coincidiera con los caracteres de la cadena de control (es decir,
   la entrada debe de ser 25/12/1993, incluyendo las barras), se terminará de forma
   prematura la ejecución de scanf(), quedando tal vez algunas variables con valores
   indeterminados no deseados.


   Aunque la función scanf() permite la introducción de varios datos en la misma
   línea de entrada, esto no es una técnica habitual en programación.
   Un hábito de buen estilo de programación es realizar la lectura de los datos
   de entrada de uno en uno y además, siempre acompañando a cada lectura de datos
   de un rótulo por delante que especifique claramente al usuario el dato que
   está introduciendo.

   Es decir, si tenemos que leer tres datos como los últimos tratados en el presente 
   programa, lo más correcto será realizarlo de la siguiente forma:

 
       ...
       ...
       printf("Introduzca una fecha (dd/mm/aaaa) \n");
       printf("Por ejemplo 25/12/1993 \n");
       printf("Introduzca el día (dd) => ");
       scanf("%d", &dd);
       printf("Introduzca el mes (mm) => ");
       scanf("%d", &mm);
       printf("Introduzca el año (aaaa) => ");
       scanf("%d", &aa);
       ...
       ...

   ------------------------------------------------------------------------------ */
