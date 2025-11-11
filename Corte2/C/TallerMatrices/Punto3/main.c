#include <stdio.h>

int main() {
    int N, M;
    int i, j;
    int maximo, minimo;
    int suma = 0;
    int totalElementos;

    printf("Ingrese el numero de filas (N): ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas (M): ");
    scanf("%d", &M);

    int matriz[N][M];

    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializamos maximo y minimo con el primer elemento
    maximo = matriz[0][0];
    minimo = matriz[0][0];

    // Recorremos la matriz para obtener maximo, minimo y suma
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            int valor = matriz[i][j];

            if (valor > maximo) {
                maximo = valor;
            }

            if (valor < minimo) {
                minimo = valor;
            }

            suma += valor;
        }
    }

    totalElementos = N * M;
    float media = (float)suma / totalElementos;

    printf("\n--- Resultados ---\n");
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);
    printf("Media de todos los elementos: %.2f\n", media);

    return 0;
}

