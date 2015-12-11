#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int numero;
    int resultado = 4;

    printf("Sumame esta: 2 + 2 es.. \n");
    scanf(" %i", &numero);
    do{
        printf("Error, vuelvelo a intentar: ");
        scanf(" %i", &numero);
        
    }while( numero != resultado );

    printf("Ya era hora macho \n");
        

    return EXIT_SUCCESS;
}


