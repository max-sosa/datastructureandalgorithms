#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, numero, v[10], cont, multiplo, acc, promedio;

int main()
{

i = 0;
acc = 0;
multiplo = 0;

    do{
            printf("Ingrese un (número hasta 10 números): ");
            scanf("%i",&numero);

        if (numero >= 0){
            v[i] = numero;
            i++;
            
        }

        if (numero%6 == 0){
            multiplo++;
        }
        
    } while (numero >= 0);

    for (i=0; i<10;i++){
        
        if (v[i] > 4 && v[i] < 25){
            cont++;
        }

        if (v[i]%6 == 0){
            acc = acc + v[i];
        }
    
    }

    promedio = acc/multiplo;

    printf("Los números entre 4 y 25 son: %i\n", cont);
    printf("El promedio de números multiplos de 6 es: %i", promedio);
   

return 0;
}