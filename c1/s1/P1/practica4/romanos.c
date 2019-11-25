#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define ANIOMIN 1
#define ANIOMAX 3000

/* Fuente: ROMANOS.C
   Programa: TRADUCCIÓN A NUMEROS ROMANOS
   Descripción: Traduce a números romanos un año tecleado en números arábigos
*/

int main(void) {

/* Declaraciones */
   int  num_arabigo;            /* Número arábigo a traducir */
   char num_romano[25] ="";     /* Número traducido a romano.
				            Se inicia a cadena vacía */
   int  unidad, decena, centena, millar;
   int  resto;

/* Presentación */
  system ("cls");  /* Borrado de la pantalla */

  printf("Conversión de años a números romanos\n");
  printf("====================================\n");
  printf("Teclee un año entre %d y %d y el programa ", ANIOMIN, ANIOMAX);
  printf("lo traducirá a números romanos.\n\n");

/* Petición de datos */
  printf("Año?: ");
  scanf("%d", &num_arabigo);

/* Cálculos y resultados */
  if (num_arabigo > ANIOMAX  || num_arabigo < ANIOMIN)
     printf("\nEl año %d tecleado no es correcto.", num_arabigo);
  else
  {
     /* Descomponemos num_arabigo en dígitos */
      millar  = num_arabigo / 1000;   /* unidades de millar */
      resto   = num_arabigo % 1000;
      centena = resto / 100;          /* centenas */
      resto   = resto % 100;
      decena  = resto / 10;           /* decenas */
      unidad  = resto % 10;           /* unidades */


     /* Traducimos las unidades de millar */
      switch (millar) {
	case  0 : break;
	case  1 : strcat(num_romano, "M")   ; break;
	case  2 : strcat(num_romano, "MM")  ; break;
	case  3 : strcat(num_romano, "MMM") ; break;
      }

     /* Traducimos las centenas */
      switch (centena) {
	case  0 : break;
	case  1 : strcat(num_romano, "C")   ; break;
	case  2 : strcat(num_romano, "CC")  ; break;
	case  3 : strcat(num_romano, "CCC") ; break;
	case  4 : strcat(num_romano, "CD")  ; break;
	case  5 : strcat(num_romano, "D")   ; break;
	case  6 : strcat(num_romano, "DC")  ; break;
	case  7 : strcat(num_romano, "DCC") ; break;
	case  8 : strcat(num_romano, "DCCC"); break;
	case  9 : strcat(num_romano, "CM")  ; break;
      }

     /* Traducimos las decenas */
      switch (decena) {
	case  0 : break;
	case  1 : strcat(num_romano, "X")   ; break;
	case  2 : strcat(num_romano, "XX")  ; break;
	case  3 : strcat(num_romano, "XXX") ; break;
	case  4 : strcat(num_romano, "XL")  ; break;
	case  5 : strcat(num_romano, "L")   ; break;
	case  6 : strcat(num_romano, "LX")  ; break;
	case  7 : strcat(num_romano, "LXX") ; break;
	case  8 : strcat(num_romano, "LXXX"); break;
	case  9 : strcat(num_romano, "XC")  ; break;
      }
    
     /* Traducimos las unidades */
      switch (unidad) {
	case  0 : break;
	case  1 : strcat(num_romano, "I")   ; break;
	case  2 : strcat(num_romano, "II")  ; break;
	case  3 : strcat(num_romano, "III") ; break;
	case  4 : strcat(num_romano, "IV")  ; break;
	case  5 : strcat(num_romano, "V")   ; break;
	case  6 : strcat(num_romano, "VI")  ; break;
	case  7 : strcat(num_romano, "VII") ; break;
	case  8 : strcat(num_romano, "VIII"); break;
	case  9 : strcat(num_romano, "IX")  ; break;
      }

      printf("\nEl año %d en romano se escribe %s\n",
                num_arabigo, num_romano);

  } /* Fin del if */
  printf("\n");  
  system ("pause");
  return 0;

}
