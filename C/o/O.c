#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int v[1000];
int n;

void lerAlunos(int i) {
    if (i < n) {
        scanf("%d", &v[i]);
        lerAlunos(i + 1);
    }
}

int contar(int i) {
    int anterior, proximo, conta;

    if (i == n) {
        return 0;
    }

    if (i == 0) {
        anterior = v[n - 1];
    } else {
        anterior = v[i - 1];
    }

    if (i == n - 1) {
        proximo = v[0];
    } else {
        proximo = v[i + 1];
    }

    if (v[i] > anterior && v[i] > proximo) {
        conta = 1;
    } else {
        conta = 0;
    }

    return conta + contar(i + 1);
}

int main() {
    scanf("%d", &n);
    lerAlunos(0);
    printf("%d\n", contar(0));
    return 0;
}