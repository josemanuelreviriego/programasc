#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int input1, input2, copia1, copia2;

    printf("Introduce el primer numero: ");
    scanf(" %i", &input1);
    printf("Introduce el segundo numero: ");
    scanf(" %i", &input2);

    if(input1 > input2){

    } 
    
    else{
        copia1 = input2;
        copia2 = input1;
    }

    printf("%i\n", input1);
    printf("%i\n", input2);


    return EXIT_SUCCESS;
}


