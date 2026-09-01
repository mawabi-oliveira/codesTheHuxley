#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void processar_produtos(int count, int descontos_validos) {
    if (count == 5) {
        printf("%d\n", descontos_validos);
    } else {
        double original, promocao;
        scanf("%lf %lf", &original, &promocao);
        
        if (promocao <= original * 0.8) {
            processar_produtos(count + 1, descontos_validos + 1);
        } else {
            processar_produtos(count + 1, descontos_validos);
        }
    }
}

int main() {
    processar_produtos(0, 0);
    return 0;
}