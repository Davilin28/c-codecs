<<<<<<< HEAD
=======

>>>>>>> ac246b69c05fbb78b510c8e042b7be30dbd9655f
#include <stdio.h>
#include <stdlib.h>

int main(){
    int decimal;

<<<<<<< HEAD
    printf("Decimal: "); // muestrame en pantalla el numero decimal.
    scanf(" %i", &decimal); //scanft: llamada a la funcion. %i lee del buffer un numero entero. & se lee como una llamada de...
=======
    printf("Decimal:"); // muestrame en pantalla decimal.
    scanf(" %i", &decimal); // scanf: llamada a la funcion. %i lee del buffer un numero entero. & se lle como una llamada de.
>>>>>>> ac246b69c05fbb78b510c8e042b7be30dbd9655f

    // Hacer
    //  Imprimir decimal % 2
    //  Decimal = decimal / 2
    // Mientras decimal / 2 > 0

    do {
        printf("%i", decimal % 2);
        decimal /= 2;
<<<<<<< HEAD
    } while (decimal>0); // do es hacer y while si se cumple la condicion haz otra condicion, si no se cumple sal.
    printf("\n"); // imprimir salto de linea.
=======
    } while(decimal>0); // do es hacer y while si se cumple la condicion haz otra condicion, si no se cumple sal
    printf("\n"); //imprimir salto de linea.
>>>>>>> ac246b69c05fbb78b510c8e042b7be30dbd9655f

    return EXIT_SUCCESS;
}
