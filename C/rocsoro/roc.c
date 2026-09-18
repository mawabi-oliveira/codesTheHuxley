#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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

int calculaNumero(int p, int a, int h)
{
    int soma = p + a + h;

    if (soma % 2 != 0)
    {
        return (p * a * h) / 2;
    }
    else
    {
        return somaDigitos(p)
             * somaDigitos(a)
             * somaDigitos(h);
    }
}

void jogar(int rodada, int total,
           int *pedro, int *anderson,
           int *hugo, int *empates)
{
    if (rodada > total)
    {
        return;
    }
    else
    {
        int p, a, h;

        scanf("%d %d %d", &p, &a, &h);

        int resultado = calculaNumero(p, a, h);

        int ultimo = resultado % 10;

        if (ultimo == 0)
        {
            (*empates)++;
        }
        else
        {
            if (ultimo <= 3)
            {
                (*pedro) += resultado;
            }
            else
            {
                if (ultimo <= 6)
                {
                    (*anderson) += resultado;
                }
                else
                {
                    (*hugo) += resultado;
                }
            }
        }

        jogar(rodada + 1, total,
              pedro, anderson, hugo, empates);
    }
}

int main()
{
    int n;

    int pedro = 0;
    int anderson = 0;
    int hugo = 0;
    int empates = 0;

    scanf("%d", &n);

    jogar(1, n,
          &pedro, &anderson,
          &hugo, &empates);

    printf("Pontuacao Pedro: %d\n", pedro);
    printf("Pontuacao Anderson: %d\n", anderson);
    printf("Pontuacao Hugo: %d\n", hugo);
    printf("Empates: %d\n", empates);

    if (pedro > anderson)
    {
        if (pedro > hugo)
        {
            printf("Pedro ganhou\n");
        }
        else
        {
            printf("Hugo ganhou\n");
        }
    }
    else
    {
        if (anderson > hugo)
        {
            printf("Anderson ganhou\n");
        }
        else
        {
            printf("Hugo ganhou\n");
        }
    }

    return 0;
}