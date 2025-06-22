#include <stdio.h>

int main()
{
    int arr[] = {45, 12, 78, 3, 90, 23, 451, 67, 89, 123};
    const int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int* p_min = &arr[0];
    const int* p_max = &arr[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (arr[i] < *p_min)
        {
            p_min = &arr[i];
        }

        if (arr[i] > *p_max)
        {
            p_max = &arr[i];
        }
    }

    const int temp = *p_min;
    *p_min = *p_max;
    p_max = &temp;

    printf("Array após troca do menor com o maior:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
