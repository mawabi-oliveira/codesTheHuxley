#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int aluno_idade;
    float p1, p2, p, media_a;
    scanf("%d", &aluno_idade);
    scanf("%f %f %f", &p1, &p2, &p);
    

    if (aluno_idade >= 18)
    {
        media_a = (((p1 + p2) / 2.0) * 6.0 + (p * 3.0)) / 9.0;
    }
    else
    {
        if (p1 < 7.0 || p2 < 7.0)
        {
            if (p1 <= p2 && p1 <= p)
            {
                media_a = (p2 + p) / 2.0;
            }
            else if (p2 <= p1 && p2 <= p)
            {
                media_a = (p1 + p) / 2.0;
            }
            else
            {
                media_a = (p1 + p2) / 2.0;
            }
        }
        else
        {
            media_a = (p1 + p2) / 2.0;
        }
    }

    if (media_a >= 5.5 && p1 >= 4.0 && p2 >= 4.0 && p >= 4.0)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }

    return 0;
}