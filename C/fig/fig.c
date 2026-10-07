#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ja_visto[13001] = {0};
int qtd_joao = 0;
int qtd_maria = 0;
int soma_joao = 0;
int soma_maria = 0;

void processar_figurinhas(int i, int n) {
    if (i >= n) return;

    int numero;
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        qtd_joao++;
        if (ja_visto[numero] == 0) {
            soma_joao += numero;
            ja_visto[numero] = 1;
        }
    } else {
        qtd_maria++;
        if (ja_visto[numero] == 0) {
            soma_maria += numero;
            ja_visto[numero] = 1;
        }
    }

    processar_figurinhas(i + 1, n);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    processar_figurinhas(0, n);

    int soma_vencedor;
    if (soma_joao >= soma_maria) {
        soma_vencedor = soma_joao;
    } else {
        soma_vencedor = soma_maria;
    }

    printf("%d\n%d\n%d\n", qtd_joao, qtd_maria, soma_vencedor);

    return 0;
}