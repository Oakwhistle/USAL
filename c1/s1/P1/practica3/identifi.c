#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

/* Fuente: IDENTIFI.C
   Programa GENERACION IDENTIFICACIÓN ALFABETICA
   Pide el nombre y los dos apellidos de una persona y
   genera una identificación con la primera letra en
   mayúsculas de apellido1 apellido2 nombre.
   Por ejemplo, si se tecleara: pedro martín bueno
   se generará una identificación como: MBP
*/

int main(void) {

/* Declaraciones */
  char nombre[80];     /* Nombre de la persona  */
  char apell1[80];     /* Apellido 1 de la persona  */
  char apell2[80];     /* Apellido 2 de la persona  */
  char id_nombre,
  id_apell1,
  id_apell2;    /* Primeras letras de nombre, apellido1, apellido2 */

/* Presentación */
  system("cls");  /* Borrado de la pantalla */

  printf("Generación de identificación alfabética\n");
  printf("========================================\n\n");
  printf("A partir del nombre y los dos apellidos de una persona genera\n");
  printf("una identificación con las primeras letras de apellido1, \n");
  printf("apellido2 y nombre, todas ellas en mayúsculas.\n");
  printf("\n\n");

/* Petición de datos */
  printf("Introduzca el nombre: ");
  gets(nombre);
  printf("Introduzca el primer apellido: ");
  gets(apell1);
  printf("Introduzca el segundo apellido: ");
  gets(apell2);

/* ===========> 
   La lectura de las tres anteriores variables es más conveniente hacerla
   con la función gets(), que con la función scanf(), dado que con gets() 
   podemos leer nombres compuestos (con espacios en blanco intermedios), y 
   sin embargo, directamente con scanf() no es posible leer cadenas de
   caracteres que incluyan espacios en blanco (sin utilizar especificadores
   de formato especiales).
*/


/* Cálculos */
   /* Podremos acceder a cualquier carácter individual de una cadena
   *  de caracteres a través del nombre de la cadena y el índice que
   *  indica la posición del carácter dentro de la cadena, sabiendo que
   *  el primer carácter comienza con el índice 0.
   *
   *  La función toupper() (ctype.h) convierte a mayúsculas un carácter.
   */

   id_nombre = toupper(nombre [0]);
   id_apell1 = toupper(apell1 [0]);
   id_apell2 = toupper(apell2 [0]);


/* Resultados */
   printf("\n\n");
   printf("Su nombre..........: %s %s, %s\n", apell1, apell2, nombre);
   printf("Su identificación..: %c%c%c\n", id_apell1, id_apell2, id_nombre);

   system ("pause");
   return 0;
}
