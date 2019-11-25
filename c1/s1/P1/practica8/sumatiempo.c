/* Fuente: STIEMPO.C
   Programa: SUMAR TIEMPO
   Descripción: Dado un instante de tiempo expresado en horas, minutos y segundos, se le suma 
   un incremento en segundos y se calcula el nuevo instante 
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void sumartiempo (int *, int *, int *, int);
   void modulo_principal (void);
   void presentacion (void);


/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     do
       { printf("\n");
	 modulo_principal();
	 printf("\n");
	 do
	   { printf("¿Otra ejecución (S/N)?: ");
	     fflush(stdin); /* Limpia el buffer de teclado */
	     respuesta = toupper(getchar());
	   }
	 while (respuesta != 'S' && respuesta != 'N');

       }
     while (respuesta != 'N');
     
     return 0;

} /* Fin del main */


/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     int horas;
     int minutos;
     int segundos;
     int incremento;

     printf("Introduzca el valor para el instante inicial:\n");
     printf("Horas?   : "); scanf("%d", &horas);
     printf("Minutos? : "); scanf("%d", &minutos);
     printf("Segundos?: "); scanf("%d", &segundos);

     printf("Introduzca el incremento de tiempo en segundos: ");
     scanf("%d", &incremento);
   
     sumartiempo (&horas, &minutos, &segundos, incremento);
   
     printf("Nuevo instante: hh=%d, mm=%d, ss=%d\n",
             horas, minutos, segundos, incremento);
}


/* ---------------------------------------------------------- */
   void sumartiempo (int *h, int *m, int *s, int incr) {
/* ---------------------------------------------------------- */
      int min;
      int hor;
   
   /* sumamos los segundos a incrementar */
      *s = *s + incr;
   
   /* incrementamos un minuto por cada 60 segundos */
      min = *s / 60;
      *s  = *s % 60;
      *m  = *m + min;
   
   /* incrementamos una hora por cada 60 minutos */
      hor = *m / 60;
      *m  = *m % 60;
      *h  = *h + hor;
}


/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("Incremento de tiempo");
     puts("====================");
     puts("");
     puts("Dado un instante de tiempo expresado en horas, minutos y segundos, se le suma");
     puts("un incremento en segundos y se calcula el nuevo instante");
     puts("");
}
