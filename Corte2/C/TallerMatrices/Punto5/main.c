#include <stdio.h>

int main() {
    int N;
    int i, j;

    printf("Ingrese el tamano de la matriz (N): ");
    scanf("%d", &N);

    int matriz[N][N];
    int vectorMaximos[N];

    // Lectura de la matriz
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular maximo de cada fila y guardarlo en el vector
    for (i = 0; i < N; i++) {
        int maxFila = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > maxFila) {
                maxFila = matriz[i][j];
            }
        }
        vectorMaximos[i] = maxFila;
    }

    // Mostrar la matriz original
    printf("\nMatriz ingresada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar el vector de maximos
    printf("\nVector de maximos por fila:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vectorMaximos[i]);
    }
    printf("\n");

    return 0;
}

