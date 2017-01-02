
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1,num2;

/*Introduccion de datos del numero1*/
    printf("Introduzca el numero1: \n");
    scanf(" %d", &num1);

/*Introduccion de datos del numero2*/
    printf("Introduzca el numero2: \n");
    scanf(" %d", &num2);

/*Variable de intercambio*/
     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;

/*Mostrar por pantalla el intercambio de valores*/
    printf("El valor del num1 es: %d \nEl valor de num2 es: %d \n", num1, num2);

    return EXIT_SUCCESS;
}
