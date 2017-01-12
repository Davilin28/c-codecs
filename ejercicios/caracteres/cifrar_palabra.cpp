
#include <stdio.h>
#include <stdlib.h>

int main(){

    char palabra[]= "pene";

    for(int con=0; con < sizeof(palabra)/sizeof(char)-1; con++)

        printf(" %c\n", palabra[con]+3);

    return EXIT_SUCCESS;
}
