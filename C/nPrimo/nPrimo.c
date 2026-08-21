#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo_rec(int n, int d)
{
    if (n <= 1)
    {
        return 0;
    }
    if (d * d > n)
    {
        return 1;
    }
    if (n % d == 0)
    {
        return 0;
    }
    return eh_primo_rec(n, d + 1);
}

int eh_primo(int n)
{
    return eh_primo_rec(n, 2);
}

int main()
{
    int n;

    if (scanf("%d", &n) != 1 || n == -1)
    {
        return 0;
    }
    else
    {
        printf("%d\n", eh_primo(n));
        return main();
    }
}