#include <stdio.h>

int main()
{
    float valor = 3.1415;
    float *ponteiro_para_float = &valor;

    printf("Valor de 'valor': %p\n", (void *)ponteiro_para_float);
    printf("Valor de 'valor2': %f\n", *ponteiro_para_float);

    return 0;
}
