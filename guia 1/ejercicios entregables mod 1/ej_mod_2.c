/*2. Ingresar números hasta leer un cero. Se pide informar la cantidad de números malvados leídos.
Un Número malvado es todo número natural cuya expresión en base 2 (binaria) contiene un número par de unos.
Por ejemplo 12 , y 15 son números malvados ya que 12=11002 y 15=11112.*/ 

//ARREGLAR PORQUE NO FUNCIONA BIEN, TOTAL?!?.

#include <stdio.h>
#include <math.h>

int main(){
    int numero, resto, total, num_inicial, i=0;

    printf("Ingrese un número distinto de 0: ");
    scanf("%i", &numero);
    
    do{
        num_inicial = numero;
        
        while (numero>1){
            resto = numero%2;
            numero /= 2;

            if (resto == 1){
                i++;
            }
        }
        total = numero + i;
        printf("total: %i", total);

        if (total%2==0){
            printf("El número %i es malvado\n", num_inicial);
        } else {
            printf("El número %i NO es malvado\n", num_inicial);
        }
        total = 0;

        printf("Ingrese un número distinto de 0: ");
        scanf("%i", &numero);

    } while(numero !=0);

    printf("Fin del programa.");

    return 0;
}