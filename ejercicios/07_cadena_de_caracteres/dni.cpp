
#include <stdio.h>
#include <stdlib.h>

int main(){
    int conversor;
    char dni[9] = "00000000";

    printf("Introduzca tu dni: \n");
    scanf(" %s", dni);

    conversor = atoi(dni);
    printf("Tu dni en nº entero es: %i\n", conversor);

    return EXIT_SUCCESS;
}
