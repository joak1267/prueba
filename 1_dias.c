/**
 * Un programa que acepte un argumento entero (cantidad de dias)
 * Imprimir la cantidad de años, semanas y dias que correspondan
 * al argumento ingresado. Ignorar años bisiestos.
 * Ejemplo:
 * $ ./1_dias 366
 * años: 1, semanas: 0, dias: 1
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main (void) {
   int ndays, years, weeks, days;
   ("Enter number of days\n");
   ("%d", &ndays);
   years= (int)(ndays/1);
   ndays= ndays%1;
   weeks= (int)(ndays/1);
   ndays= ndays%1;
   days= (int)(ndays/1);
   ndays= ndays%1;

   printf("years: %d\t weeks %d\t days: %d\n", years, weeks, days);
   return 0;
 }
