#include<stdio.h>
#include<stdlib.h>

/* 	*****	op_arit.c	*****	*/
/*	OPERADORES ARITMETICOS	*/

int main(void)
{
	int entero_1,entero_2;
	float real_1, real_2;
	printf("Deme dos nœmeros enteros: ");
	scanf("%d %d",&entero_1, &entero_2);
	printf("\n\nDeme dos nœmeros reales: ");
	scanf("%f %f",&real_1, &real_2);
	printf("\n\nEmpecemos por los nœmeros enteros:\n\n");
	printf("SUMA             %5d + %5d    : %5d\n",entero_1, entero_2, entero_1 + entero_2);
	printf("RESTA            %5d - %5d    : %5d\n",entero_1, entero_2, entero_1 - entero_2);
	printf("MULTIPLICACION   %5d * %5d    : %5d\n",entero_1, entero_2, entero_1 * entero_2);
	printf("DIVISION         %5d / %5d    : %5d\n",entero_1, entero_2, entero_1 / entero_2);
	printf("MODULO           %5d %% %5d    : %5d\n",entero_1, entero_2, entero_1 % entero_2);


/* Observese la forma de mostrar un % en printf(): se duplica.*/

	printf("\n Seguimos con los nœmeros reales:\n\n");
	printf("SUMA             %10.4f + %10.4f    : %10.4f\n",real_1, real_2, real_1 + real_2);
	printf("RESTA            %10.4f - %10.4f    : %10.4f\n",real_1, real_2, real_1 - real_2);
	printf("MULTIPLICACION   %10.4f * %10.4f    : %10.4f\n",real_1, real_2, real_1 * real_2);
	printf("DIVISION         %10.4f / %10.4f    : %10.4f\n",real_1, real_2, real_1 / real_2);

/* Aqui' no hay mo-dulo.*/

system ("pause");
return 0;

}
