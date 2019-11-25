#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Fuente: FUNCION.C
   Programa FUNCIONES BASICAS EN C.
   Ejemplo de uso diversas funciones básicas predefinidas en C.

 Función  Prototipo                        Descripción
 =======  =============================    ==================
 abs      int abs(int x);                  Valor absoluto de x
 labs     long int labs(long int x);       Valor absoluto de x
 fabs     double fabs(double x);           Valor absoluto de x

 ceil     double ceil(double x);           Redondeo de x al entero superior
 floor    double floor(double x);          Redondeo de x al entero inferior

 fmod     double fmod(double x, double y); Resto de x / y, con el mismo signo que x

 exp      double exp(double x);            Exponencial de x (e elevado a x; e=2.7182818...)
 log      double log(double x);            Logaritmo neperiano de x
 pow10    double pow10(int p);             Potencia de 10 (10 elevado a x)
 log10    double log10(double x);          Logaritmo decimal de x

 pow      double pow(double x, double y);  Potencia: x elevado a y
 sqrt     double sqrt(double x);           Raiz cuadrada de x

 sin      double sin(double x);            Seno     de x (x en radianes)
 cos      double cos(double x);            Coseno   de x (x en radianes)
 tan      double tan(double x);            Tangente de x (x en radianes)
 asin     double asin(double x);           Arco seno de x (ángulo en radianes cuyo seno es x)
 acos     double acos(double x);           Arco coseno de x  (ángulo en radianes cuyo coseno es x)
 atan     double atan(double x);           Arco tangente de x  (ángulo en radianes cuya tangente es x)

*/


int main(void)
{
 int    entero    = -1234;
 long   lentero   = -12345678L;
 float  real      = -1234.0;

 double real2     = 123.1;
 double real3     = 122.9;

 double x1        = 4.0;
 double x2        = 22.44;
 double x3        = 800.6872;

 int    p         = 3;

 double base      = 2.2,
	exponente = 3.1;

 const double PI  = 3.141592;


 system ("cls");  /* Borrado de pantalla */
 
 printf("Valor absoluto de %d = %d\n", entero, abs(entero));
 printf("Valor absoluto de %ld = %ld\n", lentero, labs(lentero));
 printf("Valor absoluto de %f = %lf\n", real, fabs(real));

 printf("%2.2lf redondeado al entero superior es %2.2lf\n",real2, ceil(real2));
 printf("%2.2lf truncado al entero inferior es %2.2lf\n",real2, floor(real2));
 printf("%2.2lf redondeado al entero superio es %2.2lf\n",real3, ceil(real3));
 printf("%2.2lf truncado al entero inferior es %2.2lf\n",real3, floor(real3));

 printf("Resto de %d / %d = %lf\n", 11, 3, fmod(11,3));
 printf("Resto de %d / %d = %lf\n", -11, -3, fmod(-11,-3));

 printf("e elevado a %lf = %lf\n", x1, exp(x1));
 printf("e elevado a %d = %lf\n", 0, exp(0));
 printf("e = %lf\n", exp(1));

 printf("Logaritmo neperiano de %lf = %lf\n", x2, log(x2));
 printf("Logaritmo neperiano de %d = %lf\n", 1, log(1));

 /* Esta función no la implementan todos los compiladores */
 /* printf("10 elevado a %d es %lf\n", p, pow10(p));      */

 system ("pause");
 system ("cls");  /* Borrado de pantalla */

 printf("Logaritmo decimal de %lf = %lf\n", x3, log10(x3));
 printf("Logaritmo decimal de %d = %lf\n", 10000, log10(10000));

 printf("%lf elevado a %lf = %lf\n", base, exponente, pow(base, exponente));
 printf("%d elevado a %d = %lf\n", 2, 16, pow(2, 16));

 printf("Raíz cuadrada de %d = %lf\n", 49, sqrt(49));
 printf("Raíz cuadrada de %d = %lf\n", 2, sqrt(2));

 printf("Seno de %lf = %lf\n", PI/2, sin(PI/2));
 printf("Coseno de %lf = %lf\n", PI, cos(PI));
 printf("Tangente de %lf = %lf\n", PI, tan(PI));
 printf("Arco seno de %d = %lf\n", 1, asin(1));
 printf("Arco coseno de %d = %lf\n", -1, acos(-1));
 printf("Arco tangente de %d = %lf\n", 1, atan(1));

 system ("pause");
 return 0;
}
