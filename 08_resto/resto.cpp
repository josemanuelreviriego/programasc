#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int entrada;
    //Ejemplo
    //1: introduce 146
    //2: Imprime el 6
    //3: Imprime el 4
    //4: Imprime el 1

    //Algoritmo
        
    //1: Introducir un numero de 0 a 999
    printf("Introduce un número de 0 a 999: ");
    //2: Guardamos en ENTRADA lo introducido por el teclado (scanf)
    scanf(" %i", &entrada);
    //3: Imprimir la  última cifra de ENTRADA que hemos guardado (resto)
    printf("%i", entrada % 10);
    //4: desplazar ENTRADA un lugar a la derecha
    entrada /= 10;
    //5: Imprimos la cifra que tiene ahora ENTRADA
    printf("%i", entrada % 10);
    //6: Desplazamos a la derecha otra vez ENTRADA
    entrada /= 10;
    //7: Imprimimos la cifra que tiene ENTRADA
    printf("%i", entrada % 10);

    printf("\n");

    return EXIT_SUCCESS;
}


