#include <stdio.h>

int main(void) {
    int array[5];
    int *ptr = array;

    for(int i = 0; i < 5; i++)
    {
        scanf("%i", ptr + i);
        ptr = &array[i];
        *ptr *= 2;
        
        printf("valor %i: %i\n", i+1, array[i]);
    }
       
    return 0;
}