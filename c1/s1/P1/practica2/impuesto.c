#include <stdio.h>
#include <stdlib.h>
#define IVA  21.0

/* Fuente: IVA.C
   Programa IMPUESTO POR IVA.
   Calcula el valor del impuesto que grava el precio de un producto, dado
   el precio final del producto y el porcentaje de IVA que se aplica.
*/

int main(void) {
/* Declaraciones */
   float   precio_final, precio_bruto, impuesto;

/* Presentación */
   printf("Cálculo del impuesto que grava el precio de un ");
   printf("vehículo,\ndado el precio final de éste y el porcentaje ");
   printf("de IVA aplicado (%f%%).\n\n", IVA);

/* Petición de datos */
   printf("Introduzca precio final del vehículo (en euros): ");
   scanf ("%f", &precio_final);

/* Cálculos */
   precio_bruto = precio_final / (1 + IVA / 100);
   impuesto     = (precio_bruto / 100) * IVA;

/* Resultados */
   printf("\nEl impuesto es de %f euros.\n", impuesto);

   system ("pause");
   return 0;
}
