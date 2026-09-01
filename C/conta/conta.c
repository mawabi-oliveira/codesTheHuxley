#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count_multiples(int current, int a, int b, int count) {
    if (current >= 50) {
        printf("%d\n", count);
    } else {
        if (current % a == 0 && current % b == 0) {
            count_multiples(current + 1, a, b, count + 1);
        } else {
            count_multiples(current + 1, a, b, count);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    count_multiples(1, a, b, 0);
    return 0;
}