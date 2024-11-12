#include <stdio.h>

void altera(int *n)
{
    *n = 9;
}

int main(void) {
    int n = 7;
    

    altera(&n);

    printf("%i", n);
    
    return 0;
}