/* Fuente: VISIBLE.C
   Programa: VISIBILIDAD DE UNA VARIABLE GLOBAL CON UNA LOCAL CON EL MISMO NOMBRE
   Descripción: Mediante este programa se comprueba que, como era de esperar, dentro de una 
   función, la variable local prevalece sobre otra variable global con su mismo nombre. 
*/

#include <stdio.h>
#include <stdlib.h>

void funcion_una(void);
void funcion_dos(void);

char mensaje[] = "VARIABLE GLOBAL"; /* Variable global */

int main(void) {
   char mensaje[] = "VARIABLE LOCAL A MAIN"; /* Variable local a main */

   funcion_una();
   funcion_dos();
   puts  ("Estoy en \"main\"");
   puts  ("   Tiene definida una variable local \"mensaje\"");
   printf("   El valor de la variable \"mensaje\" es: %s\n", mensaje);
   puts  ("   La variable \"mensaje\" utilizada es la local a main");
   puts  ("");
   
   system ("pause");
   return 0;
}


void funcion_una(void) {
   puts  ("Estoy en \"funcion_una\"");
   puts  ("   NO tiene definida una variable local \"mensaje\"");
   printf("   El valor de la variable \"mensaje\" es: %s\n", mensaje);
   puts  ("   La variable \"mensaje\" utilizada es la global");
   puts  ("");
}


void funcion_dos(void) {
   char mensaje[] = "VARIABLE LOCAL A FUNCION_DOS"; /* Variable local a funcion_dos */

   puts  ("Estoy en \"funcion_dos\"");
   puts  ("   Tiene definida una variable local \"mensaje\"");
   printf("   El valor de la variable \"mensaje\" es: %s\n", mensaje);
   puts  ("   La variable \"mensaje\" utilizada es la local a funcion_dos");
   puts  ("");
}

