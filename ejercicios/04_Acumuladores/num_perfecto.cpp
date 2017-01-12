
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,
        num,
        sum = 0,
        mul = 0;

    printf("Introduzca un numero para comprobar si es perfecto o no: \n");
    scanf(" %d", &num);

    for(i=1; i<num; i++){
        mul=num%i;

        if(mul==0){
            sum+i;
        }
    }
    if(sum==mul){
        printf("El numero %d es perfecto.\n", num);
    }
    else
        printf("El numero %d no es perfecto.\n", num);

    return EXIT_SUCCESS;
}
