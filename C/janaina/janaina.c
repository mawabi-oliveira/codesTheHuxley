#include <stdio.h>

void calculaIntervalo(int a, int b) {
 
    if (a > b) {
        return;
    }

    int resultado = (a * a) - (4 * a) + 5;
    printf("%d\n", resultado);

    calculaIntervalo(a + 1, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    calculaIntervalo(a, b);

    return 0;
}