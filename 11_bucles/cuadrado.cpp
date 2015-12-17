#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int lado=5;
                
    for(int l=0; l<lado ; l++){
        for(int c=0; c<lado; c++)
            if(c<l)
                printf("0");
            else
                printf("*");
        printf("\n");
    }

    return EXIT_SUCCESS;
}


