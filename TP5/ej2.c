#include <stdio.h>

int main() {

    int i, acc;
    float promedio;

    for(i = 0; i < 10; i++) {

        int num;

        printf("Ingrese un numero por teclado: ");
        scanf("%i", &num);

        if(num > 0) {
            acc += num;
        } else {
            printf("Los numeros deben ser enteros y positivos \n");
            return 0;
        }
    }

    promedio = acc / 10;

    printf("el promedio es: %f \n", promedio);

    return 0;
}
