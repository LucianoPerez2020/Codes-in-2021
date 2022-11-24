/*Calcular la cantidad de segundos que están incluidos en el 
nuemro de horas, minutos y segundos ingresados por el usuario.*/

#include <stdio.h>

float horas;
float minutos;
float segundos;
float total;

int main(){
    
    horas = 0;
    minutos = 0;
    segundos = 0;
    total = 0;
    
    printf("Ingrese la cantidad de horas: ");
    scanf("%f",&horas);
    
    printf("Ingrese la cantidad de horas: ");
    scanf("%f",&minutos);
    
    printf("Ingrese la cantidad de horas: ");
    scanf("%f",&segundos);
    
    horas = horas * 3600;
    minutos = minutos * 60;
    segundos = segundos * 1;
    total = horas + minutos + segundos;
    
    printf("\nCantidad de segundos: %.2f",total);

    return 0;
}