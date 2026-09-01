#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

int potencia_de_dois(int p) {
    if (p == 0) {
        return 1;
    } else {
        return 2 * potencia_de_dois(p - 1);
    }
}

double calcula_termo(int i) {
    if (i % 2 != 0) {
        return (double)i / (double)potencia_de_dois(i - 1);
    } else {
        return (double)potencia_de_dois(i - 1) / (double)(3 * (i / 2));
    }
}

void calcular_serie(int atual, int n, double soma) {
    if (atual > n) {
        printf("S: %.2lf\n", soma);
    } else {
        double termo = calcula_termo(atual);
        calcular_serie(atual + 1, n, soma + termo);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    calcular_serie(1, n, 0.0);
    return 0;
}