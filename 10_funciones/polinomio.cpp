#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char *argv[]){

	int coeficiente[N];
	int x;
	int potencia = 1;
	int max_cof;
    int resultado = 0;
	
	printf("Indicar numero de coeficientes: \n");
	scanf(" %i", &max_cof);
	
	printf("Introducir los coeficientes: \n");
	
	for(int i=0; i <= max_cof; i++){
		scanf(" %d", &coeficiente[i]);
	}
	
	printf("Dime el valor de x: \n");
	scanf(" %i",&x);

    for(int j=0; j<=max_cof; j++,potencia*=x)
		resultado+=coeficiente[j]*potencia;

	printf("Resultado es: %d \n", resultado);
	
	return EXIT_SUCCESS;
}