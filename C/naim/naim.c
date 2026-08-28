#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int D, N, V;
    char W, T;

    scanf("%d", &D);
    scanf(" %c", &W);
    scanf(" %c", &T);
    scanf("%d", &N);
    scanf("%d", &V);

    float D_total = D; 

    if (W == 'A') {
        D_total *= 0.8;
    } else if (W == 'M') {
        D_total *= 1.5;
    }

    if (T == 'F') {
        D_total *= 1.2;
    } else if (T == 'M') {
        D_total *= 0.9;
    }

    if (N >= 10) {
        D_total *= 1.3;
    } else if (N >= 5 && N <= 9) {
        D_total *= 1.1;
    }

    printf("%.2f\n", D_total);

    if (D_total >= V) {
        printf("O monstro foi derrotado!\n");
    } else {
        printf("O monstro sobreviveu!\n");
    }

    return 0;
}
