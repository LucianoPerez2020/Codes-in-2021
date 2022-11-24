#include <stdio.h>

float a;

int main(){
    
    a = 0;
    
    printf("Ingrese un número: ");
    scanf("%f",&a);
    
    if(a>0){//Si a ES mayor a 0 para esto.
        printf("Su número es mayor a 0.");
    }
    
    else{//Si a NO ES mayor a 0 hace esto.
        printf("ERROR, el número debe ser mayor que cero.");
    }
  
    return 0;
}
