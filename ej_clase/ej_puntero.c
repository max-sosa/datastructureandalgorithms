#include <stdio.h>
#include <string.h>
#define largo 90

int main(){
    int i, palabra=1;//, *puntero, a[4]={1,2,3,4};
    char *p;
    char texto[largo] = {"La educacion es lo que queda una vez que olvidamos todo lo que se aprendio en la escuela."};

    p=&texto[0];

   /* for (i=0; i<4; i++){
        *puntero+=1;
        printf("%d",*puntero);
        puntero++;
    }*/

    for (i=0; i<strlen(texto);i++){
        *p+=1;
        //printf("%d\n",*p);
        if (*p==33){
           palabra++; 
        }
        p++;
    }
    printf("Cantidad de palabras que tiene la frase: %i\n",palabra);


return 0;
}