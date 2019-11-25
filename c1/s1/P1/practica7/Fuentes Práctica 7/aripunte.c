#include <stdio.h>
#include <stdlib.h>

/* Fuente: ARIPUNTE.C
   Programa: COMBINACION DE LOS OPERADORES * Y ++
   Descripción: Realiza el mapa de memoria de una vector, y comprueba el comportamiento
   de un puntero al tipo base del vector, sobre el que actúan simultáneamente los
   operadores * y ++.

   Realiza la comprobación de la combinación de los operadores *, ++ (y --) sobre
   el mismo puntero.
   Todos ellos tienen la misma prioridad y su asociatividad es de derecha a izquierda.

   *++pt    - Primero ++ y posteriormente *
   *(++pt)  - Primero ++ y posteriormente *
   ++*pt    - Primero  * y posteriormente ++
   ++(*pt)  - Primero  * y posteriormente ++
   *pt++    - Primero  * y posteriormente ++
   *(pt++)  - Primero  * y posteriormente ++
   (*pt)++  - Primero  * y posteriormente ++

*/




int main(void) {
   int *pt;                               /* Puntero a int        */
   int temp;                              /* Variable de tipo int */
   int mat[] = {10, 20, 30, 40, 50, 60};  /* Vector de int        */

   system ("cls");
   printf("\n");
   printf(" Declaración de variables:\n\n");
   puts  ("    int *pt;                            -- Puntero a int        ");
   puts  ("    int temp;                           -- Variable de tipo int ");
   puts  ("    int mat[]={10, 20, 30, 40, 50, 60}; -- Vector de int        ");

   printf("\n\n");
   printf(" Mapa de memoria de almacenamiento de las variables declaradas:\n\n");
   printf(" | Variable | Tamaño | Dirección          | Contenido   | \n");
   printf(" |----------|--------|--------------------|-------------| \n");
   printf(" | pt       |    %d   | &pt     = %p | no iniciada | \n", sizeof(pt)    , &pt    , &pt);
   printf(" | temp     |    %d   | &temp   = %p | no iniciada | \n", sizeof(temp)  , &temp  , &temp);
   printf(" | mat[5]   |    %d   | &mat[5] = %p | mat[5] = %d | \n", sizeof(mat[5]), &mat[5], mat[5]);
   printf(" | mat[4]   |    %d   | &mat[4] = %p | mat[4] = %d | \n", sizeof(mat[4]), &mat[4], mat[4]);
   printf(" | mat[3]   |    %d   | &mat[3] = %p | mat[3] = %d | \n", sizeof(mat[3]), &mat[3], mat[3]);
   printf(" | mat[2]   |    %d   | &mat[2] = %p | mat[2] = %d | \n", sizeof(mat[2]), &mat[2], mat[2]);
   printf(" | mat[1]   |    %d   | &mat[1] = %p | mat[1] = %d | \n", sizeof(mat[1]), &mat[1], mat[1]);
   printf(" | mat[0]   |    %d   | &mat[0] = %p | mat[0] = %d | \n", sizeof(mat[0]), &mat[0], mat[0]);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   pt = mat;
   printf(" 1. \"pt = mat\"\n");
   puts  ("    pt apunta al primer elemento del vector mat.\n");

   printf("    pt = %p\n",  pt);
   printf("   *pt = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   puts  ("* y ++ tienen la MISMA PRIORIDAD, y ASOCIATIVIDAD de DERECHA a izquierda");
   puts  ("------------------------------------------------------------------------");
   printf("\n");

/* --------------------------------------------------------- */
   temp = *++pt;
   printf(" 2. \"temp = *++pt\"\n");
   puts  ("    a) ++ - Se incrementa pt");
   puts  ("    b)  * - Se asigna a temp la variable referenciada por pt\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = *(++pt);
   printf(" 3. \"temp = *(++pt)\"\n");
   puts  ("    a)  ++ - Se incrementa pt");
   puts  ("    b)   * - Se asigna a temp la variable referenciada por pt\n");
   puts  ("    Es el mismo comportamiento que \"temp = *++pt\"\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = ++*pt;
   printf(" 4. \"temp = ++*pt\"\n");
   puts  ("    a)  * - Se obtene la variable referenciada por pt");
   puts  ("    b) ++ - Se incrementa dicha variable y se asigna a temp\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = ++(*pt);
   printf(" 5. \"temp = ++(*pt)\"\n");
   puts  ("    a)  * - Se obtene la variable referenciada por pt");
   puts  ("    b) ++ - Se incrementa dicha variable y se asigna a temp\n");
   puts  ("    Es el mismo comportamiento que \"temp = ++(*pt)\"\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = *pt++;
   printf(" 6. \"temp = *pt++\"\n");
   puts  ("    a)  * - Se asigna a temp la variable referenciada por pt");
   puts  ("    b) ++ - Se incrementa pt\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = *(pt++);
   printf(" 7. \"temp = *(pt++)\"\n");
   puts  ("    a)  * - Se asigna a temp la variable referenciada por pt");
   puts  ("    b) ++ - Se incrementa pt\n");
   puts  ("    Es el mismo comportamiento que \"temp = *pt++\"\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   temp = (*pt)++;
   printf(" 8. \"temp = (*pt)++\"\n");
   puts  ("    a)  * - Se asigna a temp la variable referenciada por pt");
   puts  ("    b) ++ - Se incrementa variable referenciada por pt\n");

   printf("    temp = %d\n", temp);
   printf("    pt   = %p\n",  pt);
   printf("   *pt   = %d\n", *pt);

   printf("\nPulsa \"intro\" para TERMINAR.\n\n");
   getchar();
   
   return 0;

}

