#include <stdio.h>
#include <stdlib.h>
#include "vectorDinamica.h"
#include "vectorAux.h"
#define N 5

int main (void) {
	int vx[N] = {0};
	int i, errNum;
	int *ptr;

	puts("VECTOR CREADO CON MALLOC");
	puts("========================");
	puts("");
	puts("Estudio de las posciciones de memoria donde se almacenan los datos estaticos");
	puts("t las variables generadas con reserva de memoria dinamica.");
	puts("");

	if ((ptr = creaVectorInt(N, &errNum)) == NULL)
		return errNum;
	else{
		puts("Variables estaticas:");
		puts("    int vx[N] = {0};   N=5");
		puts("    int i;          ");
		puts("    int *ptr;       ");
		puts("                    ");
		printf("Direccion ultimo elemento de vx: %p \n", vx+(N-1));
		printf("Direccion comienzo de vx.......: %p \n", vx      );
		printf("Direccion de i.................: %p \n", &i      );
		printf("Direccion de ptr...............: %p \n", &ptr    );

		printf("Direccion ultimo elemento vector dinamico ptr: %p \n", ptr+(N-1));
		printf("Direccion comienzo vector dinamico ptr.......: %p \n", ptr);
		printf("\n\n");
		printf("Carga valores aleatorios:\n");

		if (!cargaValoresAleatorios(ptr, N, 10, 100))
			mostrarValores(ptr, N);
		if (!cargaValoresAleatorios(vx, N, 10, 100))
			mostrarValores(vx, N);

		printf("\n\n");
		printf("Carga valores teclado: \n");

		if (!cargarValoresTeclado(ptr, N))
			mostrarValores(ptr, N);
		if (!cargarValoresTeclado(vx, N))
			mostrarValores(vx, N);
		free(ptr);
	}

	return 0;
}