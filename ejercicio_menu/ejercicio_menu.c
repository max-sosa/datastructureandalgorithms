//Crear un menú ( por ahora utilizando IF) donde la opción 1 me permita cargar un arreglo de n posiciones, la opción 2 Ordene mediante burbujeo el arreglo y la opción 3 sea para Salir.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int o, i, numero, n, v[100], j, aux;

int main()
{
    do {
        printf("MENU\n");
        printf("1 - CARGAR VECTOR\n");
        printf("2 - ORDENAR VECTOR DE MENOR A MAYOR\n");
        printf("3 - SALIR\n");
        printf("Bienvenido, ingrese un numero del 1 al 3 para continuar:\n");
        scanf("%i",&o);

        if (o == 1){
        printf("Ingrese el largo del vector: ");
        scanf("%i",&n);
            for (i=0;i<n;i++)
            {
                numero = rand()%(10-100+1);
                v[i] = numero;
                printf("%i\n",v[i]);
            }
        }

        if (o == 2){
            for( i=1;i<n;i++)
            {
                for( j=0;j<n-1;j++)
                {
                    if(v[j]>v[j+1])
                    {
                        aux=v[j];
                        v[j]=v[j+1];
                        v[j+1]=aux;
                    }
                }
            }
            
            for(i=0;i<n;i++)
            {
                printf( "%i\n",v[i]);
            }

        }
    } while (o!=3);

    return 0;
}