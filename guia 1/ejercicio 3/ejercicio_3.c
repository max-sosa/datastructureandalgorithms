/*3. Se ingresan la cantidad de autos vendidos en los últimos 9 años. Calcular y mostrar:
a) El año que se vendieron la mayor cantidad de autos.
b) La cantidad total de autos vendidos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int cars, year, pos, max, v[9];

max = 0;
pos = v[0];

for (year=1;year<10;year++){

    cars = rand()%(1000-10000+1);
    v[year] = cars;
    printf("En el año Nº: %i se vendieron %i autos\n", year, cars);

    if (v[year]>max){
        max = v[year];
        pos = year;
    }
}

    printf("La mayor cantidad de autos vendida fue %i, en el año %i", max, pos);

return 0;


}