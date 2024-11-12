#include <stdio.h>
#include <stdlib.h>


void preenche(char *nome[10], int idade[10], int nota[10])
{
    printf("Complete o vetor: ");
    
    for(int i = 0; i < 10; i++)
    {
        nome[i] = (char *)malloc(20 * sizeof(char));  // Alocação dinâmica para cada nome (máximo de 20 caracteres)

        printf("Nome %i: \n", i+1);
        scanf(" %s", nome[i]);  // Agora 'nome[i]' é um ponteiro para a string
        printf("Idade %i: \n", i+1);
        scanf("%i", &idade[i]);
        printf("Nota final %i: \n", i+1);
        scanf("%f", &nota[i]);
    }
}

void mais_velho(char *nome[20][10], int idade[10], int nota[10])
{
    int indice_velho = 0;

    for(int i = 1; i < 10; i++)
    {
        if(idade[i] > idade[indice_velho])
        {
            indice_velho = i;
        }
    }

    printf("Aluno mais velho: %s\n", nome[indice_velho]);
    printf("Idade: %i\n", idade[indice_velho]);
    printf("Nota final: %.2f\n", nota[indice_velho]);
}

float media(float nota[10])
{
    float media_total = 0;
    
    for(int i = 0; i < 10; i++)
    {
        media_total += nota[i];
    }

    media_total /= 10;
    
    return media_total;
}

int main(void) {
    char *nome[10]; // vetor de ponteiros para char
    int idade[10];
    float nota_final[10];

    preenche(nome, idade, nota_final);
    mais_velho(nome, idade, nota_final);
    printf("Media total: %.2f", media(nota_final));

    // Libera a memória alocada para os nomes
    for(int i = 0; i < 10; i++)
    {
        free(nome[i]);  // Libera cada string alocada dinamicamente
    }

    return 0;
}