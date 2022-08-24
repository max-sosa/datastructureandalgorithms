//Se pide crear un programa que realice la carga de dos números, por intermedio de una función y luego los sume, reste, multiplique, divida y promedie. Utilice funciones para las operaciones y para mostrar los resultados.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float carga1(float n1);
float carga2(float n2);
float sumar(float n1,float n2);
float restar(float n1,float n2);
float dividir(float n1,float n2);
float multiplicar(float n1,float n2);
float promedio(float n1,float n2);


float num1, num2, numero1, numero2, res_suma,res_resta, res_division, res_multi, res_promedio;
float resultado_suma, resultado_resta, resultado_div, resultado_multi, resultado_promedio;

int main(){
    
    printf("Ingrese un número: ");
    numero1 = carga1(num1);

    printf("Ingrese otro número: ");
    numero2 = carga2(num2);

    resultado_suma = sumar(numero1, numero2);
    printf("La suma de los numeros es: %.2f\n",resultado_suma);

    resultado_resta = restar(numero1, numero2);
    printf("La resta de los numeros es: %.2f\n",resultado_resta);

    resultado_div = dividir(numero1, numero2);
    printf("La division de los numeros es: %.2f\n", resultado_div);

    resultado_multi = multiplicar(numero1, numero2);
    printf("La multiplicacion de los numeros es: %.2f\n", resultado_multi);

    resultado_promedio = promedio(numero1,numero2);
    printf("El promedio de los números es: %.2f", resultado_promedio);
}

float carga1(float n1){
    scanf("%f", &n1);
    return n1;
}

float carga2(float n2){
    scanf("%f", &n2);
    return n2;
}

float sumar(float n1, float n2){
    res_suma = n1 + n2;
    return res_suma;
}

float restar(float n1, float n2){
    res_resta = n1 - n2;
    return res_resta;
}

float dividir(float n1, float n2){
    if (n2!= 0){
        res_division = n1/n2;
    }
    return res_division;
}

float multiplicar(float n1, float n2){
    res_multi = n1*n2;
    return res_multi;
}

float promedio(float n1, float n2){
    res_promedio = (n1+n2)/2;
    return res_promedio;
}