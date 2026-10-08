#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long memo[101];

long long fib(int n) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != 0) {
        return memo[n];
    }
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fib(n));
    return 0;
}