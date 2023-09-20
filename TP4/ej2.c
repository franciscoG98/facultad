#include <stdio.h>
#include <stdlib.h>

int main() {

    int dividendo, divisor, resto, resultado;

    printf("Ingrese el numero que desea dividir: ");
    scanf("%i", &dividendo);

    printf("Ingrese el numero por el que desea dividir: ");
    scanf("%i", &divisor);

    while(dividendo >= divisor) {
        if(dividendo % divisor == 0) {
            dividendo -= divisor;
            resultado++;
        } else {
            dividendo -= divisor;
            resultado++;
            resto = dividendo;
        }
    }

    printf("el resultado de la division es: %i y el resto es %i \n", resultado, resto);

    return 0;
}
