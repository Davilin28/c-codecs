#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Declaro las variables op1, op2, resultado
    // Pedir op1 y op2 al usuario.
    // Poner resultado = 0
    //
    //    Si op2 es impar
    //        acumular op1 en resultado
    //    Divide op2 / 2
    //    Duplica op1
    // Repetir si op2 > 0

    int op1, o1,
        op2, o2,
        resultado = 0;

    printf("Operando 1: ");
    scanf(" %i", &op1);
    o1 = op1;

    printf("Operando 2: ");
    scanf(" %i", &op2);
    o2 = op2;

    do {
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 5bf79ee9023f4cc709a9358c66fad97f9827560e
        if (op2 % 2 == 1)
            resultado += op1;
        op2 >>= 1;
        op1 <<= 1;
<<<<<<< HEAD
=======
=======
      if (op2 % 2 == 1)
          resultado += op1;
      op2 >>= 1; // coge op2 y desplaza los bits a la derecha 1 espacio.
      op1 <<= 1; // coge op1 y desplaza los bits a la izquierda 1 espacio.
>>>>>>> 47738b51fa10e09f4e2cecbf4d03e661076c8465
>>>>>>> 5bf79ee9023f4cc709a9358c66fad97f9827560e
    } while (op2 > 0);

    printf(" %i x %i = %i\n", o1, o2, resultado);

    return EXIT_SUCCESS;
}
