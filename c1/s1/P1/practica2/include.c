#include <stdio.h>
#include <stdlib.h>
#include "ulibmat.h"

int main(void) {
     float radio, area;
     printf("\nCálculo del área de un círculo.\n");
     printf("\nIntroduzca el radio del círculo: ");
     scanf("%f", &radio);
     area = area_circulo(radio);
     printf("\nArea = %f\n", area);
     
     system ("pause");
     return 0;
 }
