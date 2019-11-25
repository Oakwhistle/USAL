#include <stdio.h>
#include <stdlib.h>

/* Fuente: TECLADO.C
   Programa: IDENTIFICA UN CARACTER DE TECLADO CON SWITCH.
   Descripción: Se pide teclear un carácter y el programa traduce el tipo de carácter
   tecleado, indicándolo con un literal.
   Es un ejemplo de como utilizar una estructura switch, anidada además a sentencias if-else.
*/


int main(void) {

  char caracter;

  printf("\n");

  puts ("Teclee un caracter.");
  puts ("El programa le dirá qué‚ tipo de caracter es el tecleado.");
  puts("");

  printf ("INTRODUZCA CARACTER: ");
  caracter = getchar();

  puts("");

  if  ( (caracter >= 'A') && (caracter <= 'Z') )
      puts("Se ha tecleado una letra mayúscula.");
  else

      if  ( (caracter >= 'a') && (caracter <= 'z') )
	  puts("Se ha tecleado una letra minúscula.");
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
		  case '-' : puts("Se ha tecleado un operador aritmético.");
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
		  case '9' : puts("Se ha tecleado un dígito.");
			     break;

		  default  : puts("Se ha tecleado un símbolo.");

		}; /* final del switch */

  printf("\n");
  
  system ("pause");
  return 0;

}




