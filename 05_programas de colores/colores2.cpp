#include <stdio.h>
#include <stdlib.h>


int main(){

	int color1, color2, acumulador;
	
	MENU:

	printf ("¿Cual es el primer color que ves?: (Indique el nº)\n"
		"\t1. Rojo \n"
		"\t2. Amarillo \n"
		"\t3. Azul\n"
	       );

	scanf(" %i", &color1);


	printf ("¿Cual es el segundo color que ves? (Indique el nº)\n"
		"\t1. Rojo \n"
		"\t2. Amarillo \n"
		"\t3. Azul\n"
	       );

	scanf(" %i", &color2);

	acumulador = color1 * color2 + 10;
	
	if (acumulador == 12){
		printf ("Su color es Naranja\n");

	}
	
	if (acumulador == 13){
		printf ("Su color es Morado\n");
	
	}

	if (acumulador == 16){
		printf ("Su color es Verde \n");
	
	} 
	

 return EXIT_SUCCESS;
}




