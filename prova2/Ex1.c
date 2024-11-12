#include <stdio.h>
#include <string.h>

void procedimento_media(float matriz[5][3], float vetor[3])
{
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            vetor[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Media vetor [%.2f]", vetor[i] /= 5.0);
    }


}

float funcao_maior(float matriz[5][3])
{
    float maior = matriz[0][0];
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main(void) {
    float matriz[5][3];
    float vetor[3] = {0};
    char opcao[6];

    printf("Preencha a matriz: \n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++)
        {
            printf("Veiculo [%i], versao [%i]\n", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("Digite a opcao: \n");
    scanf(" %s", opcao);

    if(strcmp(opcao, "media") == 0)
    {
        procedimento_media(matriz,vetor);
    }
    else if(strcmp(opcao, "maior") == 0)
    {
        printf("Maior valor = %.2f", funcao_maior(matriz));
    }

    return 0;
}