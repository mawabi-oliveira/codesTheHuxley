#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float l_combustivel;
    scanf("%f", &l_combustivel);
    char tipo_gas;
    scanf(" %c", &tipo_gas);
    float valor;

    if (tipo_gas == 'A')
    {
        if (l_combustivel <= 20)
        {
            valor = (l_combustivel * 1.90) * 0.97;
        }
        else if (l_combustivel > 20)
        {
            valor = (l_combustivel * 1.90) * 0.95;
        }
    }
    else if (tipo_gas == 'G')
    {
        if (l_combustivel <= 20)
        {
            valor = (l_combustivel * 2.50) * 0.96;
        }
        else if (l_combustivel > 20)
        {
            valor = (l_combustivel * 2.50) * 0.94;
        }
    }
    else if (tipo_gas == 'D')
    {
        if (l_combustivel <= 25)
        {
            valor = (l_combustivel * 1.66);
        }
        else if (l_combustivel > 25)
        {
            valor = (l_combustivel * 1.66) * 0.96;
        }
    }

    printf("R$ %.2f", valor);

    return 0;
}