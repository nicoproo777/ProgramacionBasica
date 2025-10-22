#include <stdio.h>

int main() {
    char nombre[50];   // para guardar el nombre del producto
    float precio;      // para guardar el precio por unidad
    int unidades;      // para guardar el número de unidades
    float total;       // para guardar el precio total

    printf("=== SUPERMARKET SALE CALCULATOR (in $COP) ===\n");

    // Pedir el nombre del producto
    printf("Enter the product name: ");
    scanf("%s", nombre);  // lee una palabra (sin espacios)

    // Pedir el precio por unidad
    printf("Enter the unit price: ");
    scanf("%f", &precio);

    // Pedir el número de unidades
    printf("Enter the number of units: ");
    scanf("%d", &unidades);

    // Calcular el total
    total = precio * unidades;

    // Mostrar los resultados
    printf("\n=== SALE SUMMARY ===\n");
    printf("Product: %s\n", nombre);
    printf("Units sold: %d\n", unidades);
    printf("Total price: $%.2f\n", total);

    return 0;
}

