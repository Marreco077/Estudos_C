#include <stdio.h>

int resto(int numerador, int denominador)
{
    if(numerador <= denominador)
    {
        return numerador;
    }

    return resto(numerador - denominador, denominador);
}

int main(void) {
    int numerador = 5231;
    int denominador = 20;

    printf("%i", resto(numerador, denominador));

    return 0;
}