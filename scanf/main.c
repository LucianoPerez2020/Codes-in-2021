#include <stdio.h>

char A, B, C;

int main (){

  printf ("Asignale valor a las variables A, B y C: ");

  scanf (" %c", &A);//Pide un valor de tipo char para la variable A
  scanf (" %c", &B);//Pide un valor de tipo char para la variable B
  scanf (" %c", &C);//Pide un valor de tipo char para la variable C

  /*
     El scanf es para pedir datos, estos datos lo podemos guardar en 
     varibles poniedno un & y despues el nombre de la la variable.
     Ej: scanf(" %c",&A);
   */

  printf ("EL valor de A es: %c \n", A);//Imprime el valor de A como un char dejando un renglon al terminar.
  printf ("EL valor de B es: %c \n", B);//Imprime el valor de B como un char dejando un renglon al terminar.
  printf ("EL valor de C es: %c \n", C);//Imprime el valor de C como un char dejando un renglon al terminar.

  return 0;
}