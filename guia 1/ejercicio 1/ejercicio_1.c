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