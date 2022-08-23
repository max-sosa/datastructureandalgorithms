//Crear un array de 9 posiciones, cargar los datos correspondientes, teniendo en cuenta que el valor máximo puede repetirse. Cargar la o las posiciones en las que se encuentra el valor/es máximos en un nuevo array.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int numero, v[9], pos, may, i, cont;

int main(){

may = 0;
cont = 0;
pos = v[0];

    for (i=0;i<9;i++){
        numero = rand()%(10-100+1);
        v[i] = numero;
        printf("%i\n",v[i]);

        if (may <= v[i]){
        may=v[i];
        pos=i;
        cont++;
        }
    }

printf("mayor:%i\n",may);
printf("posicion:%i\n",pos);
printf("contador:%i",cont);
}