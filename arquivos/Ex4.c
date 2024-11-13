#include <stdio.h>

int main(void) {
    FILE *file;

    file = fopen("ex2.txt", "r");

    int c;
    int contador = 0;

    while((c = fgetc(file)) != EOF)
    {
        if(c == 'a')
        {
            contador++;
        }
    }

    fclose(file);
    printf("\n%i", contador);
    
    return 0;
}