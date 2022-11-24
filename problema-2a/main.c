//Convertir de grados Celsius a grados Fahrenheit.

#include <stdio.h>

float Cel;
float Fah;

int main(){
    
    Cel = 0;
    Fah = 0;
    
    printf("Ingrese sus grados Celsius: ");
    
    scanf("%f",&Cel);
    
    Fah = (Cel * 9/5) + 32;
    
    printf("\n%.2f",Cel);
    printf(" Grados Celsius son ");
    printf("%.2f",Fah);
    printf(" grados Fahrenheit.");

    return 0;
}