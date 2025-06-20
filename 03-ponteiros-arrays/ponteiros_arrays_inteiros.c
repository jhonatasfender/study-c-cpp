#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = &array[0];

    printf("Array completo:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    printf("\n");

    printf("Primeiro elemento (usando ponteiro): %d\n", *ptr);

    int *ptr_terceiro = &array[2];
    printf("Terceiro elemento (usando ponteiro): %d\n", *ptr_terceiro);

    int *ptr_all = ptr + 2;
    printf("Terceiro elemento (ponteiro + 2): %d\n", *ptr_all);

    printf("\nEndereços de memória:\n");
    printf("Endereço da array[0]: %p\n", &array[0]);
    printf("Endereço da array[2]: %p\n", &array[2]);
    printf("Valor do ptr: %p\n", ptr);
    printf("Valor do ptr_terceiro: %p\n", ptr_terceiro);

    return 0;
}
