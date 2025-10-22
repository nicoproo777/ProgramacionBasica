#include <stdio.h>
#include <stdlib.h>  // Para rand() y srand()
#include <time.h>    // Para time()

int main() {
    int numeroSecreto, intento, intentos = 0;

    // Inicializa la semilla para generar numeros aleatorios
    srand(time(NULL));

    // Genera un numero aleatorio entre 1 y 10
    numeroSecreto = rand() % 10 + 1;

    printf("Adivine el numero entre 1 y 10!\n");

    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);
        intentos++;
        
         if (intento < 0 || intento > 10 ) {
    	printf("Numero Invalido.");
    	return 0;
	}

        if (intento < numeroSecreto) {
            printf("El numero secreto es mayor.\n");
        } 
        else if (intento > numeroSecreto) {
            printf("El numero secreto es menor.\n");
        } 
        else {
            printf("Correcto! Ha adivinado el numero en %d intento(s).\n", intentos);
        }

    } while (intento != numeroSecreto);

    return 0;
}

