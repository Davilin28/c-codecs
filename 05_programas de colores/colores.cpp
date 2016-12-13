#include <stdio.h>
#include <stdlib.h>

#define rojo 1
#define amarillo 2
#define azul 3

int main(){

	int color1, color2;

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
	system ("clear");

	if (color1 == rojo and color2 == amarillo){
		printf ("Su color es Naranja\n");
	}

	if (color1 == rojo and color2 == azul){
		printf ("Su color es Morado\n");
	}

	if (color1 == rojo and color2 == rojo){
		printf ("No puede coger el mismo color\n");
		printf ("\n");
		goto MENU;
	}

	if (color1 == amarillo and color2 == rojo){
		printf ("Su color es Naranja\n");
	}

	if (color1 == amarillo and color2 == azul){
		printf ("Su color es Verde\n");
	}

	if (color1 == amarillo and color2 == amarillo){
		printf ("\n");
		printf ("No puede coger el mismo color\n");
		goto MENU;
	}

	if (color1 == azul and color2 == rojo){
		printf ("Su color es Morado\n");
	}

	if (color1 == azul and color2 == amarillo){
		printf ("Su color es Verde\n");
	}

	if (color1 == azul and color2 == azul){
		printf ("\n");
		printf ("No puede coger el mismo color\n");
		goto MENU;
	}

 return EXIT_SUCCESS;
}
