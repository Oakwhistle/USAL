#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

/* Fuente: IDENTIFI.C
   Programa GENERACION IDENTIFICACI�N ALFABETICA
   Pide el nombre y los dos apellidos de una persona y
   genera una identificaci�n con la primera letra en
   may�sculas de apellido1 apellido2 nombre.
   Por ejemplo, si se tecleara: pedro mart�n bueno
   se generar� una identificaci�n como: MBP
*/

int main(void) {

/* Declaraciones */
  char nombre[80];     /* Nombre de la persona  */
  char apell1[80];     /* Apellido 1 de la persona  */
  char apell2[80];     /* Apellido 2 de la persona  */
  char id_nombre,
  id_apell1,
  id_apell2;    /* Primeras letras de nombre, apellido1, apellido2 */

/* Presentaci�n */
  system("cls");  /* Borrado de la pantalla */

  printf("Generaci�n de identificaci�n alfab�tica\n");
  printf("========================================\n\n");
  printf("A partir del nombre y los dos apellidos de una persona genera\n");
  printf("una identificaci�n con las primeras letras de apellido1, \n");
  printf("apellido2 y nombre, todas ellas en may�sculas.\n");
  printf("\n\n");

/* Petici�n de datos */
  printf("Introduzca el nombre: ");
  gets(nombre);
  printf("Introduzca el primer apellido: ");
  gets(apell1);
  printf("Introduzca el segundo apellido: ");
  gets(apell2);

/* ===========> 
   La lectura de las tres anteriores variables es m�s conveniente hacerla
   con la funci�n gets(), que con la funci�n scanf(), dado que con gets() 
   podemos leer nombres compuestos (con espacios en blanco intermedios), y 
   sin embargo, directamente con scanf() no es posible leer cadenas de
   caracteres que incluyan espacios en blanco (sin utilizar especificadores
   de formato especiales).
*/


/* C�lculos */
   /* Podremos acceder a cualquier car�cter individual de una cadena
   *  de caracteres a trav�s del nombre de la cadena y el �ndice que
   *  indica la posici�n del car�cter dentro de la cadena, sabiendo que
   *  el primer car�cter comienza con el �ndice 0.
   *
   *  La funci�n toupper() (ctype.h) convierte a may�sculas un car�cter.
   */

   id_nombre = toupper(nombre [0]);
   id_apell1 = toupper(apell1 [0]);
   id_apell2 = toupper(apell2 [0]);


/* Resultados */
   printf("\n\n");
   printf("Su nombre..........: %s %s, %s\n", apell1, apell2, nombre);
   printf("Su identificaci�n..: %c%c%c\n", id_apell1, id_apell2, id_nombre);

   system ("pause");
   return 0;
}
