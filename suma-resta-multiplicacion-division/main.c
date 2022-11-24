#include <stdio.h>

int main(){
    
    int a,b,c,d;//Asigno de forma local las variables a-b-c-d como variables numéricas.
    
    a=0;//Asigno el valor de 0 para la variable a.
    b=0;//Asigno el valor de 0 para la variable b.
    c=0;//Asigno el valor de 0 para la variable c.
    d=0;//Asigno el valor de 0 para la variable d.
    
    a=b=c=d=10;//Asigno el valor de 10 para las variables a-b-c-d.
    
    a += 10;//Digo que a es a mas el igual(10).
    b -= 10;//Digo que b es b mas el igual(10).
    c *= 10;//Digo que c es c mas el igual(10).
    d /= 10;//Digo que d es d mas el igual(10).
    
    printf("EL valor es: %i\n" ,a);//Imprimo el valor de la variable a como numero entero.
    printf("EL valor es: %i\n" ,b);//Imprimo el valor de la variable b como numero entero.
    printf("EL valor es: %i\n" ,c);//Imprimo el valor de la variable c como numero entero.
    printf("EL valor es: %i\n" ,d);//Imprimo el valor de la variable d como numero entero.

    return 0;
}
