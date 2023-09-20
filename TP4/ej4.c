#include <stdio.h>
#include <stdlib.h>

int main() {

    int mm1, mm2, mm3, mm4, mm5, mm6, mm7;
    int acc = 0;
    int max = 0;
    int min;
    float promedio;


    while(acc <= 7) {

        switch(acc) {
            case 1:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 1): ");
                scanf("%i", &mm1);

                if(mm1 > max) {
                    max = mm1;
                }

                min = mm1;

                break;
            case 2:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 2): ");
                scanf("%i", &mm2);

                if(mm2 > max) {
                    max = mm2;
                }

                if(mm2 < min) {
                    min = mm2;
                }

                break;

            case 3:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 3): ");
                scanf("%i", &mm3);

                if(mm3 > max) {
                    max  = mm3;
                }

                if(mm3 < min) {
                    min = mm3;
                }

                break;
            case 4:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 4): ");
                scanf("%i", &mm4);

                if(mm4 > max) {
                    max = mm4;
                }

                if(mm4 < min) {
                    min = mm4;
                }

                break;
            case 5:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 5): ");
                scanf("%i", &mm5);

                if(mm5 > max) {
                    max = mm5;
                }

                if(mm5 < min) {
                    min = mm5;
                }

                break;
            case 6:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 6): ");
                scanf("%i", &mm6);

                if(mm6 > max) {
                    max = mm6;
                }

                if(mm6 < min) {
                    min = mm6;
                }

                break;
            case 7:
                printf("Ingrese la cantidad en mm lo que llovio hoy (dia 7): ");
                scanf("%i", &mm7);

                if(mm7 > max) {
                    max = mm7;
                }

                if(mm7 < min) {
                    min = mm7;
                }

                break;
            default:
                printf("........\n");

        }

        acc++;

    }

    promedio = (mm1 + mm2 + mm3 + mm4 + mm5 + mm6 + mm7) / 7;

    printf("Los mm por dia son %i, %i, %i, %i, %i, %i, %i \n", mm1, mm2, mm3, mm4, mm5, mm6, mm7);
    printf("El promedio de mm es : %f\n", promedio);
    printf("El minimo de mm es : %i\n", min);
    printf("El maximo de mm es : %i\n", max);

    return 0;
}
