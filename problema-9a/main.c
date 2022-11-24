/*Calcular el nuevo salario de un obrero si tuvo 
un incremento del 25% sobre su salario anterior.*/

#include <stdio.h>

float salario;
float incremento;

int main(){
    
    salario = 0;
    incremento = 0;
    
    printf("Valor del salario anterior: ");
    scanf("%f",&salario);

    incremento = salario * 0.25 + salario;

    printf("\nValor del nuevo salario: $%.2f",incremento);
    
    return 0;
}