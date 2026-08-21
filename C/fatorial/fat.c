#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long calcularFatorial(int n) {
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * calcularFatorial(n -1);
}

int main() {
    int n;
  

    if(  scanf("%d", &n) == 1){
        
    printf("%llu\n", calcularFatorial(n));
    }
  
	return 0;
}