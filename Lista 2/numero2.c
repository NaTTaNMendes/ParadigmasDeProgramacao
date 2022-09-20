#include <stdio.h>

int fatorial(numero) {

    if (numero == 1)
    {
        return numero;
    }

    return numero * fatorial(numero - 1);

}

int main() {

    int entrada = 0;

    printf("Insira um numero: ");
    scanf("%d", &entrada);

    printf("Fatorial de %i: %i", entrada, fatorial(entrada));

    return 0;

}