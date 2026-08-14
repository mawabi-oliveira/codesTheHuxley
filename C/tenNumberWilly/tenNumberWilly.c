#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;

    while (scanf("%d", &N) == 1 && N != -1)
    {
        int contador = 0;
        int numero_atual;

        for (int i = 0; i < 10; i++)
        {
            if (scanf("%d", &numero_atual) != 1)
            {
                break;
            }

            if (numero_atual == N)
            {
                contador++;
            }
        }

        printf("%d appeared %d times\n", N, contador);
    }

    return 0;
}