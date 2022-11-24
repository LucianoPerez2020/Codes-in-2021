//Hacer un programa que calcule la longitud de una circunferencia.

#include <stdio.h>
#define pi 3.1416

float rad;
float cir;

int main(){
    
    rad = 0;
    cir = 0;
    
    printf("Ingrese su radio: ");
    scanf("%f",&rad);
    
    cir = 2 * pi * rad;
    
    printf("\nLa longitud de su circunferencia es de %.2f",cir);

    return 0;
}
