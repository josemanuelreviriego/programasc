#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    //pregunta colores
    //si el color tiene rojo  
    //si el color tiene azul
    //si tiene azul y rojo es morado
    //si no tiene ninguno es negro 

    int rojo = 0,
        azul = 0;

    printf("¿tiene color rojo? (si es 1 no es 0): ");
    scanf(" %i", &rojo);
    printf("¿tiene color azul? (si es 1 no es 0): ");
    scanf(" %i", &azul);

    if (rojo)
        if (azul)
            printf("morado \n");
        else 
            printf("Rojo \n");
    else 
        if (azul)
            printf("Azul \n");
        else
            printf("Negro \n");

    printf(" \n");

    return EXIT_SUCCESS;
}


