#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int A, B;

    if (scanf("%lld %lld", &A, &B) == 2)
    {
        long long int D = A - B;

        long long int p = 1;
        while (p * 2 <= D)
        {
            p *= 2;
        }

        while (D > 0 && p > 0)
        {
            if (p <= D)
            {
                printf("%lld ", p);
                D -= p;
            }
            p /= 2; 
        }
    }

    return 0;
}