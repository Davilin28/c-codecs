#include <stdio.h>
#include <stdlib.h>

int main(){

    int edad;
    /*Entrada de datos*/
    printf("Escribe tu edad: ");
    scanf(" %i",&edad);

    /*Salida de datos*/
    printf("Tienes %i años\n", edad);

    return EXIT_SUCCESS;
}
