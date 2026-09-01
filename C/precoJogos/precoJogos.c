#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double calcular_preco_ano(double p, int d) {
    double desconto = 0.0;
    if (d == 0) desconto = 0.25;
    else if (d == 1) desconto = 0.20;
    else if (d == 2) desconto = 0.18;
    else if (d == 3) desconto = 0.15;
    else if (d == 4) desconto = 0.12;
    else if (d == 5) desconto = 0.10;
    
    if (p <= 100.0) {
        desconto = desconto / 2.0;
    }
    
    double novo_p = p - (p * desconto);
    

    if (novo_p < 45.0 && p >= 45.0) {
        novo_p = 45.0;
    } else if (p < 45.0) {
        novo_p = p; 
    }
    
    return novo_p;
}

double simular_3_anos(double p, int d, int anos) {
    if (anos == 0) {
        return p;
    } else {
        double p_prox = calcular_preco_ano(p, d);
        return simular_3_anos(p_prox, d, anos - 1);
    }
}

void processar_jogos(int indice, int n) {
    if (indice == n) {
        return;
    } else {
        int d;
        double p;
        scanf("%d %lf", &d, &p);
        
        double preco_final = simular_3_anos(p, d, 3);
        printf("Jogo[%d] = R$%.2lf\n", indice, preco_final);
        
        processar_jogos(indice + 1, n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    processar_jogos(0, n);
    return 0;
}