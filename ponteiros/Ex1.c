#include <stdio.h>

int main(void) {
    int numero = 8;
    int *ponteiro = &numero;

    printf("%i", *ponteiro);

    return 0;
}
