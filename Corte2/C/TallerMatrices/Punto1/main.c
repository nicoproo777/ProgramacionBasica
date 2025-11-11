#include <stdio.h>

int main() {
    int N, M; // Tamaño de la matriz
    int i, j; // Variables para recorrer filas y columnas
    int pares = 0; // Contador de números pares

    // Leer dimensiones
    printf("Ingrese el número de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el número de columnas (M): ");
    scanf("%d", &M);

    int matriz[N][M]; // Declaración de la matriz

    // Leer los elementos de la matriz
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Contar los números pares
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    // Mostrar resultado
    printf("\nLa matriz contiene %d números pares.\n", pares);

    return 0;
}

