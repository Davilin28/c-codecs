#include <stdio.h>
#include <stdlib.h>

int main(){

    int amarillo,
        azul,
        rojo;

      //Primer paso preguntamos por los tres colores primarios
      //Damos unos valores para poder diferenciar nuestro colores:
      //Ej. amarillo, rojo y azul

    printf("\t¿Ves el color amarillo?(no=0, si=1)\n");
    scanf(" %i", &amarillo);


    printf("\t¿Ves el color rojo?(no=0, si=1)\n");
    scanf(" %i", &rojo);

    printf("\t¿Ves el color azul?(no=0, si=1)\n");
    scanf(" %i", &azul);

    if (amarillo == 0 and rojo == 0 and azul == 0)
        printf("Estas viendo el color negro\n");
    else
        if (amarillo == 0 and rojo == 0 and azul == 1);
        printf("Estas viendo el color azul\n");

    return EXIT_SUCCESS;
}
