#include <stdio.h>
#define CANT 5

int main(){
    int i, j, aux;
    int arreglo[CANT]={6,8,9,1,5};
    //arreglo[0]=1;
    
    for( i=1;i<CANT;i++)
    {
        for( j=0;j<CANT-1;j++)
        {
            if(arreglo[j]>arreglo[j+1])
            {
                aux=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=aux;
            }
        }
    }
    for(i=0;i<CANT;i++)
    {
        printf( "%i\n",arreglo[i]);
    }
}