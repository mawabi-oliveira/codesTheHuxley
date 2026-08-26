#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i1, i2;
    float r1, r2, r3;

    double saldo1 = 0, saldo2 = 0;

    scanf("%d %d", &i1, &i2);
    if ((i1 + i2) % 2 == 0)
    {
        saldo1 = saldo1 + 2;
    }

    scanf("%f %f", &r1, &r2);
    float media_a = (r1 + r2) / 2.0;
    if (media_a > 7)
    {
        saldo1 = saldo1 + 4;
    }
    else
    {
        saldo1 = saldo1 - 2;
    }

    scanf("%f %f %f", &r1, &r2, &r3);
    float media_p = (r1 * 2 + r2 * 3 + r3 * 4) / 9.0;
    if (media_p >= 10 && media_p <= 20)
    {
        saldo1 = saldo1 + 5;
    }
    else
    {
        saldo1 = saldo1 - 2;
    }

    scanf("%d %d", &i1, &i2);
    if (i1 > i2)
    {
        saldo2 = saldo2 + 2;
    }

    scanf("%f %f", &r1, &r2);
    if (r1 / r2 >= 1)
    {
        saldo2 = saldo2 + 4;
    }
    else
    {
        saldo2 = saldo2 - 2;
    }

    scanf("%f %f %f", &r1, &r2, &r3);
    if (r1 + r2 >= r3)
    {
        saldo2 = saldo2 + 5;
    }
    else
    {
        saldo2 = saldo2 - 2;
    }

    if (saldo1 > 0 && (int)saldo1 % 3 == 0)
    {
        saldo1 = saldo1 * 1.20;
    }

    if (saldo2 > 0 && (int)saldo2 % 2 == 0)
    {
        saldo2 = saldo2 * 1.25;
    }

    if (saldo1 > saldo2)
    {
        printf("Aldrin: %.2f - Vencedor\nBeren: %.2f - Perdedor\n", saldo1, saldo2);
    }
    else if (saldo1 < saldo2)
    {
        printf("Beren: %.2f - Vencedor\nAldrin: %.2f - Perdedor\n", saldo2, saldo1);
    }
    else
    {
        printf("Aldrin: %.2f - Empate\nBeren: %.2f - Empate\n", saldo1, saldo2);
    }

    return 0;
}