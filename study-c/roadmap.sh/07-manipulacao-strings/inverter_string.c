#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "programador";

    printf("Original: %s\n", str);

    char* inicio = str;
    char* fim = inicio + strlen(str) - 1;

    while (inicio < fim)
    {
        const char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }

    printf("Invertida: %s\n", str);

    return 0;
}
