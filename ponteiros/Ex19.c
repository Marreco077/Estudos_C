#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;

    ptr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
    {
        if(ptr[i] % 2 == 0)
        {
            printf("%p\n", ptr[i]);
        }
    }

    free(ptr);
    
    return 0;
}