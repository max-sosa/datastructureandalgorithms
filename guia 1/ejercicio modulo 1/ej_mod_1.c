/*1. Generar los primeros cuatro números abundantes.
Un número abundante es todo número natural que cumple que, la suma de sus divisores propios es mayor que el propio número.
Por ejemplo, 12 es abundante ya que sus divisores son 1, 2, 3, 4 y 6 y se cumple que 1+2+3+4+6=16, que es mayor que el propio 12.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int acc=0, numero, i=1, divisor;
    
    //Con este algoritmo se puede calcular el numero ingresando por teclado. (para que funcione dejar i en 0).
    /*do{ 
        printf("Ingrese un número de uno 1 a 100");
        scanf("%d",&numero);

        for(i=1;i<numero;i++){
            if(numero%i==0){
                acc += i;
            }
        }

        if (acc > numero){
            printf("el numero %i es abundante\n", numero);
        }

        acc = 0;
    }   while (numero < 100);*/


    for (numero=1; numero<25;numero++){
        for (divisor=1; divisor<numero;divisor++){
            if (numero%divisor == 0){
                //printf("%i %i\n", numero, divisor);
                acc += divisor;
                }
            }
            
            if (acc > numero){
                printf("El %iº número abundante es: %i\n", i, numero);
                i++;
            }    
        acc = 0;
        
    }
        
    
    return 0;
}