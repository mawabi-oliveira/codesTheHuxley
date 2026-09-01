#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprimir_dia(int dia) {
    if (dia == 0) {
        printf("DOMINGO\n");
    } else if (dia == 1) {
        printf("SEGUNDA\n");
    } else if (dia == 2) {
        printf("TERCA\n");
    } else if (dia == 3) {
        printf("QUARTA\n");
    } else if (dia == 4) {
        printf("QUINTA\n");
    } else if (dia == 5) {
        printf("SEXTA\n");
    } else if (dia == 6) {
        printf("SABADO\n");
    }
}

void processar_dias(int dia_atual, int meta_prog, int meta_linhas, int max_linhas, int dia_max) {
    if (dia_atual == 7) {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", meta_prog);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", meta_linhas);
        printf("DIA QUE MAIS PRODUZIU: ");
        imprimir_dia(dia_max);
    } else {
        int prog, linhas;
        scanf("%d %d", &prog, &linhas);
        
        if (prog >= 5) {
            meta_prog = meta_prog + 1;
        }
        
        if (linhas >= 100) {
            meta_linhas = meta_linhas + 1;
        }
        
        if (linhas >= max_linhas) {
            max_linhas = linhas;
            dia_max = dia_atual;
        }
        
        processar_dias(dia_atual + 1, meta_prog, meta_linhas, max_linhas, dia_max);
    }
}

int main() {
    processar_dias(0, 0, 0, -1, 0);
    return 0;
}