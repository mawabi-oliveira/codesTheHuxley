#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int qtd_alunos, cuidados, qtd_onibus, qtd_max_onibus;
    scanf("%d %d %d %d", &qtd_alunos, &cuidados, &qtd_onibus, &qtd_max_onibus);

    if (qtd_alunos == 0)
    {
        printf("Davi foi assistir o filme sozinho =(\n");
        return 0;
    }

    int qtd_supervisores = 0;
    if (cuidados > 0)
    {
        qtd_supervisores = (qtd_alunos + cuidados - 1) / cuidados;
    }

    int total_passageiros = qtd_alunos + qtd_supervisores;
    int capacidade_total = qtd_onibus * qtd_max_onibus;

    if (capacidade_total >= total_passageiros)
    {
        printf("Iremos ao cinema!\n");
        int vagas_vazias = capacidade_total - total_passageiros;
        if (vagas_vazias == 0)
        {
            printf("Todas as vagas foram preenchidas.\n");
        }
        else
        {
            printf("Vagas Vazias = %d\n", vagas_vazias);
        }
    }
    else
    {
        printf("Não é possível.\n");
        int falta_vagas = total_passageiros - capacidade_total;
        printf("Falta %d vagas.\n", falta_vagas);
    }

    return 0;
}