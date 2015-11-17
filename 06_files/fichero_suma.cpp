#include <stdio.h>
#include <stdlib.h>

int main(){
   int numeros;
   FILE *pf;
   

   pf = fopen ("numeros.txt", "r");
        fscanf(pf,"%i", &numeros)
        printf(" %i\n")

   fclose(pf);

    return EXIT_SUCCESS;
}


