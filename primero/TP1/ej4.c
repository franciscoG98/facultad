#include <stdio.h>

int main() {

    int precio, cantidad, aux;
    float descuento, total;

    descuento = 0.15;

    printf("Ingrese el precio del producto: ");
    scanf("%d", &precio);

    printf("Ingrese la cantidad del producto: ");
    scanf("%d", &cantidad);

    aux = precio * cantidad;
    total = aux - aux * descuento;

    printf("El precio del articulo es %d, la cantidad es $%d, y el total es %f\n", precio, cantidad, total);

    return 0;
}
