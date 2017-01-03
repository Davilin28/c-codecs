
#include <stdio.h>
#include <stdlib.h>

int main(){

    int numintro=0,
        nummayor=0;

    printf("Intruduzca 10 numeros:\n");

    for(int i=0; i<10; i++){
        printf("Numero %i:", i+1);
        scanf(" %i", &numintro);
    }

    if(numintro > nummayor)
      nummayor=numintro;

    printf("El numero mayor introducido es %i.\n", nummayor);

    return EXIT_SUCCESS;
}
