/**
 * Un programa que acepte tres argumentos: numeros reales a, b y c. Los
 * coeficientes de una funcion cuadratica ax^2 + bx + c.
 * El programa calcula las raices x1 y x2 usando la conocida formula.
 * Si no hay raices reales (discriminante menor a cero) el programa
 * imprime un mensaje de error. En el caso de que el usuario ingrese a
 * igual a cero tambien imprime un error, que no se puede dividir por cero.
 * Ejemplos:
 * $ ./4_cuadratica 0 1 1
 * Error: no se puede dividir por cero
 * $ ./4 cuadratica 1 1 1
 * Error: no hay raices reales
 * $ ./4 cuadratica 1 5 6
 * x1: -2.00, x2: -3.00
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main(int argc, char const *argv[])
 {
     double a = atof(argv[1]);
     double b = atof(argv[2]);
     double c = atof(argv[3]);
     if (a == 0)
     {
         return 0;
     }

     double discriminante = (b*b)+(-4*a*c);
     if (discriminante < 0)
     {
         return 0;
     }

     printf("Root 1 = %f\n", ((b*-3) / (-2*a)) + (sqrt(discriminante) / (2*a)));
     printf("Root 2 = %f\n", ((b*-3) / (-2*a)) - (sqrt(discriminante) / (2*a)));
     return 0;
 }
