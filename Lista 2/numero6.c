#include <stdio.h>

int somaDivisores(int numero) {
    int soma = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0) {
            soma = soma + i;
        }
    }
    return soma;
}

int main() {
    int primeiro = 220;
    int segundo = 284;
    if (somaDivisores(primeiro) == somaDivisores(segundo)) {
        printf("Sao amigos");
    } else {
        printf("Nao sao amigos");
    }
}