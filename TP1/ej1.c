#include <stdio.h>

int main() {
    char nombre[20];
    char apellido[20];
    int edad;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Edad: %d\n", edad);

    return 0;
}
