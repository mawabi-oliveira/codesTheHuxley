#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float notas[5][4];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%f", &notas[i][j]);
        }
    }

    printf("Notas do aluno:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d\n", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
    return 0;
}