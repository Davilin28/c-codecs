#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Declaro las variables op1, op2, resultado.
    // Pedir op1 y op2 al usuario.
    // Poner resultado = 0
    //
    //     Si op2 es impar
    //        acumular op1 en resultado
    //     Divide op2 / 2
    //     Duplica op1
    // Repetir si op2 > 0
    //
    // Primero declara las variables int + nombre.
    int op1, o1;
    int op2, o2;
    int resultado = 0;

    // Imprime por pantalla la cadena de caracteres operando 1.
    printf("Operando1: ");

    // Sacame todos los whitespace y lee el numero entero %i, se lee la direccion de: &.
    scanf(" %i", &op1);
    o1 = op1;

    // Imprime por pantalla la cadena de caracteres operando 2.
    printf("Operando2: ");

    // Sacame todos los whitespace y lee el numero entero %i, se lee la direccion de: &.
    scanf(" %i", &op2);
    o2 = op2;

    // Repetir el bucle
    do {
      if (op2 % 2 == 1)
          resultado += op1;
      op2 >>= 1; // coge op2 y desplaca los bits a la derecha 1 espacio.
      op1 <<= 1; // coge op1 y desplaca los bits a la izquierda 1 espacio.
    } while (op2 > 0);

    // printf: Imprime una cadena de caracteres, dentro puede contener especificadores de formato: %i que se sustituye por un argumento: op1, op2, resultado.
    printf(" %i x %i = %i\n", o1, o2, resultado);

    return EXIT_SUCCESS;
}
