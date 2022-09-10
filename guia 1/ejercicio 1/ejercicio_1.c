/*1. Calcular el índice de masa corporal ingresando el peso de una persona en kilos y su
estatura en metros. Este índice se obtiene realizando el cociente entre el peso y el
cuadrado de la estatura.*/

#include <stdio.h>
#include <math.h>


int main()
{
    float p, a, resultado;
    printf("Ingrese su peso en kilogramos\n");
    scanf("%f",&p);
    printf("Ingrese su altura en metros\n");
    scanf("%f",&a);
    resultado = p / pow(a,2);
    printf("Su indice de masa corporal es %f", resultado);
  return 0;   
}