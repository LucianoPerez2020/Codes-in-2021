/*Dar la calificación final a un alumno teniendo en cuneta 
los 3 tps(55%), el examen (30%) y trabajo final(15%).*/

#include <stdio.h>

float p1;
float p2;
float p3;
float p123;
float examen;
float tp;
float final;

int main(){
    
    p1 = 0;
    p2 = 0;
    p3 = 0;
    p123 = 0;
    examen = 0;
    tp = 0;
    final = 0;
    
    printf("Ingrese las notas de sus parciales, el examen y el trabajo final.\n");
    
    printf("\nParcial 1: ");
    scanf("%f",&p1);
    
    printf("Parcial 2: ");
    scanf("%f",&p2);
    
    printf("Parcial 3: ");
    scanf("%f",&p3);
    
    printf("Examen final: ");
    scanf("%f",&examen);
    
    printf("Trabajo final: ");
    scanf("%f",&tp);
    
    p123 = (p1 + p2 + p3) / 3;
    final = (p123 * 0.55) + (examen * 0.30)+ (tp * 0.15);
    
    printf("\nCalificación final: %.2f",final);
    
    if (final > 7)
     printf("\nMateria aprovada.");
    else
     printf("\nMateria desaprovada.");
    
    return 0;
}
