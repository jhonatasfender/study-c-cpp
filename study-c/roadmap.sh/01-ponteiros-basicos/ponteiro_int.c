#include <stdio.h>

int main()
{
    int number = 10;
    int *ponteiro_para_inteiro = &number;

    printf("Endereço de 'numero': %p\n", (void *)ponteiro_para_inteiro);
    printf("Valor de 'numero': %d\n", *ponteiro_para_inteiro);

    return 0;
}
