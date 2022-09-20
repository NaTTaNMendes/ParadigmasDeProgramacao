#include <stdio.h>

int main() {

    int entrada = 0;
    int saida = 1;

    printf("Insira um numero: ");
    scanf("%d", &entrada);

    for (int i = entrada; i >= 2; i--)
    {
        saida *= i;   
    }
    
    printf("Fatorial de %i: %i", entrada, saida);

    return 0;

}