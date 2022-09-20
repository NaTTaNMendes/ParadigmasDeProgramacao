#include <stdio.h>

int isPerfeito(numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    if (soma == numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero = 6;
    if (isPerfeito(numero)) {
        printf("Perfeito");
    } else {
        printf("Imperfeito");
    }
}