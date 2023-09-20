#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, cant, greater100, lower100acc = 0;

    cant = 0;

    while(cant < 50) {
        // creo un numero random entre y 500
        num = rand() % 500;

        // print para dubugguear
        // printf("El numero es: %i \n", num);

        if(num >= 100) {
            greater100++;
        } else {
            lower100acc += num;
        }
        cant++;
    }

    printf("En total hay %i numeros mayores a 100, y la suma de los numeros menores a 100 es: %i \n", greater100, lower100acc);

    return 0;
}
