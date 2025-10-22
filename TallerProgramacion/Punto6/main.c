#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    // Suponemos que el primero es el maximo y minimo
    max = num1;
    min = num1;

    // Verificamos el maximo
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Verificamos el minimo
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("El numero mayor es: %d\n", max);
    printf("El numero menor es: %d\n", min);

    return 0;
}

