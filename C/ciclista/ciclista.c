#include <stdio.h>

double calculaMeta(char sexo, int idade)
{
    if (sexo == 'M')
    {
        if (idade <= 29)
        {
            return idade * 1.4;
        }
        else
        {
            if (idade <= 49)
            {
                return idade * 1.2;
            }
            else
            {
                return idade * 1.0;
            }
        }
    }
    else
    {
        if (idade <= 29)
        {
            return idade * 1.2;
        }
        else
        {
            if (idade <= 49)
            {
                return idade * 1.0;
            }
            else
            {
                return idade * 0.9;
            }
        }
    }
}

void processar(int i, int total)
{
    if (i > total)
    {
        return;
    }
    else
    {
        char sexo;
        int idade;
        double distancia;

        scanf(" %c %d %lf", &sexo, &idade, &distancia);

        double meta = calculaMeta(sexo, idade);

        if (distancia >= meta)
        {
            printf("Ciclista %d: Atingiu a meta\n", i);
        }
        else
        {
            printf("Ciclista %d: Nao atingiu a meta\n", i);
        }

        processar(i + 1, total);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    processar(1, n);

    return 0;
}