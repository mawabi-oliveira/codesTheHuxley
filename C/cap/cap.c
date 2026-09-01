#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_caixas(int count, int *total) {
    if (count == 7) return;
    
    int qtd;
    char tam;
    scanf("%d %c", &qtd, &tam);
    
    if (tam == 'P' || tam == 'p') {
        *total += qtd * 10;
    } else if (tam == 'G' || tam == 'g') {
        *total += qtd * 16;
    }
    
    ler_caixas(count + 1, total);
}

int main() {
    int total_capsulas = 0;
    ler_caixas(0, &total_capsulas);
    
    printf("%d\n", total_capsulas);
    printf("%d\n", (total_capsulas * 2) / 7);
    
    return 0;
}