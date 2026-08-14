#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char p1, p2, p3, p4;
    scanf(" %c %c %c %c", &p1, &p2, &p3, &p4);
    if (p1 == 'E')
    {
        if (p3 == 'D')
        {
            printf("Estabulo");
        }
        else
        {
            printf("Galpao de ordenha");
        }
    }
    else
    {
        if (p2 == 'E')
        {
            printf("Coucho");
        }
        else
        {
            if (p4 == 'E')
            {
                printf("Abrigo");
            }
            else
            {
                printf("Pasto");
            }
        }
    }

    return 0;
}