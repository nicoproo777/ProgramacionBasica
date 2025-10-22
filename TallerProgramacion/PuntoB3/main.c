#include <stdio.h>

int main() {
    int numero, i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

