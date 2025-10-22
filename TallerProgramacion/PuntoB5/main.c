#include <stdio.h>

int main() {
    int numero;
    int positivos = 0, negativos = 0;

    printf("Ingrese numeros (termine con 0):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Termina el bucle al ingresar 0
        } else if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);

    return 0;
}



