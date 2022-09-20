#include <stdio.h>

int qtdDigitos(int numero) {
    int qtd = 1;
    if (numero > 9) {
        numero /= 10;
        qtd += qtdDigitos(numero);
    }
    return qtd;
}

int main() {
    int numero = 51231;
    printf("%d", qtdDigitos(numero));
}