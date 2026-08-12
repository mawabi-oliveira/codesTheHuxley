#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int consumo;

    if (N <= 10) {
        consumo = 7;
    } 
    else if (N > 10 && N <= 30) {
        consumo = 7 + (N - 10) * 1;
    } 
    else if (N > 30 && N <= 100) {
        consumo = 27 + (N - 30) * 2;
    } 
    else { 
        consumo = 167 + (N - 100) * 5;
    }

    printf("%d\n", consumo);

    return 0;
}