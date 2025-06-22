#include <stdio.h>

int main()
{
    char letra = 'A';
    char* ponteiro_para_char = &letra;

    printf("Endereço de 'letra': %p\n", (void *)ponteiro_para_char);
    printf("Valor de 'letra': %c\n", *ponteiro_para_char);

    char mensagem[] = "Olá, mundo!";
    char *ponteiro_para_string = mensagem;

    printf("Mensagem: %s\n", ponteiro_para_string);

    return 0;
}
