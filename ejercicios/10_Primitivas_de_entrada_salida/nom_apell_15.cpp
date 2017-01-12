


#include <stdio.h>
#include <stdlib.h>

int main(){

    char napellido[100];
    char nombre[15];
    char apellido1[15],apellido2[15];

    printf("Escribe tu nombre y apellidos:\n");
    scanf(" %s %s %s", nombre, apellido1, apellido2);

    sprintf(napellido, "%s %s %s", nombre, apellido1, apellido2);
    printf("Tu nombre y apellidos son: %s.\n", napellido);
    return EXIT_SUCCESS;
}
