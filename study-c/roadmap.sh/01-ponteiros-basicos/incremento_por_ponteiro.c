#include <stdio.h>

int main()
{
    int numero = 10;
    int* ptr = &numero;

    printf("Valor original: %d\n", numero);
    printf("Endereço da variável: %p\n", &numero);
    printf("Valor do ponteiro: %p\n", ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    *ptr += 5;

    printf("\nApós incrementar em 5: \n");
    printf("Novo valor da variável: %d\n", numero);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    return 0;
}
