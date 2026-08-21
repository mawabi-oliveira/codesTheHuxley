#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int nDispositivo(int n, int t){
    if (t == 0) {
        return n;
    }

    int anterior = nDispositivo(n, t - 1);
    int i;

    if (t % 2 != 0) {
        i = 3;
    } else {
        i = anterior % 5; 
    }

    return anterior + i;
}

int main(){
    int n,t;
    if(scanf("%d %d", &n, &t) == 2)
    {
        printf("%d\n", nDispositivo(n,t));
    }

    return 0;
}