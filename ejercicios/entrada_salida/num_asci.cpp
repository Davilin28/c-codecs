
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Indica en numero para monstrarlo en ascii\n");
    scanf(" %i", &numero);

    printf("Tu numero es ascii es: %i => %c\n", numero,numero);

    return EXIT_SUCCESS;
}
