#include <stdio.h>

int main(void) {
    int n = 7;
    int *ptrn = &n;

    printf("%i\n", n);

    *ptrn = 5;

    printf("%i", n);

    return 0;
}