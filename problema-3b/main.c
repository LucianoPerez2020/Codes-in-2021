/*Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
Para un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.OOOy 1.850Kwxh
es 1.0 y mayor de 1.85OKwxh 0.9.*/

#include <stdio.h>

float gasto;

int main(){
    
    printf("Ingrese su gasto de corriente eléctrica: ");
    scanf("%f",&gasto);
    
    if(gasto < 1000){
     printf("Su tarifa es de 1.2");
    }

    if(gasto > 1000 && gasto < 1850){
      printf("Su tarifa es de 1");
    }

    if(gasto > 1850){
     printf("Su tarifa es de 0.9");
    }

    return 0;
}