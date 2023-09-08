#include <stdio.h>

int main() {
    int num1, num2, aux;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Los numeros ingresados son %d y %d\n", num1, num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("El resultado es num1 = %d y num2 = %d\n", num1, num2);

    return 0;
}
