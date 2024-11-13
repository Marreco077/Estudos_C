#include <stdio.h>

int main(void) {
    FILE *file;
    file = fopen("ex1.txt", "w");
    
    for(int i = 1; i <= 10; i++)
    {
        fprintf(file, "%i\n", i);
    }

    return 0;
}