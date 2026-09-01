#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int P, R, G, X;
    scanf("%lld %lld %lld %lld", &P, &R, &G, &X);
    long long int salario = P * R;
    long long int gols = G * X;
    long long int receber = gols * P;

    if (R > 0)
    {

        if (receber > salario)
        {
            printf("%lld", salario);
        }
        else
        {
            printf("%lld", receber);
        }
    }
    return 0;
}