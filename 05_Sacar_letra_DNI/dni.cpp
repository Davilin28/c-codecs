#include <stdio.h>
#include <stdlib.h>

int main(){

    int dni, letra;
    char letras[]="TRWAGMYFPDXBNJZSQVHLCKE"; // Esto es un array o vector para calcular la letra.

    printf("Introduce tu dni\n");
    scanf("%d", &dni);
    system ("clear");

    if(dni<=999999999){ // Si el dni es menor a 99999999 haz:
        letra = dni%23; // Dividimos el numero entero entre 23
        printf("Tu dni es %d-%c",dni, letras[letra]); // imprime por pantalla %d: el numero entero que te da en la division. %c: comprueba el resultado de la operacion en el array o vector.
        printf("\n");
    }
    else
    {
        printf("No has introducido un dni valido");
    }

    return EXIT_SUCCESS;
}
