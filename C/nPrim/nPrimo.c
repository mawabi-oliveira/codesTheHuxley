#include <stdio.h>
#include <string.h>
#include <math.h>

int ehPrimo(int n, int d){

    if(n <= 1){
        return 0;
    }
    if(d * d > n){
     return 1;
    }
    if(n%d == 0){
        return 0;
    }

    return ehPrimo(n, d + 1);
}

int primo(int n){
    return ehPrimo(n,2);
}

int main(){
    int n;

    if(scanf("%d", &n) != 1 || n == -1){
        return 0;
    }
    else{
        printf("%d\n", primo(n));
        return main();
    }
}