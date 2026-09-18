#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int menor(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int rua1[n];
    int rua2[n];

    int i;

    //c1
    for (i = 0; i < n; i++)
    {
        scanf("%d", &rua1[i]);
    }

   //c2
    for (i = 0; i < n; i++)
    {
        scanf("%d", &rua2[i]);
    }

    int prefixo1[n + 1];
    int prefixo2[n + 1];

    prefixo1[0] = 0;
    prefixo2[0] = 0;

    for (i = 0; i < n; i++)
    {
        if (rua1[i] == 0)
        {
            prefixo1[i + 1] = prefixo1[i] + 1;
        }
        else
        {
            prefixo1[i + 1] = prefixo1[i];
        }

        if (rua2[i] == 0)
        {
            prefixo2[i + 1] = prefixo2[i] + 1;
        }
        else
        {
            prefixo2[i + 1] = prefixo2[i];
        }
    }

    int resposta = 1000000000;

    for (i = 0; i <= n; i++)
    {
        int chuva;

        //r1, p r2

        chuva = prefixo1[i];

        if (i < n)
        {
            chuva = chuva + 1;
        }

        chuva = chuva + (prefixo2[n] - prefixo2[i]);

        resposta = menor(resposta, chuva);


        //r2, p r1

        chuva = prefixo2[i];

        if (i < n)
        {
            chuva = chuva + 1;
        }

        chuva = chuva + (prefixo1[n] - prefixo1[i]);

        resposta = menor(resposta, chuva);
    }

    printf("%d\n", resposta);

    return 0;
}