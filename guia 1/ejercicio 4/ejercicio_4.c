/* 4. Ingresar números hasta que dicho número sea negativo. Calcular y mostrar:
a) Cantidad de números mayores a 4 y menores a 25.
b) Promedio de aquellos números múltiplos de 6.
c) El menor número leído.*/

#include <stdio.h>
#include <math.h>

int main(){
    
    int numero, cont=0, multiplo=0, acc=0, promedio=0,min;
    
    printf("Para ver los resultados ingrese un numero negativo.\n");
    printf("Ingrese un número (hasta 10 números): ");
    scanf("%i",&numero);

    min = numero;

    while (numero >= 0){
        
        if (numero%6 == 0){
            multiplo++;
        }
        
        if (numero > 4 && numero < 25){
            cont++;
        }

        if (numero%6 == 0){
            acc += numero;
        }

        if (multiplo>0){
            promedio = acc/multiplo;
        }
        
        if (numero<min){
            min=numero;
        }

        printf("Para ver los resultados ingrese un numero negativo.\n");
        printf("Ingrese un número (hasta 10 números): ");
        scanf("%i",&numero);
    }

    printf("Los números entre 4 y 25 son: %i\n", cont);
    printf("El promedio de números multiplos de 6 es: %i\n", promedio);
    printf("El numero mas chico ingresado es: %i", min);

    return 0;
}