#include <stdio.h>


int main() {

    int iguales = 1; // 1 = iguales, 0 = diferentes
    char arreglo1[]= {"Pino"};
    char arreglo2[] = {"Pino	"}; 
    int i;

    // Comparar arreglos, caracter por caracter
        for (i = 0; arreglo1[i] != '\0' || arreglo2[i] != '\0'; i++) {
        if (arreglo1[i] != arreglo2[i]) {
            iguales = 0;
            break; //termina cuando halle el distinto
			}
        
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

