#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {              // FOR EXTERNO
        for (j = 0; j < n - i - 1; j++) {      // FOR INTERNO
            if (arr[j] > arr[j + 1]) {         // CONDICIÓN DE INTERCAMBIO
                temp = arr[j];                 // INTERCAMBIO
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Tamaño del arreglo: %d\n", n);

    printf("Arreglo original:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Arreglo ordenado:\n");
    printArray(arr, n);

    return 0;
}