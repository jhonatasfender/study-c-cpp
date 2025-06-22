#include <stdio.h>
#include <stdlib.h>

#define NUM_COMPETITIONS 5
#define MIN_TEA_TYPE 1
#define MAX_TEA_TYPE 5

int main(void)
{
    int correct_tea_type;
    int competitor_answer;
    int correct_answers = 0;

    if (scanf("%d", &correct_tea_type) != 1)
    {
        fprintf(stderr, "Erro: Falha ao ler o tipo de chá\n");
        return EXIT_FAILURE;
    }

    if (correct_tea_type < MIN_TEA_TYPE || correct_tea_type > MAX_TEA_TYPE)
    {
        fprintf(stderr, "Erro: Tipo de chá deve estar entre %d e %d\n",MIN_TEA_TYPE, MAX_TEA_TYPE);
        return EXIT_FAILURE;
    }

    for (int i = 0; i < NUM_COMPETITIONS; i++)
    {
        if (scanf("%d", &competitor_answer) != 1)
        {
            fprintf(stderr, "Erro: Falha ao ler a resposta do competidor %d\n", i + 1);
            return EXIT_FAILURE;
        }

        if (competitor_answer < MIN_TEA_TYPE || competitor_answer > MAX_TEA_TYPE)
        {
            fprintf(
                stderr,
                "Erro: Resposta do competidor %d deve estar entre %d e %d\n",
                i + 1,
                MIN_TEA_TYPE,
                MAX_TEA_TYPE
            );
        }

        if (competitor_answer == correct_tea_type)
        {
            correct_answers++;
        }
    }

    printf("%d\n", correct_answers);

    return EXIT_SUCCESS;
}
