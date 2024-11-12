#include <stdio.h>

void trocar(int *ptr, int *ptr2)
{
    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;

    printf("%i\n", *ptr);
    printf("%i", *ptr2);

}

int main(void) {
    int a = 5;
    int b = 10;

    trocar(&a, &b);   
    return 0;
}