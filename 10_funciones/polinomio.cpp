#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(int argc, char *argv[]){

	double coeficiente[N];
	double x, max_cof;
	double potencia = 1;
    	double resultado = 0;

	printf("Indicar numero de coeficientes: \n");
	scanf(" %lf", &max_cof);

	printf("Introducir los coeficientes: \n");

	for(int i=0; i < max_cof; i++)
	    scanf(" %lf", &coeficiente[i]);

	printf("Dime el valor de x: \n");
	scanf(" %lf",&x);

    	for(int j=0; j<=max_cof; j++,potencia*=x)
	    resultado+=coeficiente[j]*potencia;

	printf("Resultado es: %.1lf \n", resultado);

	return EXIT_SUCCESS;
}
