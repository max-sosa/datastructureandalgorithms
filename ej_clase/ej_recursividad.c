/*Escribir un algoritmo que calcule mediante funcion recursiva el numero factorial*/

#include <stdio.h>
#include <stdlib.h>

long factorial(int numero);

int main(){
    int numero = 1;
    long int resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    resultado = factorial(numero);
    printf("El factorial de %d es %ld.", numero, resultado);
    return 0;
}

long factorial(int numero){
    if (numero==1){
        return numero;
    }else{
        return numero *= factorial(numero-1);
    }
}
