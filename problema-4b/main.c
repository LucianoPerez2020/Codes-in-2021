//Determinar si un número es par o impar.

#include <stdio.h>

int a;
int b;

int main(){
    
    a = 0;
    b = 0;
    
    printf("Ingrese su número: ");
    scanf("%i",&a);
    
    b = a % 2;
    
    if(b == 0){
       printf("Su número es par.");
    }
    else{
       printf("Su número es inpar.");
    }

    return 0;
}