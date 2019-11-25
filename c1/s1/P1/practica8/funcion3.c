/* Fuente: FUNCION3.C
   Programa: FUNCIONES BASICAS CON PASO POR VALOR
   Descripción: Realiza con tres números enteros los siguientes cálculos
    		   - su suma
    		   - su producto
		   - el mayor de los tres
   Mediante tres funciones que reciben por valor los tres parámetros y devuelven como valor de retorno
   el resultado         
*/

#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
long sumar          (long, long, long);
long multiplicar    (long, long, long);
long calcular_mayor (long, long, long);
void presentacion   (void);

/* -------------------------------------------- */
/* --- Programa principal --------------------- */
/* -------------------------------------------- */
int main(void) {
  long num1, num2, num3;
  long suma, producto, el_mayor;

/* Presentación ---------------- */
  presentacion();
 
/* Petición de datos ------------ */
  printf("¿Primer número entero?: ");   scanf("%ld", &num1);
  printf("¿Segundo número entero?: ");  scanf("%ld", &num2);
  printf("¿Tercer número entero?: ");   scanf("%ld", &num3);

/* Cálculos -------------------- */
  suma = sumar(num1, num2, num3);
  producto = multiplicar (num1, num2, num3);
  el_mayor = calcular_mayor (num1, num2, num3);

 
/* Resultados ------------------ */
  printf(" Suma: %ld\n", suma);
  printf(" Producto: %ld\n", producto);
  printf(" El mayor: %ld\n", el_mayor);
  
  printf("\n");
  system ("pause");
  return 0;
}


/* -------------------------------------------- */
/* --- Definición del resto de funciones ------ */
/* -------------------------------------------- */

/* -------------------------------------------- */
   long sumar(long a, long b, long c) {
/* -------------------------------------------- */
     long resultado;
   
     resultado = a + b + c;
     return (resultado);
}


/* -------------------------------------------- */
   long multiplicar(long a, long b, long c) {
/* -------------------------------------------- */
     return ( a *  b *  c );
}


/* -------------------------------------------- */
   long calcular_mayor(long a, long b, long c) {
/* -------------------------------------------- */
     long mayor;

     if (a > b)
        if (a > c)
	     mayor = a;
	else mayor = c;
     else
        if (b > c)
	     mayor = b;
	else mayor = c;

     return(mayor);
}


/* -------------------------------------------- */
   void presentacion (void) {    
/* -------------------------------------------- */
     system ("cls");
     puts("Operaciones aritméticas básicas");
     puts("===============================");
     puts("");
     puts("Se pedirán 3 números enteros y se presentará en pantalla:");
     puts("    - su suma.");
     puts("    - su producto.");
     puts("    - el mayor de los tres.");
     puts("");
     puts("");
}
