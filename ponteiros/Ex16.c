#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *ptr = (float*)malloc(10 * sizeof(float));

    for(int i = 0; i < 10; i++)
    {
        printf("%p\n", &ptr[i]);
    }
   
    free(ptr);
    
    return 0;
}