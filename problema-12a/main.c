//Hacer un programa que obtenga la media geométrica de tres números.

#include <stdio.h>
#include <math.h>

float v1;
float v2;
float v3;
float media;

int main(){
    
    v1 = 0;
    v2 = 0;
    v3 = 0;
    media = 0;
    
    printf("Ingrese sus 3 valores.");
    
    printf("\nValor 1: ");
    scanf("%f",&v1);
    
    printf("Valor 2: ");
    scanf("%f",&v2);
    
    printf("Valor 3: ");
    scanf("%f",&v3);

    media = sqrt(v1 * v2 * v3); //FALTA RAIZ CUBICA.

    printf("\nMedia geométrica: %.2f",media);

    return 0;
}