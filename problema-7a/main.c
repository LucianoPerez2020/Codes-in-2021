/*Una tienda ofrece un descuento del 15% sobre el total de la compra 
y un cliente desea saber ceutno debera pagar finalmente por su compra.*/

#include <stdio.h>

float val;
float des;
float fin;


int main(){
    
    val = 0;
    des = 0;
    
    printf("Ingrese el valor total de su compra: ");
    scanf("%f",&val);
    
    des = val * 0.15;
    fin = val - des;
    
    printf("\nEl precio final seria de $%.2f",fin);

    return 0;
}