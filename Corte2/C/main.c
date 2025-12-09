#include <stdio.h>
#include <stdlib.h>


// Filas = Días; Columnas = Puntos
float registro_temperaturas[7][3] = {
    // P.1 (Frente) | P.2 (Centro) | P.3 (Fondo)
    {21.5, 23.0, 22.5},  
    {19.8, 20.5, 21.0},  
    {24.0, 25.5, 26.1},  
    {31.2, 30.5, 29.9},  
    {22.0, 22.0, 22.0},  
    {19.5, 18.9, 19.3},  
    {28.5, 27.0, 26.5}   
};




int main() {
    float promedio_general;
    int opcion;

    printf("============================================\n");
    printf("   ANALISIS DE TEMPERATURAS DE INVERNADERO\n");
    printf("============================================\n");

    do {
        imprimir_menu_principal();
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\n--- MATRIZ DE TEMPERATURAS REGISTRADAS ---\n");
                mostrar_matriz(registro_temperaturas);
                break;
            case 2:
                printf("\n--- PROMEDIO GENERAL DEL INVERNADERO ---\n");
                promedio_general = calcular_promedio_general(registro_temperaturas);
                printf("La temperatura promedio general es: %.2f C\n", promedio_general);
                break;
            case 3:
                menu_clasificacion(registro_temperaturas);
                break;
            case 0:
                printf("\nSaliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("\nOpcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}

// MENÚS



void imprimir_menu_principal() {
    printf("\n--------------------------------------------\n");
    printf("MENU PRINCIPAL\n");
    printf("--------------------------------------------\n");
    printf("1. Ver Matriz de Temperaturas\n");
    printf("2. Calcular Promedio General\n");
    printf("3. Clasificacion del Clima (Frio/Calor)\n");
    printf("0. Salir\n");
    printf("--------------------------------------------\n");
}

/** sub-menú clasificación de clima.*/

void menu_clasificacion(float matriz[7][3]) {
    int sub_opcion;
    float promedio_general;

    printf("\n--- CLASIFICACION DEL CLIMA ---\n");
    printf("1. Clasificacion GENERAL\n");
    printf("2. Clasificacion DIARIA\n");
    printf("0. Volver al Menu Principal\n");
    printf("Seleccione una sub-opcion: ");
    scanf("%d", &sub_opcion);

    switch (sub_opcion) {
        case 1:
            promedio_general = calcular_promedio_general(matriz);
            printf("\n--- ESTADO AMBIENTAL GENERAL ---\n");
            printf("Promedio Semanal: %.2f C\n", promedio_general);
            clasificar_estado_general(promedio_general);
            break;
        case 2:
            printf("\n--- CLASIFICACION DIARIA DEL CLIMA ---\n");
            clasificar_clima_diario(matriz);
            break;
        case 0:
            printf("Volviendo al menu principal...\n");
            break;
        default:
            printf("Sub-opcion invalida.\n");
    }
}

// Calculos 

void mostrar_matriz(float matriz[7][3]) {
    int i, j;

    printf("Dia | P.1 (Frente) | P.2 (Centro) | P.3 (Fondo) | \n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < 7; i++) {
        printf("%3d |", i + 1);

        for (j = 0; j < 3; j++) {
            printf("    %.2f C  |", matriz[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------------------\n");
}

// promedio de temperatura de toda la matriz.

float calcular_promedio_general(float matriz[7][3]) {
    float suma_total = 0.0;
    int i, j;
    int total_elementos = 7 * 3;

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            suma_total += matriz[i][j];
        }
    }

    return suma_total / total_elementos;
}

// estado general del invernadero.

void clasificar_estado_general(float promedio_general) {
    printf("ESTADO AMBIENTAL: ");
    if (promedio_general < 20) {
        printf("FRIO (Por debajo de 20 C)\n");
    } else if (promedio_general > 30) {
        printf("CALOR (Por encima de 30 C)\n");
    } else {
        printf("OPTIMO (Entre 20 C y 30 C)\n");
    }
}

// temperatura diaria.

void clasificar_clima_diario(float matriz[7][3]) {
    int i, j;
    float suma_dia;
    float promedio_dia;
    char *estado; // * a char para el mensaje de estado

    for (i = 0; i < 7; i++) {
        suma_dia = 0.0;
        
        
        for (j = 0; j < 3; j++) {
            suma_dia += matriz[i][j];
        }
        promedio_dia = suma_dia / 3;

       
        if (promedio_dia < 20) {
            estado = "FRIO";
        } else if (promedio_dia > 30) {
            estado = "CALOR";
        } else {
            estado = "OPTIMO";
        }
        
        // resultado diario.
        printf("Dia %d: Promedio %.2f C -> *%s*\n", i + 1, promedio_dia, estado);
    }
}
