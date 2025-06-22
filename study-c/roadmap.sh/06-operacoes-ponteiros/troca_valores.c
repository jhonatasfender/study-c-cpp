#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    int *pa = &a, *pb = &b;
    int temp = *pa;

    *pa = *pb;
    *pb = temp;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
