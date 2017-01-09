
#include <stdio.h>
#include <stdlib.h>

int main(){

    int lista[10];

    for(int con=0; con < 10; con++){
        lista[con]=(1+con)*(1+con);
        printf("Lista numeros naturales: %i\n", lista[con]);
    }

    return EXIT_SUCCESS;
}
