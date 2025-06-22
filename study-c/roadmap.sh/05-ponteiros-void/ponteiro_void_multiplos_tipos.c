#include <stdio.h>

int main()
{
    int i = 42;
    float f = 3.14f;
    char c = 'A';

    void* ptr = &i;
    const int valor_i = *(int*)ptr;
    printf("Valor int: %d\n", valor_i);

    ptr = &f;
    const float valor_f = *(float*)ptr;
    printf("Valor float: %.2f\n", valor_f);

    ptr = &c;
    const char valor_c = *(char*)ptr;
    printf("Valor char: %c\n", valor_c);

    return 0;
}
