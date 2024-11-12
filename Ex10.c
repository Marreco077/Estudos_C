#include <stdio.h>

// Função recursiva para calcular a série S
double serie(int n) {
    if (n == 1) {
        return 1.0;  // Caso base: 1/1!
    }
    return 1.0 / (n * serie(n - 1)) + serie(n - 1);  // Chamada recursiva, soma do termo atual e cálculo do fatorial
}

int main(void) {
    int n = 5;
    printf("Resultado da serie para n = 5: %.2f\n", serie(n));
    return 0;
}
