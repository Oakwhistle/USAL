#include <stdio.h>
#include <stdlib.h>
#define MAX 20

/* Fuente: TBMULT.C
   Programa: TABLAS DE MULTIPLICAR
   dESCRIPCIÓN: Presenta pantalla a pantalla la tabla de multiplicar de los num
   primeros números enteros (num se introduce por teclado).
   Cada tabla de multiplicar presenta los MAX primeros productos.
*/
 

int main(void) {

/* Declaraciones */
  int num; 
  int i, j;

/* Presentación */
  printf("Tablas de multiplicar\n");
  printf("=====================\n\n");
  printf("Se presentan pantalla a pantalla las tablas de multiplicar "
         "de los N primeros\n");
  printf("números enteros (sus %d primeros productos).\n\n", MAX);

/* Petición y validación de datos */
  do
  {   printf("Valor de N?: ");
      scanf("%d", &num);
      if  (num <= 0)
          printf("N debe ser mayor que cero\n");
  } while (num <= 0);


/* Cálculos y resultados */
  system ("cls");  /* Borrado de la pantalla */
  
  for (i=1; i<=num; i++)
  {
     printf("Tabla de multiplicar del %d\n\n", i);
     for (j=1; j<=MAX; j++)
         printf("%6d x %2d = %6d\n", j, i, j*i);
     
     if (i == num)
        printf("\nPulse <INTRO> para terminar");
     else
        printf("\nPulse <INTRO>");

     fflush(stdin);  /* Vaciado del buffer de teclado */
     getchar(); 

     system ("cls");  /* Borrado de la pantalla */
  }

  return 0;
}


/* ===============================================>

La función fflush(), en su formato fflush(stdin), limpia el buffer de teclado.
Su archivo de cabecera es stdio.h
Esta función se utiliza para evitar que el propio carácter <intro> de una entrada de datos
anterior, sea tomado en la lectura de teclado de la función getchar().

   ================================================== */



