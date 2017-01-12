
#include <stdio.h>
#include <stdlib.h>

int main(){

    int nlista,
        fila=1,
        columna;

    printf("Introduzca el numero de la lista:\n");
    scanf(" %i",&nlista);

    do{
        if(nlista >17){
            nlista -= 17;
            fila++;
        }
    }while(nlista >17);

    columna = nlista;

    printf("El alumno se sienta en la fila %i y en la columna %i\n",fila,columna);

    return EXIT_SUCCESS;
}
