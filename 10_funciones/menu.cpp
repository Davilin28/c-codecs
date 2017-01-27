#include <stdio.h>
#include <stdlib.h>

#define camisetas 1
#define compras 2
#define alimentacion 3
#define juegos 4

int menu(){

    int opcion1;

    printf("Menu\n");
    printf("\t 1- Introduzca el numero 1 para elegir camisetas.\n");
    printf("\t 2- Introduzca el numero 2 para elegir compras.\n");
    printf("\t 3- Introduzca el numero 3 para elegir alimentacion.\n");
    printf("\t 4- Introduzca el numero 4 para elegir juegos.\n");

    scanf(" %i", &opcion1);

       return opcion1;
}

int main(int argc, char *argv[]){

    char opcion = menu();

   if(opcion == camisetas)

      printf("Has elegido camisetas\n");

   if(opcion == compras)

      printf("Has elegido compras\n");

   if(opcion == alimentacion)

      printf("Has elegido alimentacion\n");

   if(opcion == juegos)

      printf("Has elegido Juegos\n");

    return EXIT_SUCCESS;
}
