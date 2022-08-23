#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, dia, pos, v[31];
    float dolar, max;

    max = 0;
    pos =  v[0];

    for(i=1;i<32;i++)
    {
        dolar = drand48() * (300-250) + 200;
        v[i] = dolar;
        printf("El dia %i/08/2022, el precio del dolar es $%f\n", i, dolar);
        
        if(v[i]>max){
            max=v[i];
            pos = i;
        }
	        
	}
        
    printf("El valor máximo del dolar en el mes fue: %f, el dia %i/08/2022",max, pos);


    return 0;
    
}