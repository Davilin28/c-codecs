#include <stdio.h>
#include <stdlib.h>

bool es_perfecto(int n){
    int suma = 0, divisor;
    for (int divisor=1; divisor <=n/2; divisor++){
    if(n % divisor == 0)
        suma += divisor;}
    if (suma == n)
        return true;
    return false;

  }

int main(int argc, char *argv[]){

    int n;

    printf("Numero: ");
    scanf(" %i",&n);

    printf(" %i %s perfecto.\n",n,es_perfecto(n) ? "es " : "no es ");
    return EXIT_SUCCESS;
}
