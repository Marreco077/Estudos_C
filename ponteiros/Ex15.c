#include <stdio.h>

void troca(int *ptra, int *ptrb)
{
    *ptra = *ptrb + *ptra;
}


int main(void) {
    int a = 5, b = 10;

    troca(&a, &b);

    printf("%i\n", a);
    printf("%i\n", b);
    
    return 0;
}