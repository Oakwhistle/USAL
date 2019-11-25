#include <stdio.h>
#include <stdlib.h>
#define  cuadrado(x) x*x
#define  PI 3.141592
#define  area_circulo(r)  PI * cuadrado(r)

int main(void) {
     float radio, area;
     printf("\nCálculo del área de un círculo.\n");
     printf("Introduzca el radio del círculo: ");
     scanf("%f", &radio);
     area = area_circulo(radio);
     printf("\nArea = %f\n", area);
     
     system ("pause");
     return 0;
}
