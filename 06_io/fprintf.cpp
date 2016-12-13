
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *tubo; //Crea un stream

  tubo = fopen("iberos.txt", "w"); //Conectar un tubo a algo. Modo en el que queremos abrirlo, w=escribir si no existe en archivo lo crea pero si existe lo borra y te crea un nuevo, r=leer, a=añadir sirve para abrir un archivo que ya existe y se añade al final.

  printf("hola\n");

  fprintf(stdout, "hola\n");
  fprintf(tubo, "hola\n");

  fclose(tubo); // cierra el tubo que hemos abierto.

    return EXIT_SUCCESS;
}
