#include <stdio.h>

int main(){
    
    char x[50];
    
    /*
    Le pido 50 valores simbolicos, esto hace que pueda escribir numeros
    y/u oraciones sin problemas. Eso si no tiene que haber simbolos<50.
    */
    
    printf("Escriba aqui su nombre: ");
    gets(x);
    
    //gets: permite guardar una cadena de cargateres.
    //(x): me hace posible escribir con el valor que tiene char (50).
    
    printf("Su nombre es: %s" ,x);

    return 0;
}