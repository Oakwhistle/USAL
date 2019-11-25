#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

/* Fuente: IF_ESCAL.C
   Programa: CALCULO DE AREAS
   Descripción: Calcula el área de un círculo o de un cuadrado según
   la lección que haga el usuario. Utiliza una sentencia if-else "en escalera"
*/

int main(void) {
	int eleccion;     /* Elección del usuario.          */
	float longitud;   /* Longitud del lado o del radio. */
	float area;       /* Area calculada.                */

	printf("\n");
	printf("Este programa calcula el area de un cuadrado o de un círculo.\n");

	printf("Calcular.....\n");
	printf("\t1] Area de un círculo.\n \t2] Area de un cuadrado.\n" \
	       "\t0] Salir sin calcular.\n");
	printf("Su elección (0, 1 ó 2) => ");
	scanf("%d",&eleccion);

	if (eleccion == 0)
	{
		printf("\n\nHa elegido la opción Salir.\n");
		printf("Terminamos sin hacer nada.\n");
	}
	else if (eleccion == 1)
	{
		printf("\n\nIntroduzca la longitud del radio del círculo => ");
		scanf("%f",&longitud);
		area = PI * longitud * longitud;
		printf("Un círculo de radio %g tiene un área de ",longitud);
		printf("%g unidades cuadradas.",area);
	}
	else if (eleccion == 2)
	{
		printf("\n\nIntroduzca la longitud de un lado del cuadrado => ");
		scanf("%f",&longitud);
		area = longitud * longitud;
		printf("Un cuadrado de longitud %g tiene un área de ",
			   longitud);
		printf("%g unidades cuadradas.",area);
	}
	else
	{
		printf("\n\nElección incorrecta.\n");
		printf("Terminamos sin hacer nada.\n");
	};

	printf("\n\nAquí termina el programa de cálculo de áreas.\n");
	printf("\n");
	
	system ("pause");
	return 0;
}
