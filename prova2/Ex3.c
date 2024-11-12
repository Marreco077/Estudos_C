#include <stdio.h>
#include <stdlib.h>

void converte_hora(int total_segundos, int *hora, int *min, int *seg)
{
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = (total_segundos % 3600) % 60;
}

int main(void) {
    int total = 7835;
    int hora, min, seg;

    converte_hora(total, &hora, &min, &seg);

    printf("%i:%i:%i", hora, min, seg);

    return 0;
}