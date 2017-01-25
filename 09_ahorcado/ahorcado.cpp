#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 10
#define CANTIDAD(x) (sizeof ( (x) ) / sizeof(char *) - 1)

const char *palabra[]={"melifluo","inefable","sonambulo","serendipia","limerencia","etereo","arrebol","irisdencia","epifania","luminiscencia","soledad","aurora","efimero","incandescencia","elocuencia","efervescencia",NULL};

int main(int argc, char *argv[]){

    printf("\tBienvenido al ahorcado\n");

    printf("\tTienes 6 intentos \n");

    char adivinado[MAX], letErroneas[MAX];
    const char *elegida;
    char letra;
    int aleatoria, numLet = 1, Errores = 0;

/*Relleno de huecos con ceros y guiones*/
    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];
    numLet = strlen( elegida );

    bzero(adivinado,MAX);
    for (int i=0; i<(int) strlen(elegida); i++)
        adivinado[i] = '-';
        adivinado[0] = ' ';

    /*Comprobacion de errores y adivinanzas*/
    printf("\t\n%s\n", adivinado);

    while(numLet && Errores <5){
        printf("Mete una letra: ");
        scanf(" %c",&letra);

       int anterior = numLet;
       for(int i=0 ; i<strlen(elegida); i++){
        if(letra == elegida[i]){
            adivinado[i] = letra;
            numLet --;
        }
    }

    if(anterior == numLet)
        letErroneas[Errores++] = letra;

    printf(" %s\n",adivinado);
    printf(" Llevas %i errores \n Te quedan %i errores por realizar",Errores,5-Errores);

    if(Errores > 0)
       printf(" Has dicho estas letras erroneas: %s \n",letErroneas);

    if(numLet == 0)
        printf("\n Has GANADO !\n");
    else if(Errores == 5)
        printf("\n Has PERDIDO !\n");
    }
    return EXIT_SUCCESS;
}
