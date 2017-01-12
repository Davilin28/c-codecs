
#include <stdio.h>
#include <stdlib.h>

int main(){

    char palabras[80];
    char palabra1[50], palabra2[50];

    printf("Dime las dos palabras que quieras guardar:\n");
    scanf(" %s %s", palabra1, palabra2);

    sprintf(palabras, "%s %s", palabra1,palabra2);
    printf("Tus dos palabras son: %s.\n", palabras);

    return EXIT_SUCCESS;
}
