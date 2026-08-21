#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int n){


    if(n == 0 || n == 1){    
       return 1;
    }
    else{
        return n * fatorial(n - 1);
        
    }
}
int main() {    
    int n;
  
    if (scanf("%d", &n) != 1 || n == -1) {
        return 0;
    }

    else{
        printf("%d\n", fatorial(n));
        return main();
    }

	return 0;
}