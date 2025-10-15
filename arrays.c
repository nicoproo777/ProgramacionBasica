#include <stdio.h>

int main() {
    int i;
    int iguales = 1; // 1 = iguales, 0 = diferentes

    
    int arreglo1[] = {1, 2, 3, 4, 5};
    int arreglo2[] = {1, 2, 3, 4, 5, "chevrolet"};
    int n = sizeof(arreglo1) / sizeof(arreglo1[0]);

    // Verificar tamaño
    if (sizeof(arreglo1) != sizeof(arreglo2)) { // el ! representa desigualdad
        iguales = 0;
    } else {                  //si no poseen el mismo tamaño, entonces
        // Comparar elementos
        for (i = 0; i < n; i++) {
            if (arreglo1[i] != arreglo2[i]) { //
                iguales = 0; // encontramos una diferencia
                break;       // salimos del ciclo
            }
        }
    }

    // resultado si son iguales
    if (iguales == 1) {
        printf("Los arreglos son iguales. ");
    } else {             //y si no son iguales...
        printf("Los arreglos NO son iguales. ");
    }

    return 0;
}

