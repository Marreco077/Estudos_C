#include <stdio.h>

void troca(int *ptra, int *ptrb)
{
    int teste = *ptra;

    if(*ptrb > *ptra)
    {
        *ptra = *ptrb;
        *ptrb = teste;
    }

    printf("Valor variavel A = %i\n", *ptra);
    printf("Valor variavel B = %i", *ptrb);
}

int main(void) {
    int a = 0;
    int b = 0;   


    scanf("%i", &a);
    scanf("%i", &b);

    troca(&a, &b);


    return 0;
}