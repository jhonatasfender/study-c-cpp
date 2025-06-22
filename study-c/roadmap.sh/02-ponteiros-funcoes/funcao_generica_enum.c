#include <stdio.h>

enum Tipo { INT, FLOAT, CHAR };

void imprime(void* ptr, const enum Tipo tipo)
{
    switch (tipo)
    {
    case INT:
        printf("Valor int: %d\n", *(int*)ptr);
        break;
    case FLOAT:
        printf("Valor float: %.2f\n", *(float*)ptr);
        break;
    case CHAR:
        printf("Valor char: %c\n", *(char*)ptr);
        break;
    }
}

int main()
{
    int i = 42;
    float f = 3.14f;
    char c = 'A';

    imprime(&i, INT);
    imprime(&f, FLOAT);
    imprime(&c, CHAR);

    return 0;
}
