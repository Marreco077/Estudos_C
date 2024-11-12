#include <stdio.h>

void mudarValor(int *ptr)
{
    *ptr = 10;
}

int main(void) {
    int n = 8;

    printf("%i\n", n);
    
    mudarValor(&n);

    printf("%i", n);
    
    return 0;
}