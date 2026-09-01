#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cycle_len(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        return 1 + cycle_len(n / 2);
    } else {
        return 1 + cycle_len(n * 3 + 1);
    }
}

int max_cycle(int start, int end, int current_max) {
    if (start > end) {
        return current_max;
    } else {
        int len = cycle_len(start);
        if (len > current_max) {
            current_max = len;
        }
        return max_cycle(start + 1, end, current_max);
    }
}

void process_cases() {
    int i, j;
    if (scanf("%d %d", &i, &j) == 2) {
        int start = i;
        int end = j;
        
        if (i > j) {
            start = j;
            end = i;
        }
        
        printf("%d %d %d\n", i, j, max_cycle(start, end, 0));
        process_cases();
    }
}

int main() {
    process_cases();
    return 0;
}