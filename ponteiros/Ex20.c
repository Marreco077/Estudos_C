#include <stdio.h>
#include <stdlib.h>

int ordena(int *p1, int *p2, int *p3)
{
    int reserva1 = *p1;
    int reserva3 = *p3;

    if(*p1 == *p2 && *p1 == *p3)
    {
        return 1;
    }
    else
    {
        if(*p2 > *p1 && *p2 > *p3)
        {
            if(*p1 > *p3)
            {
                *p3 = *p2;
                *p2 = *p1;
                *p1 = reserva3;
            }
            else
            {
                *p3 = *p2;
                *p2 = reserva3;
            }
        }
        else if(*p3 > *p2 && *p3 > *p1)
        {
            if(*p1 > *p2)
            {
                *p1 = *p2;
                *p2 = reserva1;
            }
        }
        
        printf("%i\n", *p3);
        printf("%i\n", *p2);
        printf("%i\n", *p1);

        return 0;
    }
}

int main(void) {
    // int *ptr = (int*)malloc(3 * sizeof(int));
    int num1, num2, num3;

    scanf("%i%i%i", &num1, &num2, &num3);
    // scanf("%i", ptr + i);

    printf("\n\n");
    printf("%i\n", ordena(&num1, &num2, &num3));

    // free(ptr);

    return 0;
}