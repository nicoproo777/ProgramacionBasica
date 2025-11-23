#include <stdio.h>

// Busca la primera aparición de key en arr.
// Si la encuentra, devuelve el índice (0, 1, 2, ...)
// Si NO la encuentra, devuelve -1.
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {          // recorro el arreglo desde 0 hasta n-1
        if (arr[i] == key) {               // comparo el elemento actual con key
            return i;                      // lo encontré, retorno la posición
        }
    }
    return -1;                             // no lo encontré en ninguna posición
}

// Busca TODAS las apariciones de key en arr.
// Guarda los índices encontrados en el arreglo indices[].
// Devuelve cuántas veces encontró a key.
int linearSearchAll(int arr[], int n, int key, int indices[]) {
    int count = 0;                         // cuántas veces lo he encontrado

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count] = i;            // guardo el índice donde lo encontré
            count++;                       // aumento el contador
        }
    }

    return count;                          // retorno cuántas veces apareció
}

int main(void) {
    // Arreglo de ejemplo (puedes cambiarlo como quieras)
    int arr[] = {4, 9, 2, 7, 5, 7, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);  // número de elementos del arreglo

    int key;
    printf("Arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &key);

    // --- Búsqueda de una sola posición (primera aparición) ---
    int pos = linearSearch(arr, n, key);

    if (pos == -1) {
        printf("El numero %d NO se encuentra en el arreglo.\n", key);
    } else {
        printf("El numero %d se encuentra (al menos) en la posicion %d (indice 0-based).\n",
               key, pos);
    }

    // --- Búsqueda de todas las posiciones donde aparece key ---
    int indices[100]; // arreglo para guardar posiciones (suficientemente grande para este ejemplo)
    int count = linearSearchAll(arr, n, key, indices);

    if (count == 0) {
        printf("No se encontraron ocurrencias de %d.\n", key);
    } else {
        printf("El numero %d aparece %d veces, en las posiciones: ", key, count);
        for (int i = 0; i < count; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    }

    return 0;
}
