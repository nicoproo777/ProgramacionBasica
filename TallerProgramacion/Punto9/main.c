#include <stdio.h>

int main() {
    int dia, mes;

    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);

    printf("Ingrese su mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    // Verificacion basica de valores validos
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12) {
        printf("Fecha invalida.\n");
        return 0;
    }

    // Determinar el signo segun el mes y dia
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("Su signo zodiacal es Aries.\n");
    } 
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("Su signo zodiacal es Tauro.\n");
    } 
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Su signo zodiacal es Geminis.\n");
    } 
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("Su signo zodiacal es Cancer.\n");
    } 
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("Su signo zodiacal es Leo.\n");
    } 
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Su signo zodiacal es Virgo.\n");
    } 
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Su signo zodiacal es Libra.\n");
    } 
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Su signo zodiacal es Escorpio.\n");
    } 
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Su signo zodiacal es Sagitario.\n");
    } 
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("Su signo zodiacal es Capricornio.\n");
    } 
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("Su signo zodiacal es Acuario.\n");
    } 
    else if ((mes == 2 && dia >= 19 !=30, 31) || (mes == 3 && dia <= 20)) {
    	else if ((mes == 2 && dia ))
        printf("Su signo zodiacal es Piscis.\n");
    } 
    else {
        printf("Fecha invalida.\n"); 
    }

    return 0;
}

