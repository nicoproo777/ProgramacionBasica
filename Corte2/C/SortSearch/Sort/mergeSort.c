#include <stdio.h>

// Función que mezcla (merge) dos subarreglos ordenados:
// arr[l..m] y arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;  // tamaño del subarreglo izquierdo
    int n2 = r - m;      // tamaño del subarreglo derecho

    // arreglos temporales
    int L[n1];
    int R[n2];

    // copiar datos a L[] y R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // mezclar los subarreglos L[] y R[] en arr[l..r]
    i = 0;      // índice inicial de L[]
    j = 0;      // índice inicial de R[]
    k = l;      // índice inicial de arr[]

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copiar los elementos restantes de L[], si hay
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copiar los elementos restantes de R[], si hay
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// MergeSort recursivo
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // punto medio

        // ordenar primera y segunda mitad
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // mezclar las dos mitades ordenadas
        merge(arr, l, m, r);
    }
}

// Ejemplo de uso
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printf("Arreglo ordenado:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
