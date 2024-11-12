#include <stdio.h>

int main(void) {
    int numero = 0;
    float numero_real = 0.0;
    char letra;

    int *ptr;
    float *ptrr;
    char *ptrc;

    ptr = &numero;
    ptrr = &numero_real;
    ptrc = &letra;

    printf("%i\n", numero);
    printf("%.2f\n", numero_real);
    printf("%c\n", letra);

    *ptr = 7;
    *ptrr = 8.8;
    *ptrc = 'b';

    printf("%i\n", *ptr);
    printf("%.2f\n", *ptrr);
    printf("%c\n", *ptrc);



    return 0;
}