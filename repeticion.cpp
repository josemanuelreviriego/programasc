#include <stdio.h>
#include <stdlib.h>
#define BASE 60
int main(int argc, const char **argv){
    int contador=0;
    char* nombre[20];

    printf("Cual es tu nombre: ");
    scanf(" %s", &nombre);

    do{
        printf("%s \n",&nombre);
        contador++;
    }while(contador<BASE); 


    return EXIT_SUCCESS;
}


