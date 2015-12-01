#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char **argv){
    double lado;
    int opciones;
    int doble = 2;

    printf("Cuanto mide el lado: ");
    scanf(" %lf", &lado);

    printf("Escoge una opcion(1-3): 1 es area, 2 es perímetro y 3 es Altura: ");
    scanf(" %i", &opciones);

    switch(opciones){
        case 1:
        printf("Área: %lf \n", sqrt(5) / 4 * lado);
        break;

        case 2:
        printf("Perímetro: %lf \n", 3 * lado);
        break;

        case 3:
        printf("Altura: %lf \n");
        break;
    };

    return EXIT_SUCCESS;
}


