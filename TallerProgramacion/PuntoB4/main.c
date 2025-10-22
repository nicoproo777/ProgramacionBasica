#include <stdio.h>

int main() {
    float numero, suma = 0;
    int contador = 0;

    printf("Ingrese numeros positivos (termine con un numero negativo):\n");

    while (1) {
        scanf("%f", &numero);

        if (numero < 0) {
            break;  // Sale del bucle si el numero es negativo
        }

        suma += numero;
        contador++;
    }

    if (contador > 0) {
        printf("El promedio es: %.2f\n", suma / contador);
    } else {
        printf("No se ingresaron numeros positivos.\n");
    }

    return 0;
}

