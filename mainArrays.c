#include <stdio.h>
#include <string.h>

int main() {

    int iguales = 1; // 1 = iguales, 0 = diferentes
    char arreglo1[]= {"Uno"};
    char arreglo2[] = {"Uno"}; 

    // Comparar arreglos
        if (strcmp(arreglo1, arreglo2) != 0) { 
            // strcmp si las cadenas son iguales
            iguales = 0; 
        }

    // Imprimir los arreglos
    printf("\nContenido del arreglo 1:\n%s\n", arreglo1);
    printf("\nContenido del arreglo 2:\n%s\n", arreglo2);

    // comparar
    if (iguales == 1) {
        printf("\nLos arreglos de TEXTO son iguales.\n");
    } else {
        printf("\nLos arreglos de TEXTO NO son iguales.\n");
    }

    return 0;
}

