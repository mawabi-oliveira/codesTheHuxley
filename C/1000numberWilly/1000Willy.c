#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vetor[1000];
    int n;

    while (1) {
        
        scanf("%d", &vetor[0]);
        
        if (vetor[0] == -1) {
            break;
        }

        for (int i = 1; i < 1000; i++) {
            scanf("%d", &vetor[i]);
        }

        scanf("%d", &n);

        int contador = 0;
        for (int i = 0; i < 1000; i++) {
            if (vetor[i] == n) {
                contador++;
            }
        }

        printf("%d appeared %d times\n", n, contador);
    }

    return 0;
}