#include <stdio.h>
#include <stdlib.h>

bool es_primo(int n){
    for(int i=2; i<n; i++){
    if(n % 2 ==0)
      return false;
    }
    return true;
}
int main(int argc, char *argv[]){
    int n;

    printf("Numero:");
    scanf(" %i",&n);

    printf(" %i %s primo.\n",n,es_primo(n)? "es" : "no es");
    return EXIT_SUCCESS;
}
