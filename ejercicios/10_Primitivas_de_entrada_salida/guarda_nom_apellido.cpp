

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nombre[10];
    char apellido1[10],apellido2[10];

    printf("Escribe tu nombre y apellidos:\n");
    scanf(" %s %s %s", nombre, apellido1, apellido2);

    printf("Tu nombre y apellidos son: %s %s %s\n", nombre, apellido1, apellido2);

    return EXIT_SUCCESS;
}
