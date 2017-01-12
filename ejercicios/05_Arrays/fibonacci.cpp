
#include <stdio.h>
#include <stdlib.h>

int main(){

    int pprevio =1,
        previo =1,
        ahora,
        contador =2;

    printf(" %i, %i", pprevio,previo);

    do{
        ahora = pprevio + previo;
        printf(" %i", ahora);

        pprevio = previo;
        previo = ahora;
        contador++;
    }while(contador < 100);

    printf("\n");

    return EXIT_SUCCESS;
}
