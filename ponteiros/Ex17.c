#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas = 3, colunas = 4;
    
    // Aloca memória para o array de ponteiros (linhas)
    int **matriz = (int**)malloc(linhas * sizeof(int*));

    // Verifica se a alocação foi bem-sucedida
    if (matriz == NULL) {
        printf("Erro na alocação de memória para as linhas da matriz\n");
        return 1;
    }

    // Aloca memória para cada linha (vetor de inteiros)
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));

        // Verifica se a alocação foi bem-sucedida para cada linha
        if (matriz[i] == NULL) {
            printf("Erro na alocação de memória para a linha %d\n", i);
            return 1;
        }
    }

    // Preenche e imprime os endereços de cada elemento da matriz 3x4
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Endereço de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
