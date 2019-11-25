#include <stdio.h>
#include <stdlib.h>

/* Fuente: MEMLISTA.C
   Programa: MAPA DE MEMORIA DE UN VECTOR
   Descripci�n: Realiza el mapa de memoria de una vector, y comprueba el comportamiento
   de un puntero al tipo base del vector, desplaz�ndose por el mismo.
*/

int main(void) {
   int mat[] = {10,20,30,40}; /* Vector de int de dimensi�n 4       */
   int *pt;                   /* Puntero a int                      */

   system ("cls");
   printf("\n");
   printf(" Declaraci�n de variables:\n\n");
   puts  ("    int mat[]={10,20,30,40}; -- Vector de int de dimensi�n 4 ");
   puts  ("    int *pt;                 -- Puntero a int                ");

   printf("\n");
   printf(" Mapa de memoria de almacenamiento de las variables declaradas:\n\n");
   printf(" | Variable | Tama�o | Direcci�n          | Contenido   | \n");
   printf(" |----------|--------|--------------------|-------------| \n");
   printf(" | mat[3]   |    %d   | &mat[3] = %p | mat[3] = %d | \n", sizeof(mat[3]), &mat[3], mat[3]);
   printf(" | mat[2]   |    %d   | &mat[2] = %p | mat[2] = %d | \n", sizeof(mat[2]), &mat[2], mat[2]);
   printf(" | mat[1]   |    %d   | &mat[1] = %p | mat[1] = %d | \n", sizeof(mat[1]), &mat[1], mat[1]);
   printf(" | mat[0]   |    %d   | &mat[0] = %p | mat[0] = %d | \n", sizeof(mat[0]), &mat[0], mat[0]);
   printf(" | pt       |    %d   | &pt     = %p | no iniciada | \n", sizeof(pt)    , &pt    , &pt);

/* --------------------------------------------------------- */
   printf("\n");
   printf(" 1. El puntero mat                          | Son equivalentes ... | \n");
   printf(" -------------------------------------------|----------------------| \n");
   printf(" | mat   = %p - mat   apunta a mat[0] | mat   <=> &mat[0]    | \n", mat);
   printf(" | mat+1 = %p - mat+1 apunta a mat[1] | mat+1 <=> &mat[1]    | \n", mat+1);
   printf(" | mat+2 = %p - mat+2 apunta a mat[2] | mat+2 <=> &mat[2]    | \n", mat+2);
   printf(" | mat+3 = %p - mat+3 apunta a mat[3] | mat+3 <=> &mat[3]    | \n", mat+3);

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();
/* --------------------------------------------------------- */
   printf("\n");
   printf(" 2. Referencia a trav�s de mat                  | Son equivalentes ... | \n");
   printf(" -----------------------------------------------|----------------------| \n");
   printf(" | *mat     = %d - *mat     referencia a mat[0] | *mat     <=> mat[0]  | \n", *mat);
   printf(" | *(mat+1) = %d - *(mat+1) referencia a mat[1] | *(mat+1) <=> mat[1]  | \n", *(mat+1));
   printf(" | *(mat+2) = %d - *(mat+2) referencia a mat[2] | *(mat+2) <=> mat[2]  | \n", *(mat+2));
   printf(" | *(mat+3) = %d - *(mat+3) referencia a mat[3] | *(mat+3) <=> mat[3]  | \n", *(mat+3));

   printf("\nPulsa \"intro\" para continuar.\n\n");
   getchar();

/* --------------------------------------------------------- */
   pt=mat;
   printf(" 3. Si hacemos \"pt = mat\"\n");

   puts  ("    pt apuntar� a la primera posici�n del vector mat");
   puts  ("    Observamos que sobre el puntero pt podemos utilizar tambi�n la");
   puts  ("    notaci�n de sub�ndices, de la misma forma que los usamos sobre mat.\n");

   printf("    pt   apunta a: %p.   *pt     almacena: %d\n",   pt, *pt);
   printf("                           p[0]    almacena: %d\n", pt[0]);

   printf("    pt+1 apunta a: %p.   *(pt+1) almacena: %d\n",   pt+1, *(pt+1));
   printf("                           p[1]    almacena: %d\n", pt[1]);

   printf("    pt+2 apunta a: %p.   *(pt+2) almacena: %d\n",   pt+2, *(pt+2));
   printf("                           p[2]    almacena: %d\n", pt[2]);

   printf("    pt+3 apunta a: %p.   *(pt+3) almacena: %d\n",   pt+3, *(pt+3));
   printf("                           p[3]    almacena: %d\n", pt[3]);

   printf("\nPulsa \"intro\" para terminar.\n\n");
   getchar();
   
   return 0;

}

