#include <stdio.h>
#include <stdlib.h>
#define  NMAX 11

/* Fuente: bucles1.c
   Programa: EJEMPLOS DE BUCLES CON WHILE, DO WHILE Y FOR
   Descripci�n: Presenta diversos bucles realizados con las tres
   estructuras repetitivas:
   - Validaciones de datos de entrada con do while
   - Presentaci�n de los primeros 100 n�meros naturales con while, do while y for
   - Presentaci�n de los n�meros naturales entre limite y 1 en orden descendente,
     y su suma, con while y for
   - Presentaci�n de los n�meros impares entre limite y 1, en orden descendente,
     indicando cuantos hay y su suma, con while y for
   - Presentaci�n de los n�meros m�ltiplos de 11 entre 1 y l�mite, indicando
     cuantos hay, su suma y su producto, con while y for
*/

int main (void) {
     int    num;
     int    limite;
     long   suma;
     double producto;
     int    cuantos;

/* -------------------------------------------------- */
/* -- Presenta los 100 primeros n�meros naturales --- */
/* -------------------------------------------------- */
     puts("Se presentan los primeros 100 n�meros naturales.");
     puts("");
     
     /* --> WHILE */
     puts("Realizado con un bucle WHILE controlado por contador:");

     suma = 0;
     num  = 0;
     
     while (++num <= 100) {
	    printf("%5d", num);
	    suma += num;
     }
     
     printf("\nLa suma con WHILE vale %ld", suma);
     printf("\n\n");
     system ("pause");


     /* --> DO WHILE */
     puts("Realizado con un bucle DO WHILE controlado por contador:");

     suma = 0;
     num  = 0;
     
     do {
        ++num;
        printf("%5d", num);
        suma += num;
     } while (num < 100);
     
     printf("\nLa suma con DO WHILE vale %ld", suma);
     printf("\n\n");
     system ("pause");


     /* --> FOR */
     puts("Realizado con un bucle FOR:");

     suma = 0;

     for (num = 1; num <= 100; ++num) {
        printf("%5d", num);
        suma += num;
     }

    printf("\nLa suma con FOR vale %ld", suma);

    printf("\n\n");
    system ("pause");


/* -------------------------------------------------- */
/* -- Presenta los n�meros naturales entre limite y 1 */
/* -- en orden descendente, y su suma.                */
/* -------------------------------------------------- */
     system ("cls");  /* Borrado de pantalla */
     puts("Se presentan los n�meros naturales entre \"limite\" y 1 en orden descendente.");
     do {
       printf("Introduzca el valor de \"limite\" ( >= 1 ): ");
       scanf("%d", &limite);
       if (limite < 1)
          printf("\nEl \"limite\" debe de ser mayor o igual a 1\n");
     } while (limite < 1);     

     /* --> WHILE */
     puts("\nRealizado con un bucle WHILE controlado por contador:");

     suma = 0;
     num  = limite;

     while (num >= 1) {
	   printf("%5d", num);
	   suma += num--;
     }

     printf("\nLa suma con WHILE vale %ld", suma);
     printf("\n\n");
     system ("pause");


    /* --> FOR */
     puts("Realizado con un bucle FOR:");

     suma = 0;
     for (num = limite; num >= 1; num--) {
	    printf("%5d", num);
	    suma += num;
     }

    printf("\nLa suma con FOR vale %ld", suma);
    printf("\n\n");
    system ("pause");


/* -------------------------------------------------- */
/* -- Presenta los n�meros impares entre limite y 1,  */
/* -- en orden descendente, indica tambi�n cuantos    */
/* -- hay y cuanto vale su suma.                      */
/* -------------------------------------------------- */

    system ("cls");  /* Borrado de pantalla */
    puts("Se presentan los n�meros impares entre \"limite\" y 1 en orden descendente.");

    do {
       printf("Introduzca el valor de \"limite\" ( >= 1 ): ");
       scanf("%d", &limite);
       if (limite < 1)
          printf("\nEl \"limite\" debe de ser mayor o igual a 1\n");
    } while (limite < 1);     

    if ( !(limite % 2) )   /* Para que limite sea impar siempre */
       limite--;


     /* --> WHILE */
     puts("\nRealizado con un bucle WHILE controlado por contador:");

     cuantos = 0;
     suma    = 0;
     num     = limite;
     while (num >=1)  {
      printf("%5d", num);
      suma +=num;
      cuantos++;
      num-=2;
    }
 
    printf("\nCon WHILE:");
    printf("\n  - Se han presentado %d n�meros impares.", cuantos);
    printf("\n  - Su suma vale %ld", suma);
    printf("\n\n");
    system ("pause");

     /* --> FOR */
    puts("\nRealizado con un bucle FOR:");

    cuantos = 0;
    suma    = 0;
  
    for (num=limite; num >=1; num-=2) {
      printf("%5d", num);
      suma +=num;
      cuantos++;
    }
    
    printf("\nCon FOR:");
    printf("\n  - Se han presentado %d n�meros impares.", cuantos);
    printf("\n  - Su suma vale %ld", suma);
    printf("\n\n");
    system ("pause");

/* -------------------------------------------------- */
/* -- Presenta los n�meros m�ltiplos de 11 entre 1 y  */
/* -- l�mite, cuantos hay, su suma y su producto.     */
/* -------------------------------------------------- */

    system ("cls");  /* Borrado de pantalla */
    printf("Se presentan los n�meros m�ltiplos de %d entre 1 y \"limite\".", NMAX);
    do {
       printf("\nIntroduzca el valor de \"limite\" ( >= 1 ): ");
       scanf("%d", &limite);
       if (limite < 1)
          printf("\nEl \"limite\" debe de ser mayor o igual a 1\n");
     } while (limite < 1);     
    

     /* --> WHILE */
     puts("\nRealizado con un bucle WHILE controlado por contador:");

    cuantos  = 0;
    suma     = 0;
    producto = 1;
    num      = 11;
    
    while (num<=limite)  {
       printf("%5d", num);
       suma +=num;
       producto *=num;
       cuantos++;
       num+=NMAX;
     }

    printf("\nCon WHILE:");
    printf("\n  - La suma de los %d n�meros vale %ld.", cuantos, suma);
    if (cuantos == 0) /* No se ha considerado n�ng�n m�ltiplo */
         printf("\n  - Su producto vale %lg.", 0);
    else printf("\n  - Su producto vale %lg.", producto);
    printf("\n\n");
    system ("pause");


    /* --> FOR */
    puts("\nRealizado con un bucle FOR:");

    cuantos  = 0;
    suma     = 0;
    producto = 1;
    
    for (num=11; num<=limite; num+=NMAX)  {
       printf("%5d", num);
       suma +=num;
       producto *=num;
       cuantos++;
     }

    printf("\nCon FOR:");
    printf("\n  - La suma de los %d n�meros vale %ld.", cuantos, suma);
    if (cuantos == 0) /* No se ha considerado n�ng�n m�ltiplo */
         printf("\n  - Su producto vale %lg.", 0);
    else printf("\n  - Su producto vale %lg.", producto);
    printf("\n\n");

    printf("\n\n");
    system("pause");
	return 0;
}
