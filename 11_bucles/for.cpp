#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int lado;

    printf("¿Cuanto mide el lado?\n");
    scanf("%i", &lado);
                
    for(int l=0; l<lado ; l++){
        for(int c=0; c<lado; c++)
            printf("* ");
        printf("\n");
    }

    return EXIT_SUCCESS;
}


