#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]) {
    int horas, precioHora, adicional, sueldo;

    precioHora = 250;
    adicional = 50;

    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas);

    if(horas > 30) {
        sueldo = (30 * precioHora) + (horas - 30) * (precioHora + adicional);
    } else {
        sueldo = precioHora * horas;
    }

    printf("El sueldo a pagar es: $%d", sueldo);

    return 0;
}