#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int serie(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    else
    {
        if (i % 3 == 1)
        {
            return i + serie(i + 1, n);
        }
        else
        {
            if (i % 3 == 2)
            {
                return i * (i + 1) + serie(i + 1, n);
            }
            else
            {
                return -(i * i) + serie(i + 1, n);
            }
        }
    }
}

void processar(int quantidade)
{
    if (quantidade > 0)
    {
        int n;
        scanf("%d", &n);

        int resultado = serie(1, n);

        resultado = abs(resultado);

        printf("%c", resultado + 65);

        processar(quantidade - 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    processar(n);

    printf("\n");

    return 0;
}