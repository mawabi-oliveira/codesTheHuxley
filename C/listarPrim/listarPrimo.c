#include <stdio.h>
#include <time.h>

#define MAX_BUFFER 10000

int main() {
    time_t inicio = time(NULL);
    long long total_primos = 1; 
    
    printf("2\n");
    
    int n = 6;
    while (time(NULL) - inicio < 60) {
        int eh_primo = 1;

        for (int d = 3; d * d <= n; d += 2) {
            if (n % d == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) {
            printf("%d\n", n);
            total_primos++;
        }
        
        n += 2;
    }

    return 0;
}