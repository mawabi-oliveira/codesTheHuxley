#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void find_max(int current_max) {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("%d\n", current_max);
    } else if (n > current_max) {
        find_max(n);
    } else {
        find_max(current_max);
    }
}

int main() {
    find_max(0);
    return 0;
}