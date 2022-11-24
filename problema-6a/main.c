//Calcule la media aritmética de 3 números cualesquiera.

#include <stdio.h>

float v1;
float v2;
float v3;
float med;

int main(){
    
    v1 = 0;
    v2 = 0;
    v3 = 0;
    med = 0;
    
    printf("Ingrese 3 valores para calcular su media.\n");
    
    printf("\nValor 1: ");
    scanf("%f",&v1);
    
    printf("Valor 2: ");
    scanf("%f",&v2);
    
    printf("Valor 3: ");
    scanf("%f",&v3);
    
    med = (v1 + v2 + v3) / 3;
    
    printf("\nLa media de sus tres valores es de %.2f",med);

    return 0;
}