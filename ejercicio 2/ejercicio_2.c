#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, dia, max, pos, v[31];
    float dolar;

    pos = v[1];

    for(i=1;i<32;i++)
    {
        dolar = drand48() * (300-250) + 200;
        printf("El dia %i/08/2022, el precio del dolar es $%f\n", i, dolar);
        
        if(v[i]>max)
	        max=v[i];
	}
        
    printf("El valor del dolar llego a su valor maximo el dia: %i/08/2022",v[i]);


    return 0;
    
}