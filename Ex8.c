#include <stdio.h>

int fatorial(int num)
{
    if(num <= 1)
    {
        return 1;
    }
    else
    {
        return fatorial(num - 1) * num;
    }
}

int main(void) {
    int num = 0;

    printf("%i", fatorial(num));


    return 0;
}