#include <stdio.h>
#include <stdlib.h>

/* Fuente: ptaeuro.c
   Programa: CONVERSI�N PESETAS <--> EUROS
   Descripci�n: Permite convertir, mediante un men� de opciones, importes de una moneda a otra.
   La salida del men� de opciones est� controlada por un flag (variable salir).
*/

int main(void) {

  const float VALOREURO = 166.386F;
  float imp_pta, imp_eur;

  char opcion;
  int  salir = 0;     /* Flag. Verdadero para salir del programa */

  do  /* -- 1 -- */
  { 
     /* Men� de opciones */
      system ("cls"); /* Borrado de la pantalla */

      printf("=============================\n");
      printf("Conversi�n pesetas <--> euros\n");
      printf("=============================\n");
      printf("\n");
      printf("A) De pesetas a euros \n");
      printf("B) De euros a pesetas \n");
      printf("S) Salir \n");
      printf("\n");

      printf("Opci�n?:");
      fflush(stdin);  /* Vaciado del buffer de teclado */
      scanf("%c", &opcion);
      
      /* Petici�n de datos, c�lculos y resultados */
      switch (opcion)
      {
        case 'a': 
        case 'A': 
           printf("Importe en pesetas?: "); 
           scanf("%f", &imp_pta);
           imp_eur = imp_pta / VALOREURO;
           printf("%.0f pesetas son %.2f euros\n", imp_pta, imp_eur);
           printf("\n");
           system ("pause");
           break;

        case 'b': 
        case 'B': 
           printf("Importe en euros?: ");   scanf("%f", &imp_eur);
           imp_pta = imp_eur * VALOREURO;
           printf("%.2f euros son %.0f pesetas\n", imp_eur, imp_pta);
           printf("\n");
           system ("pause");
           break;

       case 's': 
       case 'S': 
           salir = 1;
           break;

      } /* cierre del switch */

  } while (!salir); /* -- cierre de 1 -- */
  
  printf("\n\n");
  system ("pause");
  return 0;
}
