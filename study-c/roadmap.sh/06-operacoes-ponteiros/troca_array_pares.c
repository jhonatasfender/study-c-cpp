#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    const int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Antes da troca por pares:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < tamanho; i += 2)
    {
        int* p1 = &arr[i];
        int* p2 = &arr[i + 1];

        const int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    printf("Depois da troca por pares:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
