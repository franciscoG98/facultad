#include<stdio.h>

float suma(float x, float z);
float resta(float x, float z);
float multiplicacion(float x, float z);
float division(float x, float z);

int main() {
	int op;
	float a,b;

    while(op != 0) {

        printf("\nElija la operacion que desea realizar\n");
        printf("opcion 0 - SALIR DEL PROGRAMA\n");
        printf("opcion 1 - SUMAR\n");
        printf("opcion 2 - RESTAR\n");
        printf("opcion 3 - MULTIPLICAR\n");
        printf("opcion 4 - DIVIDIR\n");
        scanf("%i",&op);
        if(op != 0) {
            printf("ingrese el primer valor\n");
            scanf("%f",&a);
            printf("ingrese el segundo valor\n");
            scanf("%f",&b);
            printf("\n");
        }

        switch (op) {
            case 0:
                printf("Bye \n");
                return 0;
            case 1:
                printf("el resultado de la suma es %.2f\n",suma(a,b));
                break;
            case 2:
                printf("el resultado de la resta es %.2f\n",resta(a,b));
                break;
            case 3:
                printf("el resultado de la multiplicacion es %.2f\n",multiplicacion(a,b));
                break;
            case 4:
                printf("el resultado de la division es %.2f\n",division(a,b));
                break;
        }
    }
    
}


float suma(float x, float z) {
	float res;
	res = x+z;
	return res;
}

float resta(float x, float z) {
	float res;
	res = x-z;
	return res;
}

float multiplicacion(float x, float z) {
	float res;
	res = x*z;
	return res;
}

float division(float x, float z) {
	float res;
	res = x/z;
	return res;
}
