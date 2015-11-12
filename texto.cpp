#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *pf;

    pf = fopen("peticion.txt", "w");

    fprintf(pf, "Apruebame programacion\n");

    fclose(pf);

    return EXIT_SUCCESS;
}


