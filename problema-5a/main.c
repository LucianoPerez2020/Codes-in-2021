//Hacer un programa que calcule el área de un trapecio.

#include <stdio.h>

float area;
float b1;
float b2;
float h;
float A;

int main(){
    
    area = 0;
    b1 = 0;
    b2 = 0;
    h = 0;
    A = 0;
    
    printf("Ingrese su base menor: ");
    scanf("%f",&b1);
    
    printf("Ingrese su base mayor: ");
    scanf("%f",&b2);
    
    printf("Ingrese su altura: ");
    scanf("%f",&h);
    
    A = ((b1 + b2) / 2 )* h;
    
    printf("\nEl area de su trapecio es de %.2f",A);

    return 0;
}
