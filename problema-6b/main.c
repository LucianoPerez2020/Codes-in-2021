/*Ingrese un número y calcule e imprima su raiz cuadrada. Si el número es 
negativo imprima el número y un mensaje que diga tiene raíz imaginaria.*/

#include <stdio.h>
#include <math.h>

float a;

int main(){
    
    a = 0;
    
    printf("Ingrese su número: ");
    scanf("%f",&a);
    
    a = sqrt (a);
    
    if(a < 0){
     printf("Tiene raíz real.");
    }
    
    if(a == 0){
     printf("Valor nulo.");
    }
    
    if{
     printf("Tiene raíz imaginaria."); 
     printf("(%f)",a);
    }

    return 0;
}