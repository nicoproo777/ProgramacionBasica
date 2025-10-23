#include <stdio.h>

int main() {
    int n = 4; // número de líneas
    int i;
    int j;
    // Parte superior (1, 3, 5, 7)
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" "); // espacios a la izquierda
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // asteriscos
        }
        printf("\n");
    }

    // Parte inferior (5, 3, 1)
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" "); // espacios a la izquierda
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

