#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantA, cantB, total, num;

    printf("Ingrese la cantidad del producto A: ");
    scanf("%d", &cantA);

    printf("Ingrese la cantidad del producto B: ");
    scanf("%d", &cantB);

    total = (cantA * 25) + (cantB * 45);

    if(total > 500) {
        total -= 100;
    }
    
    printf("Elija la forma de pago: 0(Efectivo) - 1(Tarjeta): ");
    scanf( "%d", &num );
    switch(num) {
        case 0:
            total = total * 0.9;
            printf("El total a pagar es: $%d \n", total);
            break;
        case 1:
            printf("El total a pagar es: $%d \n", total);
            break;
        default:
            printf("No existe este metodo de pago.\n");
    }

    return 0;
}
