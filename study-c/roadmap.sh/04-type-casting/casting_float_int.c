#include <stdio.h>

int main()
{
    float valor = 3.14;
    int* ponteiro_para_int;

    ponteiro_para_int = (int*)&valor;

    printf("Valor original (float): %f\n", valor);
    printf("Valor interpretado como int: %d\n", *ponteiro_para_int);

    return 0;
}
