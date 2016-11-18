#include <stdio.h>
#include <stdlib.h>

int main(){
    int decimal;

    printf("Decimal: "); // muestrame en pantalla el numero decimal.
    scanf(" %i", &decimal); //scanft: llamada a la funcion. %i lee del buffer un numero entero. & se lee como una llamada de...

    // Hacer
    //  Imprimir decimal % 2
    //  Decimal = decimal / 2
    // Mientras decimal / 2 > 0

    do {
        printf("%i", decimal % 2);
        decimal /= 2;
    } while (decimal>0); // do es hacer y while si se cumple la condicion haz otra condicion, si no se cumple sal.
    printf("\n"); // imprimir salto de linea.

    return EXIT_SUCCESS;
}
