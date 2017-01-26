#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 20
#define CANTIDAD(x) (sizeof ( (x) ) / sizeof(char *) - 1)

const char *palabra[]={"melifluo","inefable","sonambulo","serendipia","limerencia","etereo","arrebol","irisdencia","epifania","luminiscencia","soledad","aurora","efimero","incandescencia","elocuencia","efervescencia",NULL};

int main(int argc, char *argv[]){

    char adivinado[MAX], letErroneas[MAX], dichas[MAX];
    const char *elegida;
    char letra;
    int aleatoria, numLet, anterior, control = 0, Errores = 0;

/*Relleno de huecos con ceros y guiones*/

    printf("\n Bienvenido al ahorcado\n");
    printf("\n Tienes 6 intentos \n");

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];
    numLet = strlen( elegida );

    bzero(adivinado,MAX);
    for (int i=0; i<(int) strlen(elegida); i++)
        adivinado[i] = '-';

 /*Comprobacion de errores y adivinanzas*/

    printf("\t\n%s\n", adivinado);

    while(numLet !=0 && Errores <5){
        printf("\nMete una letra: ");
        scanf(" %c",&letra);
	anterior = 0;

/* Comprobacion de letras repetidas */

       for(int i=0; i<control; i++){
          if(dichas[i] == letra){
              anterior = 1;
          }
       }

       if(anterior != 1)
       	for(int i=0; i<(int) strlen(elegida); i++){
       	  if(letra == elegida[i]){
            	dichas[control]=letra;
                control++;
                adivinado[i] = letra;
                numLet --;
                anterior = 2;
          }
       }

       if(anterior == 0 || anterior == 1)
          letErroneas[Errores++] = letra;

/* Imprimir por pantalla */

    	printf(" %s\n",adivinado);
   	printf(" Llevas %i errores \n Te quedan %i errores por realizar",Errores,5-Errores);


    	if(Errores > 0)
       	   printf(" Has dicho estas letras erroneas: %s \n",letErroneas);

    	if(numLet == 0)
       	   printf("\t Has GANADO !\n");

    	if(Errores == 5)
           printf("\t Has PERDIDO !\n");
    }		

    return EXIT_SUCCESS;
}
