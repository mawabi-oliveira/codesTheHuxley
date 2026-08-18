#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void processaCasos(int n) {
   
    if (n == 0) {
        return;
    }

    int A, D;
    scanf("%d %d", &A, &D);

    int resultado = mdc(A, D);
    printf("MDC(%d,%d) = %d\n", A, D, resultado);

    
    processaCasos(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    processaCasos(n);

    return 0;
}