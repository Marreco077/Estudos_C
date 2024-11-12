#include <stdio.h>

void dobro(int *ptra, int *ptrb)
{
    *ptra = *ptra * 2;
    *ptrb = *ptrb * 2;
}

int main(void) {
    int a, b;

    scanf("%i", &a);
    scanf("%i", &b);

    dobro(&a, &b);

    printf("%i\n", a);
    printf("%i\n", b);

    return 0;
}