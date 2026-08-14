#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    char la, lg, lr, lh;
    int va, vb, vc, vd;
   
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    scanf(" %c %c %c %c", &la, &lg, &lr, &lh);
    scanf("%d %d %d %d", &va, &vb, &vc, &vd);

    double media = (n1 + n2 + n3 + n4) / 4.0;

    double fator;
    if (media <= 10.0) {
        fator = 0.4;
    } else if (media <= 30.0) {
        fator = 0.6;
    } else if (media <= 60.0) {
        fator = 0.8;
    } else {
        fator = 1.0;
    }

    int v_anderson;
    if (la == 'a') {
        v_anderson = va;
    } else if (la == 'b') {
        v_anderson = vb;
    } else if (la == 'c') {
        v_anderson = vc;
    } else {
        v_anderson = vd;
    }

    int v_guilherme;
    if (lg == 'a') {
        v_guilherme = va;
    } else if (lg == 'b') {
        v_guilherme = vb;
    } else if (lg == 'c') {
        v_guilherme = vc;
    } else {
        v_guilherme = vd;
    }

    int v_rita;
    if (lr == 'a') {
        v_rita = va;
    } else if (lr == 'b') {
        v_rita = vb;
    } else if (lr == 'c') {
        v_rita = vc;
    } else {
        v_rita = vd;
    }

    int v_higor;
    if (lh == 'a') {
        v_higor = va;
    } else if (lh == 'b') {
        v_higor = vb;
    } else if (lh == 'c') {
        v_higor = vc;
    } else {
        v_higor = vd;
    }

    double p_anderson = n1 + v_anderson + (v_anderson * fator);
    double p_guilherme = n2 + v_guilherme + (v_guilherme * fator);
    double p_rita = n3 + v_rita + (v_rita * fator);
    double p_higor = n4 + v_higor + (v_higor * fator);

    if (p_anderson < p_guilherme && p_anderson < p_rita && p_anderson < p_higor) {
        printf("Anderson quem vai pagar o lanche!:D\n");
    } else if (p_guilherme < p_rita && p_guilherme < p_higor) {
        printf("Guilherme quem vai pagar o lanche!:D\n");
    } else if (p_rita < p_higor) {
        printf("Rita quem vai pagar o lanche!:D\n");
    } else {
        printf("Higor quem vai pagar o lanche!:D\n");
    }

    return 0;
}