#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void verificar_triangular(int n, int i) {
    if (i * (i + 1) * (i + 2) == n) {
        printf("%d * %d * %d = %d\n", i, i + 1, i + 2, n);
        printf("Verdadeiro\n");
    } else if (i * (i + 1) * (i + 2) > n) {
        printf("Falso\n");
    } else {
        verificar_triangular(n, i + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    verificar_triangular(n, 1); 
    return 0;
}