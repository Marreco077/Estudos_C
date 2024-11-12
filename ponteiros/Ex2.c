#include <stdio.h>

void incrementa(int *ptr)
{
    (*ptr)++;
}

int main(void) {
    int x = 10;
    int *ptr = &x;

    printf("%i\n", x);
    incrementa(ptr);
    printf("%i", x);

    return 0;
}