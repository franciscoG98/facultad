#include <stdio.h>

int main() {

    int legajo, nota1, nota2, nota3;
    float promedio;

    printf("Ingrese el legajo (dni) del alumno: ");
    scanf("%d", &legajo);

    printf("Ingrese la primer nota: ");
    scanf("%d", &nota1);

    printf("Ingrese la segunda nota: ");
    scanf("%d", &nota2);

    printf("Ingrese la tercer nota: ");
    scanf("%d", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("El alumno con legajo %d, tiene un promedio de: %f\n", legajo, promedio);

    return 0;
}
