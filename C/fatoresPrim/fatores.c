#include <stdio.h>
#include <stdlib.h>

void decomporEmFatoresPrimos(long long n) {
    if (n <= 1) {
        printf("Apenas números maiores que 1.\n");
        return;
    }

    size_t capacidade = 10;
    size_t tamanho = 0;
    long long *fatores = malloc(capacidade * sizeof(long long));

    if (!fatores) {
        printf("Erro de alocação de memória.\n");
        return;
    }

    long long temp = n;

    while (temp % 2 == 0) {
        if (tamanho >= capacidade) {
            capacidade *= 2;
            long long *temp_ptr = realloc(fatores, capacidade * sizeof(long long));
            if (!temp_ptr) {
                printf("Erro ao realocar memória.\n");
                free(fatores);
                return;
            }
            fatores = temp_ptr;
        }
        fatores[tamanho++] = 2;
        temp /= 2;
    }

    for (long long d = 3; d * d <= temp; d += 2) {
        while (temp % d == 0) {
            if (tamanho >= capacidade) {
                capacidade *= 2;
                long long *temp_ptr = realloc(fatores, capacidade * sizeof(long long));
                if (!temp_ptr) {
                    printf("Erro ao realocar memória.\n");
                    free(fatores);
                    return;
                }
                fatores = temp_ptr;
            }
            fatores[tamanho++] = d;
            temp /= d;
        }
    }

    if (temp > 2) {
        if (tamanho >= capacidade) {
            capacidade *= 1.5;
            long long *temp_ptr = realloc(fatores, capacidade * sizeof(long long));
            if (!temp_ptr) {
                printf("Erro ao realocar memória.\n");
                free(fatores);
                return;
            }
            fatores = temp_ptr;
        }
        fatores[tamanho++] = temp;
    }

    printf("Fatores primos de %lld: ", n);
    for (size_t i = 0; i < tamanho; i++) {
        printf("%lld", fatores[i]);
        if (i < tamanho - 1) {
            printf(" x ");
        }
    }
    printf("\n");
    free(fatores);
}

int main() {
    long long numero;

    printf("Digite um numero: ");
    if (scanf("%lld", &numero) == 1) {
        decomporEmFatoresPrimos(numero);
    } else {
        printf("Inválido.\n");
    }

    return 0;
}