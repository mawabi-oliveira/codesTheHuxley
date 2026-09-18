#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void inverter(char palavra[], int pos)
{
    if (palavra[pos] == '\0')
    {
        return;
    }
    else
    {
        inverter(palavra, pos + 1);

        printf("%c", palavra[pos]);
    }
}

void processar(int quantidade)
{
    if (quantidade == 0)
    {
        return;
    }
    else
    {
        int n;
        char palavra[10005];

        scanf("%d", &n);
        scanf("%s", palavra);

        inverter(palavra, 0);

        printf("\n");

        processar(quantidade - 1);
    }
}

int main()
{
    int x;

    scanf("%d", &x);

    processar(x);

    return 0;
}