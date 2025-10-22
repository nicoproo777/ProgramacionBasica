#include <stdio.h>
#include <stdlib.h>  // Para rand() y srand()
#include <time.h>    // Para time()

int main() {
    float apuesta;
    int moneda;

    // Inicializa la semilla del generador de numeros aleatorios
    srand(time(NULL));

    printf("Bienvenido a Doble o Nada\n");
    printf("Ingrese la cantidad que desea apostar: ");
    scanf("%f", &apuesta);

    // Genera un numero aleatorio: 0 = cruz, 1 = cara
    moneda = rand() % 2;

    printf("Lanzando la moneda...\n");

    if (moneda == 1) {
        printf("Ha salido cara! Ganas el doble!\n");
        printf("Ganancia total: %.2f\n", apuesta * 2);
    } else {
        printf("Ha salido cruz! Pierdes todo.\n");
        printf("Ganancia total: 0.00\n");
    }

    return 0;
}

