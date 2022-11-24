//Pedir 2 números al usuario sumarlos, restarlos, multiplicarlos y dividirlos.

#include <stdio.h>

int n1,n2;
int suma;
int resta;
int multi;
int divi;

int main(){
    
    n1,n2 = 0;
    suma = 0;
    resta = 0;
    multi = 0;
    divi = 0;
    
    printf("\nIngrese un número: ");
    scanf("%i",&n1);
    
    printf("Ingrese otro número: ");
    scanf("%i",&n2); 
    
    suma = n1 + n2;
    resta = n1 - n2;
    multi = n1 * n2;
    divi = n1 / n2;
    
    printf("La suma daría : %i\n",suma);
    printf("La resta daría: %i\n",resta);
    printf("La multiplicación daría: %i\n",multi);
    printf("La divición daría: %i",divi);

    return 0;
}
