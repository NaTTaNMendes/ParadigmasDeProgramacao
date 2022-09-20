#include <stdio.h>

int calcularFibonacci (int numero) {
    if (numero == 1 || numero == 2) {
        return 1;
    }
    return (calcularFibonacci(numero - 1) + calcularFibonacci(numero - 2));
}

int main() {
    int entrada = 0;

    printf("Informe a posicao de fibonacci: ");
    scanf("%d", &entrada);

    printf("Valor: %d", calcularFibonacci(entrada));
}