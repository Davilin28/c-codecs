
#include <stdio.h>
#include <stdlib.h>

int main(){

    int sumtotal=0,
        numintro,
        media;

    printf("Introduzca 10 numeros para calcular la media\n");

    for(int i=0; i<10; i++){
        printf("Numero %i:", i+1);
        scanf(" %i", &numintro);

        sumtotal += numintro;
    }

    media = sumtotal/10;
    printf("La nota media es: %i\n", media);

    return EXIT_SUCCESS;
}
