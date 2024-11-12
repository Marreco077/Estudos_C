#include <stdio.h>

int main(void) {
    int arr[5] = {5, 10, 7, 8, 9};
    int *ptr = &arr[0];

    for(int i = 0; i < 5; i++)
    {
        printf("%i\n", *ptr);
        ptr++;
    }

    return 0;
}