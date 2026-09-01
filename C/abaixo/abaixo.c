#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void process_houses(int fined_count, double total_fine) {
    int vehicles;
    scanf("%d", &vehicles);
    
    if (vehicles == 999) {
        printf("%.2lf\n%d\n", total_fine, fined_count);
    } else if (vehicles > 2) {
        process_houses(fined_count + 1, total_fine + ((vehicles - 2) * 12.89));
    } else {
        process_houses(fined_count, total_fine);
    }
}

int main() {
    process_houses(0, 0.0);
    return 0;
}