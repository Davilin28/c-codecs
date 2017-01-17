
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x10

/* Declara un array de N caracteres que se llame buffer */
/* Declara una variable que sea un puntero a una palabra */
/* Pidele el nombre al usuario asegurate que el usuario puede tener un nombre compuesto */
/* Reservar espacio para la variable que acaba de meter el usuario */
/* Copia lo que hay en buffer a palabra */
/* Imprime la palabra */
/* Libera la memoria a la que apunta la palabra*/

int main(int argc, char *argv[]){

    char buffer[N];
    char *palabra;

    printf("Dime tu nombre:\n");
    fgets(buffer, N, stdin);

    palabra = (char *) malloc( strlen(buffer)+1);

    strcpy(palabra, buffer);
    printf(" %s\n", palabra );

    free(palabra);

    return EXIT_SUCCESS;
}
