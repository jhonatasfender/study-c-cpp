#include <stdio.h>

int main()
{
    int type, answer, correct = 0;

    scanf("%d", &type);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &answer);
        if (answer == type)
        {
            correct++;
        }
    }

    printf("%d\n", correct);

    return 0;
}
