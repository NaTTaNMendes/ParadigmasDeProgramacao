#include <stdio.h>

int main() {
    int elementos[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int entrada = 0;
    int resultado = 0;

    printf("Informe um inteiro: ");
    scanf("%d", &entrada);

    for (int i = 0; i < 10; i++) {
        if (elementos[i] == entrada) {
            resultado = 1;
            break;
        }
    }

    if (resultado) {
        printf("Pertence");
    } else {
        printf("Nao pertence");
    }
}