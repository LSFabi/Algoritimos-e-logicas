#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("O somat�rio dos valores pares �: %d\n", soma);

    return 0;
}

