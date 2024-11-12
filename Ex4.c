#include <stdio.h>

int main(void) {
    int x = 0;        // Variável x inicializada com 0
    int *p = &x;      // Ponteiro p aponta para o endereço de x

    // Exemplo com p++
    printf("Antes de p++: p = %p, *p = %d\n", (void*)p, *p);
    p++;  // Incrementa p para o próximo endereço
    printf("Depois de p++: p = %p, *p = %d\n", (void*)p, *p);  // p agora aponta para o próximo endereço de memória

    // Resetando p para apontar de volta para x
    p = &x;

    // Exemplo com *(p++)
    printf("\nAntes de *(p++): p = %p, *p = %d\n", (void*)p, *p);
    printf("Valor acessado por *(p++): %d\n", *(p++));  // Acessa o valor de x e depois incrementa p
    printf("Depois de *(p++): p = %p, *p = %d\n", (void*)p, *p);  // p agora aponta para o próximo endereço de memória

    return 0;
}
