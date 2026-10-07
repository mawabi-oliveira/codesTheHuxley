#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int total_alunos = 0;
int aprovados = 0;
int frequencia_notas[11] = {0};

int calcular_nota(char resp[], char gab[], int idx) {
    if (idx >= 10) return 0;
    
    int ponto = 0;
    if (resp[idx] == gab[idx]) {
        ponto = 1;
    }
    
    return ponto + calcular_nota(resp, gab, idx + 1);
}

int encontrar_maior_freq(int idx, int max_f, int nota_max) {
    if (idx > 10) return nota_max;
    
    if (frequencia_notas[idx] > max_f) {
        return encontrar_maior_freq(idx + 1, frequencia_notas[idx], idx);
    }
    
    return encontrar_maior_freq(idx + 1, max_f, nota_max);
}

void processar_alunos(char gabarito[]) {
    int id_aluno;
    if (scanf("%d", &id_aluno) != 1 || id_aluno == 9999) return;

    char respostas[11];
    scanf("%10s", respostas);

    int nota_int = calcular_nota(respostas, gabarito, 0);
    printf("%d %.1f\n", id_aluno, (double)nota_int);

    total_alunos++;
    if (nota_int >= 6) {
        aprovados++;
    }
    frequencia_notas[nota_int]++;

    processar_alunos(gabarito);
}

int main() {
    char gabarito[11];
    scanf("%10s", gabarito);

    processar_alunos(gabarito);

    if (total_alunos > 0) {
        double pct = ((double)aprovados / total_alunos) * 100.0;
        printf("%.1f%%\n", pct);

        int nota_mais_freq = encontrar_maior_freq(0, -1, 0);
        printf("%.1f\n", (double)nota_mais_freq);
    }

    return 0;
}