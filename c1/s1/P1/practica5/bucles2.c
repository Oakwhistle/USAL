#include <stdio.h>
#include <stdlib.h>
#define  LIMINF 32
#define  LIMSUP 225
#define  LIMITE_a 'a'
#define  LIMITE_A 'A'
#define  LIMITE_z 'z'
#define  LIMITE_Z 'Z'

/* Fuente: BUCLES2.C
   Programa: EJEMPLOS DE BUCLES CON WHILE, DO WHILE Y FOR CON VARIBLES CARACTER
   Descripci�n: Presenta diversos bucles controlador con variables char:
     - Presentaci�n del alfabeto en may�sculas con while, do while y for
     - Presentaci�n del alfabeto en min�sculas y en orden inverso, con while,
       do while y for
     - Presentaci�n de los caracteres ASCII entre el 32 y el 255, mostrando
        c�digo y s�mbolo, y utilizando bucles while, do while y for
*/


int main(void) {
     char           letra;
     unsigned short letra2;

/* -------------------------------------------------- */
/* -- Presenta el alfabeto en may�sculas.         --- */
/* -------------------------------------------------- */
     system ("cls");  /* Borrado de pantalla */
     puts("Presenta el alfabeto en may�sculas.");
     puts("");

     /* --> WHILE */
     puts("Realizado con un bucle WHILE:");
     letra = LIMITE_A;
     while (letra <= LIMITE_Z) {
        printf("%5c", letra);	
        letra++;
     }

     printf("\n\n");
     system ("pause");


     /* --> DO WHILE */
     puts("Realizado con un bucle DO WHILE:");
     letra = LIMITE_A;
     do {
        printf("%5c", letra);	
        letra++;
     } while (letra <= LIMITE_Z);

     printf("\n\n");
     system ("pause");


     /* --> FOR */
     puts("Realizado con un bucle FOR:");
     for (letra = LIMITE_A; letra <= LIMITE_Z; letra++)
       printf("%5c", letra);	

     printf("\n\n");
     system ("pause");


/* -------------------------------------------------- */
/* -- Presenta el alfabeto en min�sculas y en orden   */
/* -- descendente                                     */
/* -------------------------------------------------- */
     system ("cls");  /* Borrado de pantalla */
     puts("Presenta el alfabeto en min�sculas y en orden descendente.");
     puts("");
     
     /* --> WHILE */
     puts("Realizado con un bucle WHILE:");

     letra = LIMITE_z;
     while (letra >= LIMITE_a) {
        printf("%5c", letra);	
        letra--;
     }

     printf("\n\n");
     system ("pause");


     /* --> DO WHILE */
     puts("Realizado con un bucle DO WHILE:");
     letra = LIMITE_z;
     do {
        printf("%5c", letra);	
        letra--;
     } while (letra >= LIMITE_a);

     printf("\n\n");
     system ("pause");


     /* --> FOR */
     puts("Realizado con un bucle FOR:");
     for (letra = LIMITE_z; letra >= LIMITE_a; letra--)
       printf("%5c", letra);

     printf("\n\n");
     system ("pause");


/* -------------------------------------------------- */
/* -- Presenta los caracteres ASCII entre el 32 y el  */
/* -- 255, mostrando c�digo y s�mbolo.                */
/* -------------------------------------------------- */
     system ("cls");  /* Borrado de pantalla */
     printf("Presenta la tabla ASCII entre el %d y el %d, mostrando s�mbolo y (c�digo):\n", LIMINF, LIMSUP);
     puts("");
     
     /* --> WHILE */
     puts("Realizado con un bucle WHILE:");

     letra2 = LIMINF;
     while (letra2 <= LIMSUP) {
        printf("%2c (%3d)", letra2, letra2);	
        letra2++;
     }

     printf("\n");
     system ("pause");


     /* --> DO WHILE */
     puts("Realizado con un bucle DO WHILE:");
     letra2 = LIMINF;
     do {
        printf("%2c (%3d)", letra2, letra2);	
        letra2++;
     } while (letra2 <= LIMSUP);

     printf("\n");
     system ("pause");


     /* --> FOR */
     puts("Realizado con un bucle FOR:");
     for (letra2 = LIMINF; letra2 <= LIMSUP; letra2++)
	    printf("%2c (%3d)", letra2, letra2);

    printf("\nPulse INTRO para terminar");
    fflush(stdin);  /* Vaciado del buffer de teclado */
    getchar();
    return 0;
 }
