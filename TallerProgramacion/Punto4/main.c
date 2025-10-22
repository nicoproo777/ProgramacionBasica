#include <stdio.h>

int main() {
    float num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("El mayor es: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("El mayor es: %.2f\n", num2);
    } else {
        printf("Ambos numeros son iguales.\n");
    }

    return 0;
}

