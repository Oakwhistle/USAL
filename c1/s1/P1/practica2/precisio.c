#include<stdio.h>
#include<float.h>
#include <stdlib.h>

/* Este programa ilustra la escritura de todos los tipos reales en C */

/* Reales "normales"*/

float real_normal = 123456.123456 ;
double real_doble = 123456.123456789123456789 ; 
long double real_largo = 123456.123456789123456789123456789123456;


int main(void)
{

	printf("%d\n",FLT_DIG);
	printf("%d\n", DBL_DIG);
	printf("%d\n",LDBL_DIG);
	printf("%9.9f\n",real_normal);
	printf("%6.13lf\n",real_doble);
	printf("%6.13Lf\n\n",real_largo);
	
	/* Para roble veremos algun resultado mas */
	
	printf("%9.12f\n",real_normal);
	printf("%6.16f\n",real_doble);
	printf("%6.16Lf\n",real_largo);
	printf("%6.35Lf\n\n", real_largo);

	printf("%f\n",real_normal);
	printf("%f\n",real_doble);
	printf("%Lf\n",real_largo);
	printf("%LG\n",real_largo);
	printf("%Lg\n",real_largo);
	printf("%Le\n",real_largo);
	
		   
  system ("pause");
  return 0;
}

/* Atenci-n: distintos compiladores van a producir distintos resultados.*/
/* Por ejemplo*/
 
 /*CodeWarrior 68K produce:*/ 

/* 6 */
/*18 */
/*18 */
/*123456.125000000	*/
/*123456.1234567891234	*/
/*123456.1234567891234	*/
 
/*Mientras que TurboC produce:	*/
 
/*6	*/                   
/*15	*/                  
/*19	*/                  
/*123456.125000000	*/    
/*123456.1234567891200	*/
/*123456.1234567891200	*/

/*Pero Codewarrior PPC dice	*/

/*6	*/
/*15	*/
/*15	*/
/*123456.125000000	*/
/*123456.1234567891224	*/
/*123456.1234567891224	*/

/*Y en roble se obtiene	*/
/*6	*/
/*15	*/
/*33	*/
/*123456.125000000	*/
/*123456.1234567891200	*/
/*123456.1234567891224	*/

/* Conclusi-n: es imprescindible estudiar los resultados obtenidos con cada compiador*/
/*  ***** No hay quen entienda los resultados !!!! *****  */
/*  ***** Sera debido al coprocesador matematico ??   */

