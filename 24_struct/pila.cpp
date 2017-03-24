#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//#include "notas.h"

#define N 0x100

struct TStack{
    struct TAlumno *data[N];
    int cima;
};

void push(struct TStack *pila, struct TAlumno *al){}
struct TAlumno *pop(struct TStack *pila){}

int main(int argc, char *argv[]){

    struct TAlumno *alumno;
    struct TStack pila;
    pila.cima = 0;

    alumno = (struct TAlumno *) malloc(sizeof (struct TAlumno));
    pila.data[0] = alumno;
    pila.cima++;

    return EXIT_SUCCESS;
}
