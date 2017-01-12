
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Introduzca un numero:\n");
    scanf(" %i", &num);

    for(int i=2; i<num; i++){
          if(num%i==0){
              printf("Tu numero contiene mas de un divisor\n");
              return EXIT_SUCCESS;
          }
      }

    printf("Tu numero no tiene mas de un divisor\n");

    return EXIT_SUCCESS;
}
