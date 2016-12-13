#include <stdio.h>
#include <stdlib.h>

int main(){
    int amarillo, rojo, azul;

    printf("Rojo (0/1): ");
    scanf(" %i;", &rojo);

    printf("Amarillo (0/1): ");
    scanf(" %i;", &amarillo);

    printf("Azul (0/1): ");
    scanf(" %i;", &azul);

    if(rojo)
        if(amarillo)
            if(azul)
                printf("Estas viendo Blanco");
            else
            printf("Estas viendo Naranja");
        else
            if(azul)
                printf("Estas viendo Morado");
            else
                printf("Estas viendo Rojo");
    else
      if(amarillo)
          if(azul)
              printf("Estas viendo Verde");
          else
              printf("Estas viendo Amarillo");
      else
          if(azul)
              printf("Estas viendo Azul");
          else
              printf("Estas viendo Negro");


      printf("\n");


    return EXIT_SUCCESS;
}
