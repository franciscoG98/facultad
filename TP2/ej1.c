#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]) {
    int cantA, cantB, total;

    printf("Ingrese la cantidad del producto A: ");
    scanf("%d", &cantA);

    printf("Ingrese la cantidad del producto B: ");
    scanf("%d", &cantB);

    total = (cantA * 25) + (cantB * 45);

    if(total > 500) {
        total -= 100;
    }

    printf("El total a pagar es: $%d \n", total);

    return 0;
}
