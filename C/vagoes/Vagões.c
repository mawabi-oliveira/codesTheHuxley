#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int v[1000];
int n;

void lerVagoes(int i) {
    if (i < n) {
        scanf("%d", &v[i]);
        lerVagoes(i + 1);
    }
}

// i come�a no �ltimo vag�o e vai diminuind retorna quem sobrou 
int distribuir(int i, int p) {
    int cabe;
    if (i < 0) {
        return p;
    }
    cabe = 4 - v[i];
    if (p >= cabe) {
        v[i] = 4;
        p = p - cabe;
    } else {
        v[i] = v[i] + p;
        p = 0;
    }
    return distribuir(i - 1, p);
}

void mostrar(int i) {
    if (i < n) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", v[i]);
        mostrar(i + 1);
    }
}

int main() {
    int p, sobra;

    scanf("%d", &n);
    lerVagoes(0);
    scanf("%d", &p);

    sobra = distribuir(n - 1, p);

    if (sobra == 0) {
        printf("Todos foram acomodados\n");
    } else {
        printf("%d ficaram de fora.\n", sobra);
    }
    mostrar(0);
    printf("\n");
    return 0;
}