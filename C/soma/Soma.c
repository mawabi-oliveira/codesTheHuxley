#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[1000];
int b[1000];
int r[1000];
int n;

void lerVetor(int v[], int i) {
    if (i < n) {
        scanf("%d", &v[i]);
        lerVetor(v, i + 1);
    }
}

int somar(int i, int carry) {
    int total;
    if (i < 0) {
        return carry;
    }
    total = a[i] + b[i] + carry;

    if (total == 0) {
        r[i] = 0;
        carry = 0;
    } else if (total == 1) {
        r[i] = 1;
        carry = 0;
    } else if (total == 2) {
        r[i] = 0;
        carry = 1;
    } else {
        r[i] = 1;
        carry = 1;
    }

    return somar(i - 1, carry);
}

void mostrar(int i) {
    if (i < n) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", r[i]);
        mostrar(i + 1);
    }
}

int main() {
    int carry;

    scanf("%d", &n);
    lerVetor(a, 0);
    lerVetor(b, 0);

    carry = somar(n - 1, 0);

    if (carry == 1) {
        printf("OVERFLOW\n");
    } else {
        mostrar(0);
        printf("\n");
    }
    return 0;
}