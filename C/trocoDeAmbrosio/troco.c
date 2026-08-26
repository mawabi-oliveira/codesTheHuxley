#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float n_compra_a, n_pago_c;
    scanf("%f %f", &n_compra_a, &n_pago_c);

    float troco_total = n_pago_c - n_compra_a;
    float troco_original = troco_total;

    int qtd_20 = 0, qtd_10 = 0, qtd_5 = 0, qtd_1 = 0, qtd_05 = 0;

    if (troco_total >= 20.0)
    {
        qtd_20 = troco_total / 20.0;
        troco_total = troco_total - (qtd_20 * 20.0);
    }

    if (troco_total >= 10.0)
    {
        qtd_10 = troco_total / 10.0;
        troco_total = troco_total - (qtd_10 * 10.0);
    }

    if (troco_total >= 5.0)
    {
        qtd_5 = troco_total / 5.0;
        troco_total = troco_total - (qtd_5 * 5.0);
    }

    if (troco_total >= 1.0)
    {
        qtd_1 = troco_total / 1.0;
        troco_total = troco_total - (qtd_1 * 1.0);
    }

    if (troco_total >= 0.50)
    {
        qtd_05 = troco_total / 0.50;
        troco_total = troco_total - (qtd_05 * 0.50);
    }

    printf("Troco: %.2f\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nMoedas de 1: %d\nMoedas de 0.50: %d\n", troco_original, qtd_20, qtd_10, qtd_5, qtd_1, qtd_05);

    return 0;
}