#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float cotacao, aliquota_pct, produto_usd, frete_usd;
    scanf("%f %f %f %f", &cotacao, &aliquota_pct, &produto_usd, &frete_usd);

    float aliquota = aliquota_pct / 100.0;
    float frete_para_imposto = frete_usd;
    int isento_frete = 0;

    if (produto_usd >= 2500.0) {
        frete_para_imposto = 0.0;
        isento_frete = 1;
    }

    float produto_rs = produto_usd * cotacao;
    float frete_rs = frete_usd * cotacao;
    float valor_total_rs = produto_rs + frete_rs;

    float imposto_importacao_usd = (produto_usd + frete_para_imposto) * 0.60;
    float valor_final_usd = (produto_usd + frete_para_imposto + imposto_importacao_usd) / (1.0 - aliquota);
    float icms_usd = valor_final_usd * aliquota;

    float imposto_importacao_rs = imposto_importacao_usd * cotacao;
    float icms_rs = icms_usd * cotacao;
    float total_impostos_rs = imposto_importacao_rs + icms_rs;
    
    float total_pagar_rs = valor_final_usd * cotacao;
    
    if (isento_frete == 1) {
        total_pagar_rs = total_pagar_rs + frete_rs;
    }

    printf("%.2f\n", cotacao);
    printf("%.2f\n", produto_rs);
    printf("%.2f\n", frete_rs);
    printf("%.2f\n", valor_total_rs);
    printf("%.2f\n", imposto_importacao_rs);
    printf("%.2f\n", icms_rs);
    printf("%.2f\n", total_impostos_rs);
    printf("%.2f\n", total_pagar_rs);

    if (isento_frete == 1) {
        printf("Impostos calculados sem o frete\n");
    } else {
        printf("Impostos calculados com o frete\n");
    }

    return 0;
}