/*Dadas las horas trabajadas de una persona y el 
valor por hora. Calcular su salario e imprimirlo.*/

#include <stdio.h>

float horas;
float vhora;
float paga;

int main(){
    
    horas = 0;
    vhora = 1000;
    paga = 0;
    
    printf("Horas de trabajo: ");
    scanf("%f",&horas);

    paga = vhora * horas;

    printf("\nSu salario es de $%.2f",paga);
    
    return 0;
}