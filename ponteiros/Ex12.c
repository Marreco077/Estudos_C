#include <stdio.h>

void troca(int *ptra, int *ptrb)
{
    int teste = *ptra;
    *ptra = *ptrb;
    *ptrb = teste;
}

int main(void) {
    int a = 5;
    int b = 8;

    troca(&a, &b);

    printf("%i %i", a, b);

    return 0;
}