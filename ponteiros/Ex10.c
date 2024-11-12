#include <stdio.h>

int main(void) {
    int b;
    int c;

    printf("%p\n", &b);
    printf("%p\n", &c);


    if(&b > &c)
    {
        printf("%p", &b);
    }   
    else
    {
        printf("%p", &c);
    }

    return 0;
}