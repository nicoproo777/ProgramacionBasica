#include <stdio.h>

int main() {
    int N, M;
    int contador = 0;
    int i;

    printf("Ingrese el primer numero (debe ser mayor que el segundo): ");
    scanf("%d", &N);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &M);

    // Validar que N sea mayor que M
    if (N <= M) {
        printf("Error: el primer numero debe ser mayor que el segundo.\n");
        return 0;
    }

    printf("Los tres primeros numeros pares entre %d y %d son:\n", M, N);

    for (i = M + 1; i < N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            contador++;
        }
        if (contador == 3) {
            break; // Detiene el ciclo si ya se imprimieron tres pares
        }
    }

    if (contador < 3) {
        printf("No hay tres numeros pares entre los valores ingresados.\n");
    }

    return 0;
}

