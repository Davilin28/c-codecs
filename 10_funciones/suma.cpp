#include <stdio.h>
#include <stdlib.h>

int suma (int num1, int num2){
  return  num1 + num2;
}

int main(int argc, char *argv[]){

    printf(" %i\n",suma(2,3));
    printf(" %i\n",suma(5,3));

    return EXIT_SUCCESS;
}
