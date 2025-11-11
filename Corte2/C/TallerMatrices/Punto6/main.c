#include <stdio.h>

int main() {
    int N, M;
    int i, j;

    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &M);

    float matriz[N][M];
    float sumaFilas[N];
    float sumaColumnas[M];

    // Inicializar sumas en cero
    for (i = 0; i < N; i++) {
        sumaFilas[i] = 0;
    }
    for (j = 0; j < M; j++) {
        sumaColumnas[j] = 0;
    }

    // Leer la matriz
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Calcular sumas de filas y columnas
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
        }
    }

    // Mostrar la tabla con sumas de filas
    printf("\nMatriz con sumas de filas:\n\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%6.2f ", matriz[i][j]);
        }
        printf(" = %6.2f\n", sumaFilas[i]);
    }

    // Mostrar sumas de columnas
    for (j = 0; j < M; j++) {
        printf("%6.2f ", sumaColumnas[j]);
    }
    printf("\n");

    return 0;
}

