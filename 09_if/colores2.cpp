#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    //pregunta colores
    //si el color tiene rojo  
    //si el color tiene azul
    //si el color tiene amarillo
    //si tiene azul y rojo es morado
    //si no tiene ninguno es negro
    //si tiene amarillo y rojo es naranja
    //si tiene amarillo y azul es verde
    //si tiene todos es blanco

    int rojo = 0,
        amarillo = 0,
        azul = 0;

    printf("¿tiene color rojo? (si es 1 no es 0): ");
    scanf(" %i", &rojo);
    printf("¿tiene color azul? (si es 1 no es 0): ");
    scanf(" %i", &azul);
    printf("¿tiene color amarillo? (si es 1 no es 0: )");
    scanf(" %i", &amarillo)

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
    if (rojo)
        if (azul)
            if(amarillo)
        else
            printf("Blanco \n");
    if(rojo)
        if(amarillo)
    else
        printf("Naranja \n");
    if (azul)
        if(amarillo)
    else
        printf("Verde \n");

    printf(" \n");

    return EXIT_SUCCESS;
}


