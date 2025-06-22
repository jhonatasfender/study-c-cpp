#include <stdio.h>

int main()
{
    int idade = 30;
    int* ptr_idade = &idade;

    printf("O valor de idade é: %d\n", idade);
    printf("O endereço de idade é: %p\n", &idade);
    printf("O valor de ptr_idade é: %p\n", ptr_idade);
    printf("O valor apontado por ptr_idade é: %d\n", *ptr_idade);

    return 0;
}
