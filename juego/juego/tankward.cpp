#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

#define X_C 20
#define Y_C 20

struct TTank1{
    double x;
    double y;
};
struct TTank2{
    double x;
    double y;
};

int main(int argc, char *argv[]){

    double t= 0.;
    struct TTank1 a= { 0., -10. },
                  s= { 0.,   0. },
                  v= {v.x,  v.y };

    struct TTank2 a2= { 0., -10. },
                  s2= { 20.,   0. },
                  v2= {v2.x, v2.y};

/* Introducir datos para tanque 1 */
    printf("Insertar la velocidad de x para el tanque 1: \n");
    scanf(" %lf", &v.x);

    printf("Insertar la velocidad de y: \n");
    scanf(" %lf", &v.y);

/* Introducir datos para tanque 2 */

    printf("Insertar la segunda velocidad de x: \n");
    scanf(" %lf", &v2.x);

    printf("Insertar la segunda velocidad de y: \n");
    scanf(" %lf", &v2.y);

    initscr();
    curs_set(0);

/* Pasen los años */
    for (t=0.; s.y >=0. || s2.y >=0. ; t+= DELTA){

/* actualizar la fisica del tanque 1 */
        v.y += a.y * DELTA;
        s.y += v.y * DELTA;

        v.x += a.x * DELTA;
        s.x += v.x * DELTA;

/* Actualizar la fisica del tanque 2 */
        v2.y += a2.y * DELTA;
        s2.y += v2.y * DELTA;

        v2.x -= a2.x * DELTA;
        s2.x -= v2.x * DELTA;

/* Representar */

        clear();
        mvprintw(YC-s.y, XC+s.x, "0"); // Representamos el disparo del tanque 1 como 0
        mvprintw(Y_C-s2.y, X_C+s2.x, "C"); // Representamos el disparo del tanque 2 como C
        refresh();
        usleep(100000);
    }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
