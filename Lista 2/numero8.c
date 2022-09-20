#include <stdio.h>

int multiplica(primeiro, segundo) {
    if (segundo == 1) {
        return primeiro;
    }
    return primeiro + multiplica(primeiro, segundo - 1);
}

int main() {
    int primeiro = 9857;
    int segundo = 14891;

    printf("%d", multiplica(primeiro, segundo));
}