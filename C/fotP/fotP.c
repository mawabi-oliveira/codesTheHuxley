#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_primo_aux(int x, int i) {
    if (x < 2) return 0;
    if (i * i > x) return 1;
    if (x % i == 0) return 0;
    return eh_primo_aux(x, i + 1);
}

int eh_primo(int x) {
    return eh_primo_aux(x, 2);
}

int proximo_primo(int y) {
    if (eh_primo(y)) return y;
    return proximo_primo(y + 1);
}

double fatorial(int z) {
    if (z <= 1) return 1.0;
    return z * fatorial(z - 1);
}

void calcular_serie(int atual, int n, double soma) {
    if (atual > n) {
        printf("\n%.2lf\n", soma);
        return;
    }

    int div;
    if (atual == 1) {
        div = 1;
    } else {
        div = proximo_primo(atual);
    }
    
    double termo = fatorial(atual) / div;
    
    if (atual == 1) {
        printf("%d!/%d", atual, div);
    } else {
        printf(" + %d!/%d", atual, div);
    }
    
    calcular_serie(atual + 1, n, soma + termo);
}

int main() {
    int n;
    scanf("%d", &n);
    calcular_serie(1, n, 0.0);
    return 0;
}