#include <stdio.h>

int main(void) {
    int a = 5;
    int *ptr = &a;

    *ptr = 7;

    printf("%i", a);

    return 0;
}