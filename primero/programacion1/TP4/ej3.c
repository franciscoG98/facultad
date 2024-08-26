#include <stdio.h>
#include <stdlib.h>

int main() {

    int pairAcc = 0, oddAcc = 0, acc = 20;
    
    // numeros comprendidos entre el 20 y el 50, interpretamos que se incluye el 50 por eso <=
    while(acc <= 50) {
        if(acc % 2 == 0) {
            pairAcc++;
        } else {
            oddAcc++;
        }

        printf("hola %i \n", acc);
        acc++;
    }

    printf("En total hay: %i numeros pares, y %i numeros impares \n", pairAcc, oddAcc);

    return 0;
}
