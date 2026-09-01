#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int P, N, M;
    char T, I;
    scanf("%d", &P);
    scanf(" %c", &T);
    scanf(" %c", &I);
    scanf("%d", &N);
    scanf("%d", &M);

    float P_total = P;

    if (T == 'R')
    {
        P_total *= 0.85;
    }
    else if (T == 'S')
    {
        P_total *= 1.4;
    }

    if (I == 'F')
    {
        P_total *= 1.25;
    }

    else if (I == 'E')
    {
        P_total *= 0.8;
    }

    else if (I == 'I')
    {
        P_total *= 1.5;
    }

    if (N >= 10)
    {
        P_total *= 1.35;
    }

    else if (N >= 5 && N <= 9)
    {
        P_total *= 1.15;
    }



    if (P_total >= M)
    {
        printf("%.2f\nMarcos venceu a rodada!\n", P_total);
    }
    else
    {
        printf("%.2f\nMarcos foi eliminado!\n", P_total);
    }

    return 0;
}