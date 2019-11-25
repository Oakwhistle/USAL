#include <stdio.h>
#include <stdlib.h>

/* Fuente: LEE_ESC.C
   Programa: Lectura y escritura de cadenas de caracteres.
   Descripción: Muestra el comportamiento de las funciones scanf(), gets(), printf(), puts().
*/

int main(void) {
    char mensaje1[80], mensaje2[80];

    printf("\n");

 /* Las cadena pueden leerse con scanf o gets */

    printf("Introduzca un mensaje (puede contener varias palabras): \n");
    gets(mensaje1);

    printf("Introduzca un segundo mensaje (sólo puede contener una palabra): \n");
    scanf("%s", mensaje2);

    printf("\n");
    printf("\n");

    printf("Los mensajes introducidos son:\n");

 /* Las cadena pueden escribirse con printf o puts.                */

    printf("%s", mensaje1);
    printf("\n");
    printf(mensaje2);
    printf("\n\nY repetimos el primero.\n");
    puts(mensaje1);

    printf("\n");
    printf("\n");
    
    system ("pause");
    return 0;
}
