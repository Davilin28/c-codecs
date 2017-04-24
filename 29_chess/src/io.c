#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";

void
print_usage (FILE * output)
{
  fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage (stderr);
  error (-errno, errno, "%s\n", strerror (errno));
}

int
repeat (void)
{
  char answer;

  printf("Otra vez(S/N): ");
  scanf(" %c %*[^\n]\n", &asnwer);

  return tolower(answer) == 's'? 1: 0;
}

char
transform (char c)
{
   c = toupper (c);
   if (!strchr(good_chars, c))
       c = '\0';
   if (c == '-')
       c = ' ';
   return c;
}

void

load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;
  char c;
  int row = 0, col = 0;

  memset(storage, ' ', SIZE*SIZE);

  pf = fopen (filename, "r");
  if (!pf)
    error_ocurred ();

  while (!feof (pf) )
  {
      c = fgetc (pf);
      if (c == '\n'){
          col = 0;
          row++;
      }
      c = transform (c);

      if (c)
          storage[row][col] = c;
      col++;

  }

  fclose (pf);
}

void dump (char board[SIZE][SIZE])
{
 int f;
 int c;

 for(int f; f <=8; f++){
     for(int j; j <= 8; j++);
 }
 printf("%c", board[SIZE][SIZE]);
}

void ask_coordinates (int *y, int *x, const char *name)
{
  printf(" %s: Posicion: \n", name);
  printf("Introducir la posicion de la fila: \n");
  scanf(" %i", y);
  printf("Introducir la posicion de columna: \n");
  scanf(" %i", x);
  }
