#include <stdio.h>
#include <stdlib.h>

//no poner variables globales que txema nos los corta

int main(){

    int resultado = 0;
    int entrada;
    FILE *pf;

    pf = fopen("numeros.txt", "r");
    while(!feof(pf)){
    fscanf(pf, " %i", &entrada);
    resultado += entrada;
    }
    fclose(pf);

    printf(" %i\n", resultado);

    return EXIT_SUCCESS;
}


