#include <stdio.h>
#include <stdlib.h>
#define BASE 10

int main(int argc, const char **argv){
    
   int introducido;
   int acumulado;
   //EJEMPLO:
   //1: Introduce un numero 145
   //2: Imprimir el numero al reves 541
   
  //El usuario introduce un dato   
  printf("Introduce un numero de 0 a 999: ");
  //Guardamos el dato 
  scanf(" %i", &introducido);
  //Imprimir ultimo digito
  acumulado = introducido % BASE;
  //Movemos los digitos a la derecha
  introducido /= BASE;
  //Imprimimos ultimo digito
  acumulado = acumulado * BASE + introducido % BASE;
  // Movemos los digitos a la derecha
  introducido /= BASE;
  //imprimimos ultimo numero
  acumulado = acumulado * BASE + introducido % BASE;

  printf("%i\n", acumulado);

    return EXIT_SUCCESS;
}


