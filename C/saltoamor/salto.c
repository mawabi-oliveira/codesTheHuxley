#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int fibonacci(int n, int a, int b)
{
    if (a == n)
    {
        return 1;
    }
    else
    {
        if (a > n)
        {
            return 0;
        }
        else
        {
            return fibonacci(n, b, a + b);
        }
    }
}

int primo(int n, int divisor)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        if (divisor * divisor > n)
        {
            return 1;
        }
        else
        {
            if (n % divisor == 0)
            {
                return 0;
            }
            else
            {
                return primo(n, divisor + 1);
            }
        }
    }
}

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + somaDigitos(n / 10);
    }
}

int troncoValido(int sapato, int tronco)
{
    if (sapato == 1)
    {
        return fibonacci(tronco, 0, 1);
    }
    else
    {
        if (sapato == 2)
        {
            return primo(tronco, 2);
        }
        else
        {
            if (somaDigitos(tronco) % 2 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

int atravessar(int pos, int total, int sapato)
{
    if (pos == total)
    {
        return 1;
    }
    else
    {
        int tronco;

        scanf("%d", &tronco);

        if (troncoValido(sapato, tronco))
        {
            return atravessar(pos + 1, total, sapato);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int sapato;
    int x;

    scanf("%d", &sapato);
    scanf("%d", &x);

    if (atravessar(0, x, sapato))
    {
        printf("Muack!\n");
    }
    else
    {
        printf("Nhac!\n");
    }

    return 0;
}