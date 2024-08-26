#include <stdio.h>

int main() {

    int factorial = 1, num, i;

    printf("Ingrese un numero por teclado: ");
    scanf("%i", &num);

    for(i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("el facotial de %i es: %i \n", num, factorial);

    return 0;
}
