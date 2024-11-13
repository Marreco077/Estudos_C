#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    char nome_arquivo[40];
    int n = (rand() % 50);

    printf("Digite o nome do arquivo: \n");
    scanf("%39[^\n]", nome_arquivo);

    FILE *file;
    file = fopen(nome_arquivo, "w+");

    for(int i = 0; i < n; i++)
    {
        int numero_aleatorio = (rand() % 100);
        fprintf(file, "%i ", numero_aleatorio);
    }

    fclose(file);

    file = fopen(nome_arquivo, "r");

    int numeros[n];
    int num;
    int i = 0;

    while(fscanf(file, "%i", &num) == 1){
        numeros[i++] = num;
    }

    printf("\n\n%i", numeros[5]);

    return 0;
}