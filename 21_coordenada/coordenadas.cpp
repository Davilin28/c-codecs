#include <stdio.h>
#include <stdlib.h>

typedef struct TCoordenada{
    int x;
    int y;
}Coordenada;

void a2S(Coordenada *Coordenada){

        Coordenada ->x *=2;
        Coordenada ->y *=2;
}
int main(int argc, char *argv[]){

    Coordenada Coordenada;

    printf("Escribe la coordenada x: \n");
    scanf(" %i", &Coordenada.x);

    printf("Escribe la coordenada y: \n");
    scanf(" %i", &Coordenada.y);

    a2S(&Coordenada);

    printf(" %i, %i \n", Coordenada.x, Coordenada.y);

    return EXIT_SUCCESS;
}
