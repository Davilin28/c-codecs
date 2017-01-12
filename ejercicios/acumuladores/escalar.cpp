
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vector1[2],
        vector2[2];
    int escalar;

    printf("Introduzca el valor x del primer vector\n");
    scanf(" %i", &vector1[0]);
    printf("Introduzca el valor y del primer vector\n");
    scanf(" %i", &vector1[1]);

    printf("Introduzca el valor x del segundo vector\n");
    scanf(" %i", &vector2[0]);
    printf("Introduzca el valor y del segundo vector\n");
    scanf(" %i", &vector2[1]);

    escalar = vector1[0] * vector2[0] + vector1[1] * vector2[1];
    printf("El resultado del producto escalar es: %i\n", escalar);

    return EXIT_SUCCESS;
}
