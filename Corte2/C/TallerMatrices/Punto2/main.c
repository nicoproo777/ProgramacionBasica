#include <stdio.h>

int main() {
    int N;
    int i, j;
    int sumaPares = 0, sumaImpares = 0;
    int sumaPosPares = 0, sumaPosImpares = 0;
    int contPares = 0, contImpares = 0;
    int contPosPares = 0, contPosImpares = 0;

    printf("Ingrese el tamano de la matriz (N): ");
    scanf("%d", &N);

    int matriz[N][N];

    // Lectura de la matriz
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculos
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int valor = matriz[i][j];

            // Suma y conteo de pares e impares
            if (valor % 2 == 0) {
                sumaPares += valor;
                contPares++;
            } else {
                sumaImpares += valor;
                contImpares++;
            }

            // Suma y conteo de posiciones pares e impares
            // Usamos una sola secuencia lineal (como si fuera un arreglo)
            int posicion = i * N + j; // convierte 2D en 1D
            if (posicion % 2 == 0) {
                sumaPosPares += valor;
                contPosPares++;
            } else {
                sumaPosImpares += valor;
                contPosImpares++;
            }
        }
    }

    // Calculo de medias
    float mediaPares = (contPares > 0) ? (float)sumaPares / contPares : 0;
    float mediaImpares = (contImpares > 0) ? (float)sumaImpares / contImpares : 0;
    float mediaPosPares = (contPosPares > 0) ? (float)sumaPosPares / contPosPares : 0;
    float mediaPosImpares = (contPosImpares > 0) ? (float)sumaPosImpares / contPosImpares : 0;

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("Suma de numeros pares: %d\n", sumaPares);
    printf("Media de numeros pares: %.2f\n", mediaPares);

    printf("\nSuma de numeros impares: %d\n", sumaImpares);
    printf("Media de numeros impares: %.2f\n", mediaImpares);

    printf("\nSuma de numeros en posiciones pares: %d\n", sumaPosPares);
    printf("Media de numeros en posiciones pares: %.2f\n", mediaPosPares);

    printf("\nSuma de numeros en posiciones impares: %d\n", sumaPosImpares);
    printf("Media de numeros en posiciones impares: %.2f\n", mediaPosImpares);

    return 0;
}

