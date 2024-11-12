#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%i", &a);
    scanf("%i", &b);

    if(&a > &b)
    {
        printf("%p", &a);
    }
    else
    {
        printf("%p", &b);
    }
    
    return 0;
}