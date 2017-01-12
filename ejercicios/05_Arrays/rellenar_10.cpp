
#include <stdio.h>
#include <stdlib.h>

int main(){

    int lista[10];

    for(int con=0; con < 10; con++){
        lista[con]=con+1;
        printf("Relleno: %i\n", lista[con]);
    }
    return EXIT_SUCCESS;
}
