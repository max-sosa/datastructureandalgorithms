//Escribir una frase y mostrar por pantalla cuantas palabras tiene la misma.

#include <string.h>
#include <stdio.h>
#define largo 32

int main(){
    int i, largocadena,cont;
    char cadena[largo]={"la vida es bella"};
    largocadena = strlen(cadena);
    cont = 0;

    for (i=0;i<largocadena;i++){
        if (cadena[i] == 32){
            cont++;
        }
    }

    printf("CANTIDAD DE PALABRAS ES: %i\n", cont+1);

    return 0;
}