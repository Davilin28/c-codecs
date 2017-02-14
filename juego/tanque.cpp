#include <stdio.h>
#include <stdlib.h>

#define INC 0.5

double x_cuanto(double x){
    return x * x;
}

int main(int argc, char *argv[]){

    double x;

    printf("Introducir numero: \n");
    scanf("%lf", &x);
    system("clear");

    printf("la derivada es: %.2lf\n", (x_cuanto(x+INC) - x_cuanto(x)) / INC);

    return EXIT_SUCCESS;
}
