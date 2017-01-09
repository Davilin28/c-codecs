
#include <stdio.h>
#include <stdlib.h>

int main(){

    int nombre[] = {100,97,118,105,100,0};

    for (int con = 0; con < sizeof(nombre)/sizeof(con); con++)
        printf(" %c\n", nombre[con]);

    return EXIT_SUCCESS;
}
