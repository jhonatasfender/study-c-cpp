#include <stdio.h>

int main()
{
    int numero = 123456;
    int* ponteiro_para_int = &numero;
    char* ponteiro_para_char;

    ponteiro_para_int = (char *)ponteiro_para_int;

    printf("Valor de 'numero' (int): %d\n", numero);
    printf("Primeiro byte de 'numero' (char): %d\n", *ponteiro_para_char);

    return 0;
}
