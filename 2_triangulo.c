/**
 * Un programa que acepte tres argumentos enteros positivos.
 * Imprime "falso" si alguno es mayor o igual a la suma de los otros dos.
 * Caso contrario imprime "verdadero".
 */
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

int X = atoi(argv[1]);
int Y = atoi(argv[2]);
int Z = atoi(argv[3]);

if (( X < Y && Y < Z ) || (Z < Y && Y < X ));
{
  printf("verdadero");
  return 0;
}
{
  printf("falso");
  return 0;
}

}
