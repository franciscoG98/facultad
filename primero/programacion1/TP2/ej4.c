#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]) {

    int dni, nota1, nota2, nota3;
    float promedio, asistencia;

    printf("Ingrese su DNI: ");
    scanf("%d", &dni);

    printf("Ingrese sus 3 notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    printf("Ingrese asistencia (valor entre 0 y 1): ");
    scanf("%f", &asistencia);

    promedio = (nota1 + nota2 + nota3) / 3;

    printf("La nota promedio del alumno con dni: %d, es %.2f, con asistencia: %.2f \n", dni, promedio, asistencia);

    if(promedio >= 6 && asistencia >= 0.75) {
        printf("El alumno es REGULAR\n");
    } else {
        printf("El alumno es LIBRE\n");
    }

    return 0;
}
