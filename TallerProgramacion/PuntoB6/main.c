#include <stdio.h>

int main() {
    int numero, i, esPrimo = 1; // 1 = verdadero

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        esPrimo = 0; // Los numeros menores o iguales a 1 no son primos
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                esPrimo = 0; // Si es divisible, no es primo
                break;
            }
        }
    }

    if (esPrimo == 1) {
        printf("El numero %d es primo.\n", numero);
    } else {
        printf("El numero %d no es primo.\n", numero);
    }

    return 0;
}

