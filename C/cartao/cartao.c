#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    float fatura;
    scanf("%f", &fatura);
    float fatura_d = fatura * 0.50;
    float fatura_dd = (fatura_d * 0.065) + fatura_d;

    printf("Valor total da fatura: R$ %.2f\n", fatura);
    printf("Valor a pagar em Marco: R$ %.2f\n", fatura_d);
    printf("Valor a pagar em Abril: R$ %.2f\n", fatura_dd);

    return 0;
}