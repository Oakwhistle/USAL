#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

/* Fuente: IF_ESCAL.C
   Programa: CALCULO DE AREAS
   Descripci�n: Calcula el �rea de un c�rculo o de un cuadrado seg�n
   la lecci�n que haga el usuario. Utiliza una sentencia if-else "en escalera"
*/

int main(void) {
	int eleccion;     /* Elecci�n del usuario.          */
	float longitud;   /* Longitud del lado o del radio. */
	float area;       /* Area calculada.                */

	printf("\n");
	printf("Este programa calcula el area de un cuadrado o de un c�rculo.\n");

	printf("Calcular.....\n");
	printf("\t1] Area de un c�rculo.\n \t2] Area de un cuadrado.\n" \
	       "\t0] Salir sin calcular.\n");
	printf("Su elecci�n (0, 1 � 2) => ");
	scanf("%d",&eleccion);

	if (eleccion == 0)
	{
		printf("\n\nHa elegido la opci�n Salir.\n");
		printf("Terminamos sin hacer nada.\n");
	}
	else if (eleccion == 1)
	{
		printf("\n\nIntroduzca la longitud del radio del c�rculo => ");
		scanf("%f",&longitud);
		area = PI * longitud * longitud;
		printf("Un c�rculo de radio %g tiene un �rea de ",longitud);
		printf("%g unidades cuadradas.",area);
	}
	else if (eleccion == 2)
	{
		printf("\n\nIntroduzca la longitud de un lado del cuadrado => ");
		scanf("%f",&longitud);
		area = longitud * longitud;
		printf("Un cuadrado de longitud %g tiene un �rea de ",
			   longitud);
		printf("%g unidades cuadradas.",area);
	}
	else
	{
		printf("\n\nElecci�n incorrecta.\n");
		printf("Terminamos sin hacer nada.\n");
	};

	printf("\n\nAqu� termina el programa de c�lculo de �reas.\n");
	printf("\n");
	
	system ("pause");
	return 0;
}
