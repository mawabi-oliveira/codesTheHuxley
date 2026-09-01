#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void read_ornaments(int count, double total) {
    if (count == 3) {
        printf("%.2lf\n%.2lf\n", total, total / 21.0);
    } else {
        int qtd;
        double preco;
        scanf("%d %lf", &qtd, &preco);
        read_ornaments(count + 1, total + (qtd * preco));
    }
}

int main() {
    double arvore;
    scanf("%lf", &arvore);
    read_ornaments(0, arvore);
    return 0;
}