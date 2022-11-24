#include<stdio.h>//Libreria de C para ingresar y devolver valores.
#define PI 3.1416//Defino un valor en la palabra "PI".

int y = 5;//Pongo como variable global que y = 5

int main(){//Funcion entera (PREGUNTAR QUE SIGNIFICA)
    
    int x = 10;//Pongo como variable local que x = 10.
    float suma = 0;//Asigno una variable de tipo float (numeros con coma) llamada "suma".
    suma = PI + x;//Digo que el valor de la variable "suma" es el valor de PI + x.
    
    printf ("El resultado de la suma es: %.4f",suma);//Digo que se imprima el valor de la suma.
    
    /*
    Poner un '.' entre el % y f como %.4f hace que se muestren solo 4 numeros despues de la coma.
    */
    
    return 0;//Que la funcion termine.
}