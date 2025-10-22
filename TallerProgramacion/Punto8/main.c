#include <stdio.h>

int main() {
    int ano;

    printf("Type a Year: ");
    scanf("%d", &ano);

    // Condiciones para saber si es bisiesto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("The year %d is an Leap year.\n", ano);
    } else {
        printf("The year %d is not an Leap year.\n", ano);
    }

    return 0;
}

