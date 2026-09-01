#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contarDivisoresTres(int N, int i) {
    if (i > N) {
        return 0;
    }

    if (N % i == 0 && i % 3 == 0) {
        return 1 + contarDivisoresTres(N, i + 1);
    } 
    else {
        return contarDivisoresTres(N, i + 1);
    }
}

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) return 0;

    int R = contarDivisoresTres(N, 1);

    if (R > 0) {
        printf("%d\n", R);
    } else {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }

    return 0;
}
