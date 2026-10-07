#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int conexoes[10000];
int visitado[10000] = {0};

void ler_conexoes(int idx, int n) {
    if (idx >= n) return;
    scanf("%d", &conexoes[idx]);
    ler_conexoes(idx + 1, n);
}

void percorrer_toca(int atual) {
    if (visitado[atual] == 1) return;
    visitado[atual] = 1;
    percorrer_toca(conexoes[atual]);
}

int contar_tocas(int idx, int n) {
    if (idx >= n) return 0;
    
    if (visitado[idx] == 0) {
        percorrer_toca(idx);
        return 1 + contar_tocas(idx + 1, n);
    }
    
    return contar_tocas(idx + 1, n);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    ler_conexoes(0, n);
    int total_tocas = contar_tocas(0, n);

    printf("%d\n", total_tocas);

    return 0;
}