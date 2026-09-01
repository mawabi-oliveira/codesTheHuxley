#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcularViagemRecursiva(int passos_restantes, int x, int y, int ultimo_reino) {
    if (passos_restantes == 0) {
        return 0;
    }

    char movimento;
    if (scanf(" %c", &movimento) != 1) return 0;

    if (movimento == 'C') {
        y++;
    } else if (movimento == 'D') {
        x++;
    }

    int diferenca = y - x;
    int moedas_atuais = 0;
    int novo_reino = ultimo_reino;

    if (diferenca > 0) {
        if (ultimo_reino == -1) {
            moedas_atuais = 1;
        }
        novo_reino = 1;
    } 
    else if (diferenca < 0) {
        if (ultimo_reino == 1) {
            moedas_atuais = 1;
        }
        novo_reino = -1;
    }

    return moedas_atuais + calcularViagemRecursiva(passos_restantes - 1, x, y, novo_reino);
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int total_moedas = calcularViagemRecursiva(N, 0, 0, 0);

    printf("%d\n", total_moedas);

    return 0;
}
