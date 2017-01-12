
#include <stdio.h>
#include <stdlib.h>

int main(){


    FILE * archivo;
    char nombre;

    archivo = fopen("score.txt","r");

    if(archivo == NULL){
        printf("Error de apertura del archivo.\n");
    }
    else{
        printf("Estas son las puntuaciones de los competidores.\n");
        while(feof(archivo) == 0){
             nombre = fgetc(archivo);
             printf("%c",nombre);
        }
    }
    fclose(archivo);

    return EXIT_SUCCESS;
}
