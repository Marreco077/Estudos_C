#include <stdio.h>

int soma(int numero, int soma_total)
{
    
    if(numero <= 10)
    {
        return soma_total += numero;
    }
    else
    {   
        soma_total += numero % 10;
        return soma(numero / 10, soma_total);
    }
}

int main(void) {
    int numero = 5283;
    int soma_total = 0;
    
    
    printf("%i", soma(numero, soma_total));


    return 0;
}