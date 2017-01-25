
#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(){

  unsigned int pprevio =1,
               previo =1,
               ahora,


    printf(" %i, %i", pprevio,previo);

    for (int i=0; i<N; i++){
        ahora = pprevio + previo;
        printf(" %u", ahora);

        pprevio = previo;
        previo = ahora;
      }

    return EXIT_SUCCESS;
}
