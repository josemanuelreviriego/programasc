#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo;
    int mes, anio;

    const char *MES[12] = {
        "enero",
        "febrero",
        "marzo",
        "abril",
        "mayo",
        "junio",
        "julio",
        "agosto",
        "septiembre",
        "octubre",
        "noviembre",
        "diciembre"
    };

    printf("Cuanto dinero tienes?\n");
    printf("yo=<cantidad>\n");

    scanf("yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de nacimiento (dd/mm/aa): ");
    scanf(" %*i/%i/%i", &mes, &anio);
    // El * es el caracter de supresion de asignación.

    printf("Naciste en %s de %i.\n", MES[mes-1], anio);

    return EXIT_SUCCESS;
}


