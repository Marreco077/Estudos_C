#include <stdio.h>

int main(void) {
    int teste = 7;
    int *ptr = &teste;
    
    *ptr = 14;

    printf("Endereco: %i\n", teste);
    printf("Endereco: %i", *ptr);

    return 0;
}