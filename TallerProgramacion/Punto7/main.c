#include <stdio.h>

int main() {
    float nota;

    printf("Ingrese la nota del examen (0 a 10): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida. Debe estar entre 0 y 10.\n");
    } 
    else if (nota < 5) {
        printf("Calificacion: Suspenso\n");
    } 
    else if (nota < 7) {
        printf("Calificacion: Aprobado\n");
    } 
    else if (nota < 9) {
        printf("Calificacion: Notable\n");
    } 
    else if (nota < 10) {
        printf("Calificacion: Sobresaliente\n");
    } 
    else {
        printf("Calificacion: Matricula de honor\n");
    }

    return 0;
}

