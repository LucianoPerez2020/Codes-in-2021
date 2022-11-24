/*Sacar la hipotenusa de un triángulo rectángulo 
pidiendo al usuario el valor de los 2 catetos.*/

#include <stdio.h>

float c1;
float c2;
float h1;

int main(){
    
    c1 = 0;
    c2 = 0;
    h1 = 0;
    
    printf("Ingrese el valor de sus catetos\n");
    
        printf("\nValor 1: ");
        scanf("%f",&c1);
        
        printf("Valor 2: ");
        scanf("%f",&c2);
        
        h1 = c1 * c1 + c2 * c2;

    printf("\nEl valor de su hipotenusa es de: %.2f",h1);
    
    return 0;
}
