
#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[10];

    printf("Escribe tu nombre:\n");
    scanf(" %s", nombre);

    printf("Tu nombres es: %s", nombre);

    return EXIT_SUCCESS;
}
