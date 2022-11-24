/*Ingresar por teclado  el nombre y el signo de cualquier persona e imprima, el 
nombre solo si la persona es signo Aries, caso contrario imprima "No es signo Aries".*/

#include <stdio.h>

char nombre[30];
char signo[15];

int main(){
    
    printf("Ingrese su nombre: ");
    gets(nombre);
    
    printf("Ingrese su signo: ");
    gets(signo);
    
    if (strcmp(signo,"aries") == 0){
     printf("Es signo Aries y su nombre es %s.",nombre);
    }
    
    else{
     printf("No es singo Aries");
    }
    return 0;
}
