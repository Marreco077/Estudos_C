#include <stdio.h>

int divisor(int total)
{
    if(total <= 10)
    {
        return 1;
    }
    else
    {
        return (divisor(total / 10)) + 1;
    }
}

int main(void) {
    int total = 5231;

    printf("%i", divisor(total));

    return 0;
}