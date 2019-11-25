#include <stdio.h>
#include <stdlib.h>

/* Fuente: TECLADO.C
   Programa: IDENTIFICA UN CARACTER DE TECLADO CON SWITCH.
   Descripci�n: Se pide teclear un car�cter y el programa traduce el tipo de car�cter
   tecleado, indic�ndolo con un literal.
   Es un ejemplo de como utilizar una estructura switch, anidada adem�s a sentencias if-else.
*/


int main(void) {

  char caracter;

  printf("\n");

  puts ("Teclee un caracter.");
  puts ("El programa le dir� qu� tipo de caracter es el tecleado.");
  puts("");

  printf ("INTRODUZCA CARACTER: ");
  caracter = getchar();

  puts("");

  if  ( (caracter >= 'A') && (caracter <= 'Z') )
      puts("Se ha tecleado una letra may�scula.");
  else

      if  ( (caracter >= 'a') && (caracter <= 'z') )
	  puts("Se ha tecleado una letra min�scula.");
      else

	  if   ( (caracter >= 0) && (caracter <= 31) )
	       puts("Se ha tecleado un caracter de control.");
	  else
		switch (caracter)
		{
		  case '=' : puts("Se ha tecleado un signo igual.");
			     break;

		  case '*' :
		  case '/' :
		  case '+' :
		  case '-' : puts("Se ha tecleado un operador aritm�tico.");
			     break;

		  case '>' :
		  case '<' : puts("Se ha tecleado un operador relacional.");
			     break;

		  case '0' :
		  case '1' :
		  case '2' :
		  case '3' :
		  case '4' :
		  case '5' :
		  case '6' :
		  case '7' :
		  case '8' :
		  case '9' : puts("Se ha tecleado un d�gito.");
			     break;

		  default  : puts("Se ha tecleado un s�mbolo.");

		}; /* final del switch */

  printf("\n");
  
  system ("pause");
  return 0;

}




