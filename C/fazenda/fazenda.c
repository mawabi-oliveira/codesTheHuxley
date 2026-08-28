#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float X, Z, W;
    char Y;
    int T;

    scanf("%f", &X);
    scanf(" %c", &Y);
    scanf("%f", &Z);
    scanf("%f", &W);
    scanf("%d", &T);

    float eficiencia_total = X;

    if (Y == 'C') {
        eficiencia_total *= 1.5;
    } else if (Y == 'F') {
        eficiencia_total *= 1.2;
    } else {
        eficiencia_total *= 0.9;
    }

    if (W >= 2.0 * Z) {
        eficiencia_total *= 1.3;
    } else {
        eficiencia_total *= 0.75;
    }

    if (T < 10) {
        eficiencia_total *= 0.85;
    } else if (T > 25) {
        eficiencia_total *= 1.25;
    }

    printf("%.2f\n", eficiencia_total);

    if (eficiencia_total > Z) {
        printf("Oh nao, a fazenda cresceu demais!\n");
    }

    return 0;
}