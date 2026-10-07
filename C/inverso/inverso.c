#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void lerVetor(int vetor[], int i, int n) {
    if (i == n) return;
    scanf("%d", &vetor[i]);
    lerVetor(vetor, i + 1, n); 
}

void imprimirInverso(int vetor[], int i) {
    if (i < 0) return; 
    printf("%d ", vetor[i]);
    imprimirInverso(vetor, i - 1); 
}

int main() {
    int n;
    scanf("%d", &n);
    
    int vetor[n];
    
    lerVetor(vetor, 0, n);
    
    imprimirInverso(vetor, n - 1);
    
    return 0;
}