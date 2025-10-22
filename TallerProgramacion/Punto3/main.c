#include <stdio.h>

int main() {
    char nombre[50];     // Nombre del trabajador
    float horas;         // Horas trabajadas
    float precio_hora;   // Pago por hora
    float sueldo_bruto;  // Antes de la retencion
    float retencion;     // 5% de IRPF
    float sueldo_neto;   // Despues de la retencion

    printf("=== CALCULADORA DE NOMINA ===\n");

    // Pedir datos al usuario
    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);  

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el precio por hora (en pesos colombianos): ");
    scanf("%f", &precio_hora);

    sueldo_bruto = horas * precio_hora;
    retencion = sueldo_bruto * 0.05;     
    sueldo_neto = sueldo_bruto - retencion;

    // Mostrar resultados
    printf("\n=== NOMINA DEL TRABAJADOR ===\n");
    printf("Trabajador: %s\n", nombre);
    printf("Sueldo bruto: $%.2f\n", sueldo_bruto);
    printf("Retencion (5%% IRPF): $%.2f\n", retencion);
    printf("Sueldo neto: $%.2f\n", sueldo_neto);

    return 0;
}

