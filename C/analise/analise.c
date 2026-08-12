#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor_s, renda_m;
    scanf("%f %f", &valor_s, &renda_m);
    float comprometimento = valor_s * 0.30;
    float limite_disp = comprometimento - renda_m;
    

    if(limite_disp < 0){
        printf("%.2f", 0);
    }
    else{
        printf("%.2f", limite_disp);
    }

	return 0;
}