#include <stdio.h>

int main() {
    int N;
    int i, j;

    printf("Ingrese el tamano de la matriz (N): ");
    scanf("%d", &N);

    int matriz[N][N];
    int maximos[N];
    int sumaMaximos = 0;

    // Lectura de la matriz
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular maximo de cada fila
    for (i = 0; i < N; i++) {
        int maxFila = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > maxFila) {
                maxFila = matriz[i][j];
            }
        }
        maximos[i] = maxFila;
        sumaMaximos += maxFila;
    }

    // Calcular media de los maximos
    float mediaMaximos = (float)sumaMaximos / N;

    // Mostrar resultados
    printf("\nMatriz ingresada y maximos por fila:\n\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf(" | Maximo: %d\n", maximos[i]);
    }

    printf("\nMedia de los maximos: %.2f\n", mediaMaximos);

    return 0;
}

