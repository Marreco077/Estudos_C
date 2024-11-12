#include <stdio.h>

int divisao(int numero, int divide)
{
    if(numero < divide)
    {
        return 0;
    }
    else
    {
        return 1 + divisao(numero - divide, divide);
    }
}

int main(void) {
    int numero = 5231;
    int divide = 10;

    printf("%i", divisao(numero, divide));

    return 0;
}