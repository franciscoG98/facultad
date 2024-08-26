#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int mayor = 0, menor = 999, cant, dia = 1, diaMenor = 1, diaMayor = 1;
    float prom;

    srand(time(NULL));

    while(dia <= 7) {

        cant = rand()%201;

        printf("%i \n", cant);

        if(cant > mayor) {
            mayor = cant;
            diaMayor = dia;
        }

        if(cant < menor) {
            menor = cant;
            diaMenor = dia;
        }

        prom += cant;
        dia++;

    }

    prom = prom / 7;

    // printf("Los mm por dia son %i, %i, %i, %i, %i, %i, %i \n", mm1, mm2, mm3, mm4, mm5, mm6, mm7);
    printf("El promedio de mm es : %f\n", prom);
    printf("El dia menor %i cayo: %i\n", diaMenor, menor);
    printf("El dia mayor %i cayo: %i\n", diaMayor, mayor);

    return 0;
}
