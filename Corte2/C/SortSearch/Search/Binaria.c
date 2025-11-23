#include <stdio.h>

// Versión modificada de búsqueda binaria para encontrar
// la PRIMERA aparición de key en un arreglo ORDENADO.
// Si la encuentra, devuelve el índice de la primera aparición.
// Si NO la encuentra, devuelve -1.
int firstOccurrence(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int result = -1;  // aquí guardaremos la mejor posición encontrada

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;        // encontramos una ocurrencia
            high = mid - 1;      // seguimos buscando MÁS A LA IZQUIERDA
        } else if (key < arr[mid]) {
            high = mid - 1;      // ir a la mitad izquierda
        } else {
            low = mid + 1;       // ir a la mitad derecha
        }
    }

    return result;
}

// Versión modificada de búsqueda binaria para encontrar
// la ÚLTIMA aparición de key en un arreglo ORDENADO.
// Si la encuentra, devuelve el índice de la última aparición.
// Si NO la encuentra, devuelve -1.
int lastOccurrence(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int result = -1;  // aquí guardaremos la mejor posición encontrada

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;        // encontramos una ocurrencia
            low = mid + 1;       // seguimos buscando MÁS A LA DERECHA
        } else if (key < arr[mid]) {
            high = mid - 1;      // ir a la mitad izquierda
        } else {
            low = mid + 1;       // ir a la mitad derecha
        }
    }

    return result;
}

int main(void) {
    // Arreglo de ejemplo: OJO, está ORDENADO
    int arr[] = {3, 5, 7, 9, 11, 11, 11, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    printf("Arreglo (ordenado): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &key);

    int first = firstOccurrence(arr, n, key);
    int last  = lastOccurrence(arr, n, key);

    if (first == -1) {
        printf("El numero %d NO se encuentra en el arreglo.\n", key);
    } else {
        int count = last - first + 1;

        printf("El numero %d aparece %d veces.\n", key, count);
        printf("Posiciones (indices 0-based): ");

        for (int i = first; i <= last; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
