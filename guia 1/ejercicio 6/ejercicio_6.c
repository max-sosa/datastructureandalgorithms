/*6. Ingresar números hasta que dicho número sea negativo. Por cada número leído, ingresar esa cantidad de números y obtener:
a) El promedio de cada lote leído.
b) Contar la cantidad de números pares de todos los números leídos.*/

#include <stdio.h>
#include <math.h>

int main(){

    int numlote, numero,i, acc=0,cont=0,promedio;

    printf("Ingresar numeros hasta que dicho numero sea negativo: ");
    scanf("%i", &numlote);

    while (numlote>=0){
        for (i=0; i<numlote;i++){
            printf("ingrese %i numeros dentro del lote: ",numlote);
            scanf("%i", &numero);
            acc += numero;
            if (numero%2==0){
                cont++;
            }
        }
        promedio = acc / numlote;
        printf("Promedio de los numeros del lote: %i\n", promedio);
        printf("Cantidad de numeros pares: %i\n", cont);

        acc = 0;
        cont = 0;

    printf("Ingresar numeros hasta que dicho numero sea negativo: ");
    scanf("%i", &numlote);
    }

    return 0;
}