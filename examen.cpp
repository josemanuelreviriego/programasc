#include <stdio.h>
#include <stdlib.h>
#define BASE 10

int main(int argc, const char **argv){
    int introducido;
    int acumulado;
    int contador=0;

    //Ejemplo;
    //1. El usuario introduce un numero 587
    //2. El programa nos imprime el 7
    //3. Nos imprime el 8
    //4. y por ultimo el 5
    //5. ahora coge el 785 y nos lo repite 20 veces
    
    // Algoritmo
    // Esta parte es para ponerle un titulo bonito al programa
    system("toilet -F border --gay -f pagga \"DEL REVES\"");
    //1. El usuario introduce un numero de 0 a 999
    printf("Por favor, introduce un numero entre 0 y 999: ");
    //2. Guardamos el numero introducido en la variable numero
    scanf(" %i", &introducido);
    //3. Imprimimos la ultima cifra del numero guardado en la variable
    acumulado = introducido % BASE;
    //4. Desplazamos los numeros un lugar a la derecha
    introducido /= BASE;
    //5. Imprimimos la ultima cifra que tiene ahora mismo numero
    acumulado = acumulado * BASE + introducido % BASE;
    //6. Desplazamos los numeros otro lugar a la derecha
    introducido /= BASE;
    //7. Imprimimos la ultima cifra que tiene ahora mismo la variable
    acumulado = acumulado * BASE + introducido % BASE;
    //8. Ahora iniciamos el bucle con un tope de 20
    do{
    printf("%i \n", acumulado);
        contador++;
    }while(contador<=20);

    printf(" \n");

    return EXIT_SUCCESS;
}


