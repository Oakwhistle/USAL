#include <stdio.h>
#include <stdlib.h>
#include "ulibmat.h"

int main(void) {
     float radio, area;
     printf("\nC�lculo del �rea de un c�rculo.\n");
     printf("\nIntroduzca el radio del c�rculo: ");
     scanf("%f", &radio);
     area = area_circulo(radio);
     printf("\nArea = %f\n", area);
     
     system ("pause");
     return 0;
 }
