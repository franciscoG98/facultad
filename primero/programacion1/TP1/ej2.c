#include <stdio.h>

int main() {
    int num1, num2, resultadoProducto, resultadoFinal;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Los numeros ingresados son: %d y %d\n", num1, num2);

    resultadoProducto = num1 * num2;
    printf("El resultado del producto es: %d\n", resultadoProducto);

    resultadoFinal = resultadoProducto * 2;

    printf("El resultado del producto por 2 es: %d\n", resultadoFinal);

    return 0;
}
