#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = (int*)malloc(10*sizeof(int));
    int j = 5;

    for(int i = 0; i < 10; i++)
    {
        ptr[i] = j;
        j++;
    }

    printf("%i\n", *ptr);
    ptr += 5;
    printf("%i\n", *ptr);

    free(ptr - 5);

    return 0;
}