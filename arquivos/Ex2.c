#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[100];
    FILE *file;
    file = fopen("ex2.txt", "w");

    scanf("%99[^\n]", frase);

    fprintf(file, " %s", frase);

    return 0;
}