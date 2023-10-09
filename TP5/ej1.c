#include <stdio.h>

int main() {

    int i, min, max;

    for(i = 0; i < 10; i++) {
        int num;
        printf("Ingrese un numero por teclado: ");
        scanf("%i", &num);

        if (i == 0) {
            min = num;
            max = num;
        } else {
            if(num < min) {
                min = num;
            } else if(num > max) {
                max = num;
            }
        }
        // printf("for- i: %i, min %i, max: %i\n", i, min, max);
    }

    printf("menor: %i, mayor: %i\n", min, max);

    return 0;
}
