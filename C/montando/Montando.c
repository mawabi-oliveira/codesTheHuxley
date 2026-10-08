#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma[6];
int ordem[6];

// le as 6 linhas de 4 dados soma = total - menor dado 
void lerSomas(int i) {
    int a, b, c, d, menor;
    if (i < 6) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        menor = a;
        if (b < menor) {
            menor = b;
        }
        if (c < menor) {
            menor = c;
        }
        if (d < menor) {
            menor = d;
        }
        soma[i] = a + b + c + d - menor;
        lerSomas(i + 1);
    }
}

void lerOrdem(int i) {
    if (i < 6) {
        scanf("%d", &ordem[i]);
        lerOrdem(i + 1);
    }
}

// compara os vizinho ate a posi��o limite e troca se estiverem fora de ordem 
void passada(int i, int limite) {
    int temp;
    if (i < limite - 1) {
        if (soma[i] < soma[i + 1]) {
            temp = soma[i];
            soma[i] = soma[i + 1];
            soma[i + 1] = temp;
        }
        passada(i + 1, limite);
    }
}

// ordenando
void ordenar(int limite) {
    if (limite > 1) {
        passada(0, limite);
        ordenar(limite - 1);
    }
}

int main() {
    lerSomas(0);
    lerOrdem(0);
    ordenar(6);

    printf("For = %d\n", soma[ordem[0] - 1]);
    printf("Des = %d\n", soma[ordem[1] - 1]);
    printf("Con = %d\n", soma[ordem[2] - 1]);
    printf("Sab = %d\n", soma[ordem[3] - 1]);
    printf("Int = %d\n", soma[ordem[4] - 1]);
    printf("Car = %d\n", soma[ordem[5] - 1]);
    return 0;
}