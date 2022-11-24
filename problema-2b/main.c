//Comprobar si un número digitado por el usuario es positivo o negativo.

#include <stdio.h>

float n1;

int main(){
    
    n1 = 0;
    
    printf("Ingrese su número: ");
    scanf("%f",&n1);
    
    if(n1 > 0)
    printf("\nSu número es positivo.");
    
    else if(n1 == 0)
    printf("\nSu número es neutro.");
    
    else
    printf("\nSu número es negativo.");
    
    return 0;
}