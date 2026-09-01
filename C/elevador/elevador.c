#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void check_elevator(int n, int c, int current_passengers, int exceeded) {
    if (n == 0) {
        if (exceeded) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    } else {
        int s, e;
        scanf("%d %d", &s, &e);
        
        current_passengers = current_passengers - s + e;
        
        if (current_passengers > c) {
            check_elevator(n - 1, c, current_passengers, 1);
        } else {
            check_elevator(n - 1, c, current_passengers, exceeded);
        }
    }
}

int main() {
    int n, c;
    scanf("%d %d", &n, &c);
    check_elevator(n, c, 0, 0);
    return 0;
}