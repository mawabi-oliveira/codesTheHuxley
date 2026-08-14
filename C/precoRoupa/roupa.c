#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float custo_material;
    char tam_roupa, tipo_roupa;
    scanf("%f", &custo_material);
    scanf(" %c %c", &tam_roupa, &tipo_roupa);
    float tam_preco = 0, tipo_preco = 0;
    //
    if (tam_roupa == 'P')
    {
        tam_preco = 2.75;
    }

    if (tam_roupa == 'M')
    {
        tam_preco = 3.66;
        //
    }

    else if (tam_roupa == 'G')
    {
        tam_preco = 5.17;
    }

    if (tipo_roupa == 'B')
    {
        tipo_preco = 3.82;
    }
    else if (tipo_roupa == 'C')
    {
        tipo_preco = 4.55;
    }
    else if (tipo_roupa == 'M')
    {
        tipo_preco = 7.12;
    }

    float preco_roupa = (custo_material * tam_preco + tipo_preco * custo_material) / 2;
    printf("%.2f R$", preco_roupa);

    return 0;
}