//Calcular el mayor de dos números enteros introducidos por teclado.

#include <stdio.h>

float a;
float b;

int main(){
    
    a = 0;
    b = 0;
    
    printf("Ingrese su primer número: ");
    scanf("%f",&a);
    
    printf("Ingrese su segundo número: ");
    scanf("%f",&b);
    
    if(a>b){
        printf("\nSu primer número es mayor que el segundo.");
    }
    
    else if(a<b){
        printf("\nSu primer número es menor que el segundo.");
    }
    
    else{
        printf("\nSu primer y segundo número son iguales.");
    }
 
    return 0;
}
