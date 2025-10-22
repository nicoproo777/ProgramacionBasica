#include <stdio.h>
#include <string.h>

int main() {
    char contrasenaCorrecta[] = "1234";  // Puedes cambiarla
    char contrasenaIngresada[20];
    int intentos = 0;

    while (intentos < 3) {
        printf("Ingrese la contrasena: ");
        scanf("%s", contrasenaIngresada);

        if (strcmp(contrasenaIngresada, contrasenaCorrecta) == 0) {
            printf("Contrasena Correcta\n");
            return 0;  // Finaliza el programa
        } else {
            printf("Lo siento, contrasena equivocada\n");
            intentos++;
        }
    }

    printf("Has superado el numero de intentos permitidos.\n");
    return 0;
}

