#include <stdio.h>
#include <stdlib.h>

/* Fuente: MEMLISTA.C
   Programa: MAPA DE MEMORIA DE UNA MATRIZ BIDIMENSIONAL
   Descripción: Realiza el mapa de memoria de una matriz, y comprueba el comportamiento
   de un puntero al tipo base de la matriz, desplazándose por la misma.

   Hay que recordar que una matriz bidimensional es una matriz unidimensional cuyos
   elementos (filas) son a su vez matrices unidimensioanles.

   Recordar que el nombre de la matriz bidimensional es un puntero al primer elemento
   de la misma (primera fila).
*/

int main(void) {
   int tbl[][2]={11,12,21,22};   /* Matriz bidimensional 2 x 2 de int.  */
   int *pt;                      /* Puntero a int.                      */
   int *pt1[2];                  /* Lista de 2 punteros a enteros.      */
   int (*pt2)[2];                /* Puntero a lista de 2 int.           */
   int temp;                     /* Variable de tipo entero.            */


   system ("cls");
   printf("\n");
   printf(" Declaración de variables:\n\n");
   puts  ("  int tbl[][2]={11,12,21,22}; -- Matriz bidimensional 2 x 2 de int ");
   puts  ("  int *pt;                    -- Puntero a int                     ");
   puts  ("  int *pt1[2];                -- Lista de 2 punteros a int         ");
   puts  ("  int (*pt2)[2];              -- Puntero a lista de 2 int          ");
   puts  ("  int temp;                   -- Variable de tipo int              ");

   printf("\n\n");
   printf(" Mapa de memoria de almacenamiento de las variables declaradas:\n\n");
   printf(" | Variable  | Tamaño | Dirección             | Contenido      | \n");
   printf(" |-----------|--------|-----------------------|----------------| \n");
   printf(" | tbl[1][1] |    %d   | &tbl[1][1] = %p | tbl[1][1] = %d | \n", sizeof(tbl[1][1]), &tbl[1][1], tbl[1][1]);
   printf(" | tbl[1][0] |    %d   | &tbl[1][0] = %p | tbl[1][0] = %d | \n", sizeof(tbl[1][0]), &tbl[1][0], tbl[1][0]);
   printf(" | tbl[0][1] |    %d   | &tbl[0][1] = %p | tbl[0][1] = %d | \n", sizeof(tbl[0][1]), &tbl[0][1], tbl[0][1]);
   printf(" | tbl[0][0] |    %d   | &tbl[0][0] = %p | tbl[0][0] = %d | \n", sizeof(tbl[0][0]), &tbl[0][0], tbl[0][0]);
   printf(" | pt        |    %d   | &pt        = %p | no iniciada    | \n", sizeof(pt), &pt);
   printf(" | pt1[1]    |    %d   | &pt1[1]    = %p | no iniciada    | \n", sizeof(pt1[1]), &pt1[1]);
   printf(" | pt1[0]    |    %d   | &pt1[0]    = %p | no iniciada    | \n", sizeof(pt1[0]), &pt1[0]);
   printf(" | pt2       |    %d   | &pt2       = %p | no iniciada    | \n", sizeof(pt2), &pt2);
   printf(" | temp      |    %d   | &temp      = %p | no iniciada    | \n", sizeof(temp), &temp);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* --------------------------------------------------------- */
   printf(" 1. El puntero tbl \n");
   printf(" ------------------------------------------------------------- \n");
   printf(" Dirección comienzo primera fila &tbl[0] = %p \n", &tbl[0]);
   printf(" Dirección comienzo segunda fila &tbl[1] = %p \n", &tbl[1]);
   printf("\n");
   printf(" tbl   = %p. Es un puntero a filas. Apunta a la fila tbl[0] \n", tbl);
   printf(" tbl+1 = %p. Es un puntero a filas. Apunta a la fila tbl[1] \n", tbl+1);
   printf("\n");
   printf(" +--------------------------+ \n");
   printf(" | tbl   equivale a &tbl[0] | \n");
   printf(" | tbl+1 equivale a &tbl[1] | \n");
   printf(" +--------------------------+ \n");

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* --------------------------------------------------------- */
   printf(" 2. Las filas de tbl \n");
   printf(" ----------------------------------------------------------------\n");
   printf(" Dirección del elemento tbl[0][0] = %p \n", &tbl[0][0]);
   printf(" Dirección del elemento tbl[1][0] = %p \n", &tbl[1][0]);
   printf("\n");
   printf(" *tbl     = %p. Es la primera fila de tbl. \n", tbl[0]);
   printf("                  Es un puntero a elementos.  Apunta a tbl[0][0] \n\n");
   printf(" *(tbl+1) = %p. Es la segunda fila de tbl. \n", tbl[1]);
   printf("                  Es un puntero a elementos.  Apunta a tbl[1][0] \n");
   printf("\n");
   printf(" +----------------------------+ \n");
   printf(" | *tbl     equivale a tbl[0] | \n");
   printf(" | *(tbl+1) equivale a tbl[1] | \n");
   printf(" +----------------------------+ \n");

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* --------------------------------------------------------- */
   printf(" 3. Los elementos de tbl \n");
   printf(" ------------------------------------------------------------------\n");
   printf(" **tbl         = %d Primer  elemento de la primera fila: tbl[0][0] \n", **tbl);
   printf(" *(*tbl+1)     = %d Segundo elemento de la primera fila: tbl[0][1] \n", *(*tbl+1));
   printf(" **(tbl+1)     = %d Primer  elemento de la segunda fila: tbl[1][0] \n", **(tbl+1));
   printf(" *(*(tbl+1)+1) = %d Segundo elemento de la segunda fila: tbl[1][1] \n", *(*(tbl+1)+1) );

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* ++++++++++++++++  APARTADO 1 ++++++++++++++++++++++++++++ */
/* --------------------------------------------------------- */
   pt= *tbl;
   printf(" 4. Si hacemos \"pt = *tbl\"\n");
   puts  ("    - tbl  es un puntero a filas, apuntando a la primera fila de tbl.    ");
   puts  ("    - *tbl es un puntero a elementos, que apunta al primer elemento de la");
   puts  ("           primera fila de tbl.                                          ");
   puts  ("    El puntero pt (puntero a int) apuntar  al primer elemento de la      ");
   puts  ("    primera fila de tbl, es decir tbl[0][0].                             ");

   printf("\n");
   printf("    pt apunta a: %p. *pt almacena: %d\n", pt, *pt);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();


/* --------------------------------------------------------- */
   temp = *++pt;
   printf(" 5. Si hacemos \"temp = *++pt\"\n");
   puts  ("    Primero se incrementar  el puntero pt, pasando a apuntar al elemento ");
   puts  ("    tbl[0][1].                                                           ");
   puts  ("    Posteriormente se almacena el valor referenciado en temp, en este    ");
   puts  ("    caso tbl[0][1].                                                      ");

   printf("\n");
   printf("    temp almacena: %d\n", temp);
   printf("    pt apunta a: %p. *pt almacena: %d\n", pt, *pt);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();


/* --------------------------------------------------------- */
   temp = ++*pt;
   printf(" 6. Si hacemos \"temp = ++*pt\"\n");
   puts  ("    Se incrementa el valor de la variable referenciada por el puntero pt,");
   puts  ("    en este caso tbl[0][1], almacenandose posteriormente en temp.        ");

   printf("\n");
   printf("    temp almacena: %d\n", temp);
   printf("    tbl[0][1]    : %d\n", tbl[0][1]);
   printf("    pt apunta a: %p. *pt almacena: %d\n", pt, *pt);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* --------------------------------------------------------- */
   temp = *pt++;
   printf(" 7. Si hacemos \"temp = *pt++\"\n");
   puts  ("    Primero se almacena en temp el valor de la variable referenciada por ");
   puts  ("    el puntero pt, en este caso tbl[0][1], y posteriormente se incrementa");
   puts  ("    el puntero pt, pasando a apuntar al elemento tbl[1][0].              ");
   puts  ("    Las matrices se almacenan en memoria fila a fila, por lo que al      ");
   puts  ("    finalizar la primera fila pasamos a la segunda.                      ");


   printf("\n");
   printf("    temp almacena: %d\n", temp);
   printf("    pt apunta a: %p. *pt almacena: %d\n", pt, *pt);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* --------------------------------------------------------- */
   temp = *(pt++);
   printf(" 8. Si hacemos \"temp = *(pt++)\"\n");
   puts  ("    Es el mismo comportamiento que el caso anterior. Se almacena en temp ");
   puts  ("    la variable referenciada por el puntero y posteriormente se          ");
   puts  ("    incrementa el puntero.                                               ");

   printf("\n");
   printf("    temp almacena: %d\n", temp);
   printf("    pt apunta a: %p. *pt almacena: %d\n", pt, *pt);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* ++++++++++++++++  APARTADO 2 ++++++++++++++++++++++++++++ */
/* --------------------------------------------------------- */
   pt1[0]=tbl[0];
   pt1[1]=tbl[1];
   printf(" 9. Si hacemos \"pt1[0]=tbl[0]\"\n");
   printf("               \"pt1[1]=tbl[1]\"\n");
   puts  ("    pt1 es una lista de 2 punteros a enteros.                             ");
   puts  ("    El primer  puntero pt1[0] apunta al primer elemento de la primera fila");
   puts  ("    de tbl, es decir, a tbl[0][0].                                        ");
   puts  ("    El segundo puntero pt1[1] apunta al primer elemento de la segunda fila");
   puts  ("    de tbl, es decir, a tbl[1][0].                                        ");

   printf("    pt1[0]    apunta a: %p. *pt1[0]     almacena: %d   - es tbl[0][0] \n", pt1[0], *pt1[0]);
   printf("                                  pt1[0][0]   almacena: %d   - es tbl[0][0] \n\n", pt1[0][0]);

   printf("    pt1[0]+1  apunta a: %p. *(pt1[0]+1) almacena: %d   - es tbl[0][1] \n", pt1[0]+1, *(pt1[0]+1));
   printf("                                  pt1[0][1]   almacena: %d   - es tbl[0][1] \n\n", pt1[0][1]);

   printf("    pt1[0]+2  apunta a: %p. *(pt1[0]+2) almacena: %d   - es tbl[1][0] \n", pt1[0]+2, *(pt1[0]+2));
   printf("                                  pt1[0][2]   almacena: %d   - es tbl[1][0] \n\n", pt1[0][2]);

   printf("    pt1[1]    apunta a: %p. *pt1[1]     almacena: %d   - es tbl[1][0] \n", pt1[1], *pt1[1]);
   printf("                                  pt1[1][0]   almacena: %d   - es tbl[1][0] \n\n", pt1[1][0]);

   printf("    pt1[1]+1  apunta a: %p. *(pt1[1]+1) almacena: %d   - es tbl[1][1] \n", pt1[1]+1, *(pt1[1]+1));
   printf("                                  pt1[1][1]   almacena: %d   - es tbl[1][1] \n", pt1[1][1]);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* Ojo, no puede escribirse temp=*pt1 ya que el puntero es pt1[1], por lo tanto
   debe escribirse temp=*pt1[1]. Puede hacerse el estudio de todas las combinaciones
   temp=*pt1[1]++
   temp=*++pt1[1]
   temp=++*pt1[1]
   temp=(*pt1[1])++
*/

/* ++++++++++++++++  APARTADO 3 ++++++++++++++++++++++++++++ */
/* --------------------------------------------------------- */
   pt2=tbl;
   printf("10. Si hacemos \"pt2=tbl\"\n");
   puts  ("    pt2 es un puntero a una lista de 2 enteros.                           ");
   puts  ("    pt2 apunta a la primera fila (2 enteros) de tbl.                      ");
   puts  ("    *pt2 es un puntero a elementos. Apunta al primer elemento de la fila  ");
   puts  ("    **pt2 es la variable referenciada: primer elemento de la fila.        ");

   printf("\n");
   printf("    pt2 apunta a: %p. *pt2      almacena: %p\n", pt2, *pt2);
   printf("                            **pt2     almacena: %d\n", **pt2);
   printf("                            pt2[0][0] almacena: %d\n", pt2[0][0]);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();


/* --------------------------------------------------------- */
   pt2++;
   printf("11. Si hacemos \"pt2++\"\n");
   puts  ("    pt2 es un puntero a una lista de 2 enteros.                           ");
   puts  ("    Al incrementar pt2 avanzamos 2 enteros, apuntando a la fila siguiente ");
   puts  ("    de tbl.                                                               ");

   printf("\n");
   printf("    pt2    apunta a: %p. \n", pt2);
   puts  ("    *pt2   es un puntero a elementos enteros. ");
   printf("    *pt2   apunta a: %p  **pt2     almacena: %d\n", *pt2, **pt2);
   printf("    *pt2+1 apunta a: %p. *(*pt2+1) almacena: %d\n", *pt2+1, *(*pt2+1));
   printf("\n");
   printf("    pt2[0][0]  almacena: %d. Equivale a **pt2     \n", pt2[0][0]);
   printf("    pt2[0][1]  almacena: %d. Equivale a *(*pt2+1) \n", pt2[0][1]);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();


/* pt2 es un puntero a listas de 2 enteros.
   Accedemos al segundo elemento de la fila.                 */
/* --------------------------------------------------------- */
   *(pt2[0]+1)=12;
   printf("12. Si hacemos \"*(pt2[0]+1)=12\"\n");
   puts  ("    Accedemos al segundo elemento de la fila.                             ");

   printf("\n");
   printf("    pt2[0]+1    apunta a: %p \n", (pt2[0]+1));
   printf("    *(pt2[0]+1) almacena: %d \n", *(pt2[0]+1));
   printf("\n");
   printf("    *pt2+1      apunta a: %p \n", *pt2+1);
   printf("    *(*pt2+1)   almacena: %d \n", *(*pt2+1));
   printf("\n");
   printf("    pt2[0][1]   almacena: %d \n", pt2[0][1]);

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* pt2         es un puntero a listas de 2 enteros.
/* pt2+1       apunta a la siguiente fila. En este caso no estamos
	       saliendo de la matriz.
/* *(pt2+1)    es un puntero a elementos. Apunta al primer elemento de
/*             la fila.
/* *(*(pt2+1)) es la variable referenciada. Primer elemento de la fila.
/*
/* OJO. Nos estamos saliendo de la matriz tbl.               */
/* --------------------------------------------------------- */
   *(*(pt2+1))=44;
   printf("13. Si hacemos \"*(*(pt2+1))=44\"\n");
   puts  ("    Accedemos al primer elementos de la siguiente fila.");

   printf("\n");
   printf("    pt2[1]    apunta a: %p ", pt2[1]);
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    *(pt2[1]) almacena: %d \n", *(pt2[1]));
   printf("\n");
   printf("    *(pt2+1)  apunta a: %p ", *(pt2+1));
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    **(pt2+1) almacena: %d \n", **(pt2+1));
   printf("\n");
   printf("    pt2[1][0] almacena: %d \n", pt2[1][0]);
   printf("\n");

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* OJO. Nos estamos saliendo de la matriz tbl.               */
/* --------------------------------------------------------- */
   *(*(pt2+1)+1)=55;
   printf("14. Si hacemos \"*(*(pt2+1)+1)=55\"\n");
   puts  ("    Accedemos al segundo elemento de la fila.");

   printf("\n");
   printf("    pt2[1]+1 apunta a: %p ", pt2[1]+1);
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    *(pt2[1]+1) almacena: %d \n", *(pt2[1]+1));
   printf("\n");
   printf("    *(pt2+1)+1  apunta a: %p ", *(pt2+1)+1);
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    *(*(pt2+1)+1) almacena: %d \n", *(*(pt2+1)+1));
   printf("\n");
   printf("    pt2[1][1] almacena: %d \n", pt2[1][1]);
   printf("\n");

   printf("\nPulsa \"intro\" para continuar.\n");
   getchar();

/* pt2[3]    apunta a la cuarta fila. En este caso no estamos saliendo de
	     la matriz, pues s¢lo tiene 2 filas.
   *(pt2[3]) es un puntero a elementos. Apunta al primer elemento de la fila.
   OJO. Nos estamos saliendo de la matriz tbl.               */
/* --------------------------------------------------------- */
   pt2=tbl;
   *(pt2[3])=76;
   printf("15. Si hacemos \"pt2=tbl\"\n");
   printf("               \"*(pt2[3])=76\"\n");
   puts  ("    Estamos modificando el primer elemento de la cuarta fila.");
   puts  ("    Nos estamos saliendo de la matriz !.");

   printf("\n");
   printf("    pt2[3] apunta a: %p ", pt2[3]);
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    *(pt2[3]) almacena: %d \n", *(pt2[3]));
   printf("\n");
   printf("    *(pt2+3)  apunta a: %p ", *(pt2+3));
   printf("­ OJO. Nos estamos saliendo de la matriz !\n");
   printf("    **(pt2+3) almacena: %d \n", **(pt2+3));
   printf("\n");
   printf("    pt2[3][0] almacena: %d\n", pt2[3][0]);

   printf("\nPulsa \"intro\" para terminar.\n\n");
   getchar();
   return 0;
}

