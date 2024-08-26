#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]) {

    int dni, nota1, nota2, nota3;
    float promedio;

    printf("Ingrese su dni: ");
    scanf("%d", &dni);

    printf("Ingrese sus notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    // printf("El alumno de dni: %d \n", dni);
    // printf("Tiene un promedio de: %.2f \n", promedio);

    printf("La nota promedio del alumno con dni: %d, es %.2f, entonces, ", dni, promedio);

    if(promedio >= 6) {
        printf("Su condicion es REGULAR.\n");
    } else {
        printf("Su condicion es LIBRE.\n");
    }

    return 0;
}
