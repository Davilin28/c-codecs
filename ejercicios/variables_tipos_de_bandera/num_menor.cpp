
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numintro=0,
        nummenor=0;

    printf("Introduzca 10 numeros:\n");

    for(int i=0; i<10; i++){
        printf("Numero %i:", i+1);
        scanf(" %d", &numintro);
    if(i==0)
        nummenor=numintro;

        nummenor=numintro;
    }
    printf("El numero menor introducido es %i.\n", nummenor);
    return EXIT_SUCCESS;
}
