#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float salario;
    scanf("%f", &salario);
    float novo_salario;
    int percentual;

    if (salario <= 280)
    {
        novo_salario = salario * 1.20;
        percentual = 20;
    }
    else if (salario > 280 && salario < 700)
    {
        novo_salario = salario * 1.15;
        percentual = 15;
    }
    else if (salario >= 700 && salario < 1500)
    {
        novo_salario = salario * 1.10;
        percentual = 10;
    }
    else if (salario >= 1500)
    {
        novo_salario = salario * 1.05;
        percentual = 5;
    }

        float valor_aumento = novo_salario - salario;

    printf("%.2f\n%d\n%.2f\n%.2f\n", salario, percentual, valor_aumento, novo_salario);

    return 0;
}