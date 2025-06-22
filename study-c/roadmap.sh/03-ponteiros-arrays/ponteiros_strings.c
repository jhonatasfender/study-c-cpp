#include <stdio.h>

int main()
{
    char mensagem[] = "Olam mundo!";
    char* ptr_mensagem = mensagem;

    printf("Mensagem original: %s\n", mensagem);

    *ptr_mensagem = 'H';

    printf("Mensagem modificada: %s\n", mensagem);

    return 0;
}
