/* Fuente: SUMACAD.C
   Programa: SUMAR NUMEROS EN CADENAS
   Descripci�n: Suma dos n�meros "grandes" almacenados en cadenas de caracteres
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* ---------------------------------------------------------- */
/* Prototipos                                                 */
/* ---------------------------------------------------------- */
   void modulo_principal (void);
   void presentacion (void);
   void ejemplo (void);
   char *SumarGrandes (char *, char *);
   int  ValidarCadNumero(char *);

/* ---------------------------------------------------------- */
   int main (void) {
/* ---------------------------------------------------------- */
     char respuesta;

     system ("cls");
     presentacion();
     ejemplo();
     do
       { printf("\n");
	     fflush(stdin); /* Limpia el buffer de teclado */
	     modulo_principal();
	     printf("\n");
	     do
	       { printf("�Otra ejecuci�n (S/N)?: ");
	         fflush(stdin); /* Limpia el buffer de teclado */
	         respuesta = toupper(getchar());
	       }
	     while (respuesta != 'S' && respuesta != 'N');

       }
     while (respuesta != 'N');
     
     return 0;

} /* Fin del main */

/* ---------------------------------------------------------- */
   void presentacion (void) {
/* ---------------------------------------------------------- */
     puts("SUMAR NUMEROS EN CADENAS");
     puts("========================");
     puts("");
     puts("Suma dos n�meros \"grandes\" almacenados en cadenas de caracteres.");
     puts("");
}

/* ---------------------------------------------------------- */
   void ejemplo (void) {
/* ---------------------------------------------------------- */
     char cadena1[] = "435987264847837884";
     char cadena2[] =     "89386373827247";
     char *cadsuma;

     printf ("Ejemplo:\n");

     printf ("%25s\n", cadena1);
     printf ("%25s\n", cadena2);
     cadsuma = SumarGrandes (cadena1, cadena2);
     printf ("    ---------------------\n");
     printf ("%25s\n", cadsuma);
}

/* ---------------------------------------------------------- */
   void modulo_principal (void) {
/* ---------------------------------------------------------- */
     char cadena1[80];
     char cadena2[80];
     char *cadsuma;

     do
       { printf ("Introduzca el primer n�mero : ");
	 gets(cadena1);
       } while (!ValidarCadNumero(cadena1));

     do
       { printf ("Introduzca el segundo n�mero: ");
         gets(cadena2);
       } while (!ValidarCadNumero(cadena2));

     printf ("\n");
     printf ("%25s\n", cadena1);
     printf ("%25s\n", cadena2);
     cadsuma = SumarGrandes (cadena1, cadena2);
     printf ("    ---------------------\n");
     printf ("%25s\n", cadsuma);
}

/* ---------------------------------------------------------- */
   int  ValidarCadNumero(char *num) {
/* ---------------------------------------------------------- */

/* ------------------------------------------------------------- 
      Devuelve 1 si en la cadena recibida todos los caracteres
      son d�gitos. En caso contrario devuelve 0.
   -------------------------------------------------------------  */
     int j=0;
     
     while (num[j] != '\0')
         if (!isdigit(num[j]))       
	      return (0);
         else j++;
 
     return (1);
}

/* ---------------------------------------------------------- */
   char *SumarGrandes (char *num1, char *num2) {
/* ---------------------------------------------------------- */
 
/* ------------------------------------------------------------- 
      Para alinear los n�meros se da la vuelta a las cadenas         
                                                                     
        435987264847837884     488738748462789534                    
       +    89386373827247   + 74272837368398                        
       -------------------   --------------------
        436076651221665131     131566122156670634
    
      as� se pueden sumar lo d�gitos en el sentido creciente de
      recorrido de los arrays
   -------------------------------------------------------------  */
     const char NULO   = '\0';
     char *rnum1, *rnum2, *resul;
     int i, mayor;
     int suma, arrastre;
    
/* ------------------------------------------------------------- 
   Se calcula la "mayor" longitud de los n�meros a sumar
   Se reserva memoria din�mica para dos cadenas con longitud "mayor"
   Se copian los dos n�meros recibidos sobre estas dos cadenas
   Se invierten en estas cadenas los n�meros a sumar
   En "rnum1" y "rnum2" tenemos los dos n�meros a sumar invertidos
   -------------------------------------------------------------  */
     mayor = strlen(num1) > strlen(num2) ? strlen(num1) : strlen(num2);
    
     rnum1 = (char *) malloc ((mayor+1) * sizeof (char));
     rnum2 = (char *) malloc ((mayor+1) * sizeof (char));
    
     strcpy (rnum1, num1);
     strcpy (rnum2, num2);
    
     strrev (rnum1);
     strrev (rnum2);
    
/* ------------------------------------------------------------- 
   Se completa con ceros a la longitud del mayor el otro n�mero
   a sumar
             488738748462789534
             742728373683980000
   -------------------------------------------------------------  */
     if (strlen(rnum1) < mayor)
       { for (i = strlen (rnum1); i < mayor; i++)
	       rnum1[i] = '0';
         rnum1[i] = NULO;
       }
    
     if (strlen(rnum2) < mayor)
       { for (i = strlen (rnum2); i < mayor; i++)
	       rnum2[i] = '0';
         rnum2[i] = NULO;
       }

/* ------------------------------------------------------------- 
   Se reserva memoria din�mica para la cadena resultado de la suma
   Hay que tener en cuenta que la cadena suma puede tener un
   car�cter m�s que la m�xima longitud de las cadenas sumandos,
   debido a arrastre.
   mayor+2 => un d�gito del posible arrastre final y el \0 final
   -------------------------------------------------------------  */
     resul = (char *) malloc ((mayor+2) * sizeof (char));

/* ------------------------------------------------------------- 
   Se suma d�gito a d�gito. Restamos 48 al valor del c�digo ASCII
   del caracter que se suma, dado que seg�n la tabla ASCII
       caracter c�digo ASCII c�digo ASCII - 48
       -------- ------------ -----------------
         '0'        48             0
         '1'        49             1
         '2'        50             2
         ...        ...           ...
         '9'        57             9
   Almacenamos en la cadena resultado el valor del c�digo ASCII de
   la suma sin arrastre m�s el arrastre de la suma anterior
   -------------------------------------------------------------  */
     arrastre = 0;
     for (i = 0; i < mayor; i++)
       { suma = (rnum1[i]-48) + (rnum2[i]-48);
         resul[i] = (char) ( ((arrastre + suma) % 10) + 48);
         arrastre = (arrastre + suma) / 10;
       }

/* ------------------------------------------------------------- 
   Si el �ltimo arrastre no es cero, se coloca como �ltimo d�gito
   del resultado
   Se coloca el \0 final
   -------------------------------------------------------------  */
     if (arrastre != 0)
      {   resul[i] = (char) (arrastre + 48);
          resul[i+1] = NULO;
      }
     else
          resul[i] = NULO;

/* ------------------------------------------------------------- 
   Se devuelve la cadena resultado inviri�ndola antes para obtener
   el resultado en el orden natural
   -------------------------------------------------------------  */
     return (strrev (resul));
}


