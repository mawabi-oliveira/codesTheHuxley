#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ehPrimo(int n)
{
    int i;

    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }

        return 1;
    }
}

int somaDivisores(int n)
{
    int i;
    int soma = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma = soma + i;
        }
    }

    return soma;
}

int main()
{
    int n;

    int maiorPrimo = 0;
    int menorSoma = 0;

    int temPrimo = 0;
    int temNaoPrimo = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n <= 0)
        {
            break;
        }
        else
        {
            if (ehPrimo(n))
            {
                if (temPrimo == 0)
                {
                    maiorPrimo = n;
                    temPrimo = 1;
                }
                else
                {
                    if (n > maiorPrimo)
                    {
                        maiorPrimo = n;
                    }
                }
            }
            else
            {
                int soma;

                soma = somaDivisores(n);

                if (temNaoPrimo == 0)
                {
                    menorSoma = soma;
                    temNaoPrimo = 1;
                }
                else
                {
                    if (soma < menorSoma)
                    {
                        menorSoma = soma;
                    }
                }
            }
        }
    }

    if (temPrimo == 1)
    {
        printf("Maior numero primo: %d\n", maiorPrimo);
    }
    else
    {
        printf("Nenhum numero primo foi digitado\n");
    }

    if (temNaoPrimo == 1)
    {
        printf("A Menor soma dos divisores: %d\n", menorSoma);
    }
    else
    {
        printf("Nenhum numero nao primo foi digitado\n");
    }

    if (temPrimo == 1 && temNaoPrimo == 1)
    {
        if (maiorPrimo > 3 * menorSoma)
        {
            printf("Deu a logica, computos campeao!\n");
        }
        else
        {
            printf("eh mafiaaaaa!\n");
        }
    }
    else
    {
        printf("eh mafiaaaaa!\n");
    }

    return 0;
}