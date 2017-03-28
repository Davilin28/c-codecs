#include <stdio.h>
#include <stdlib.h>

#define N 30

int main(int argc, char *argv[]){

    char nombre[N];

    printf("Escribe  tu nombre:\n ");
    scanf(" %s", nombre);

    printf("Tu nombre es: %s \n", nombre);

    return EXIT_SUCCESS;
}
