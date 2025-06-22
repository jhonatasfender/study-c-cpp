#include <stdio.h>

int main()
{
    int numero = 10;
    float valor = 3.14;

    void* ponteiro_generico;
    ponteiro_generico = &numero;

    printf("Valor de 'numero': %d\n", *(int*)ponteiro_generico);

    ponteiro_generico = &valor;
    printf("Valor de 'valor': %f\n", *(float*)ponteiro_generico);

    return 0;
}
