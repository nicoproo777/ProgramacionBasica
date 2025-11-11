#include <stdio.h>

// Funcion para ingresar un valor
int enterValue() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    return value;
}

// Funcion para multiplicar dos numeros
int add(int a, int b) {
    int r = a * b;
    return r;
}

// Funcion para mostrar el resultado
void showResult(int r) {
    printf("Result = %d\n", r);
}

// Funcion principal
int main() {
    int operand1, operand2;
    int result;

    operand1 = enterValue();
    operand2 = enterValue();

    result = add(operand1, operand2);

    showResult(result);

    return 0;
}

