#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;
    int totalMujeres = 0, totalHombres = 0;
    int totalSueldoMujeres, totalSueldoHombres;
    int menorSueldoHombres, mayorSueldoHombres;
    int menorSueldoMujeres, mayorSueldoMujeres;
    int mujeresMas500, hombresMenos400;


    while(i < 10) {

        int genero;
        int legajo;
        int salario;

        printf("Ingrese el genero de la persona (1 hombre, 2 mujer): ");
        scanf("%i", &genero);

        if(genero != 1 && genero != 2) {
            printf("Por favor siga la consigna.\n");
            return 0;
        }

        printf("Ingrese el legajo de la persona: ");
        scanf("%i", &legajo);

        printf("Ingrese el salario de la persona: ");
        scanf("%i", &salario);

        if(salario < 0) {
            printf("El salario no puede ser negativo.\n");
            return 0;
        }

        if(genero == 1) {
            totalHombres++;
            totalSueldoHombres += salario;

            if(salario > mayorSueldoHombres || totalHombres == 1) {
                mayorSueldoHombres = salario;
            }

            if(salario < menorSueldoHombres || totalHombres == 1) {
                menorSueldoHombres = salario;
            }

            if (salario < 400) {
                hombresMenos400++;
            }

        } else if(genero == 2) {
            totalMujeres++;
            totalSueldoMujeres += salario;

            if(salario > mayorSueldoMujeres || totalMujeres == 1) {
                mayorSueldoMujeres = salario;
            }

            if(salario < menorSueldoMujeres || totalMujeres == 1) {
                menorSueldoMujeres = salario;
            }

            if(salario > 500) {
                mujeresMas500++;
            }
        }

        i++;
    }

    printf("En total hay %i mujeres y %i hombres \n", totalMujeres, totalHombres);
    printf("El sueldo total de las mujeres es %i y el de hombres es %i \n", totalSueldoMujeres, totalSueldoHombres);
    printf("El menor sueldo de los hombres es %i y el mayor sueldo es %i \n", menorSueldoHombres, mayorSueldoHombres);
    printf("El menor sueldo de los mujeres es %i y el mayor sueldo es %i \n", menorSueldoMujeres, mayorSueldoMujeres);
    printf("En total hay %i mujeres que ganan mas de $500, y %i hombres que ganan menos de $400 \n", mujeresMas500, hombresMenos400);

    
    return 0;
}
