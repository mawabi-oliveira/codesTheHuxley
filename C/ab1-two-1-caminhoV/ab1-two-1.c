#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void doryr(int n, int k, int e1, int e2, int e3, int e4, int e5, int pos, int m, int dist, int dir) {
    int c;
    if (m == 0) c = e1;
    else if (m == 1) c = e2;
    else if (m == 2) c = e3;
    else if (m == 3) c = e4;
    else c = e5;

    if (m == k) {
        if (pos == n) {
            printf("Destino alcancado, distancia percorrida: %d\n", dist);
            return;
        }
        printf("Indo, posicao %d\n", ++pos);
        doryr(n, k, e1, e2, e3, e4, e5, pos, m, ++dist, 1);
        return;
    }

    if (dir == 1) {
        if (pos < c) {
            printf("Indo, posicao %d\n", ++pos);
            doryr(n, k, e1, e2, e3, e4, e5, pos, m, ++dist, 1);
            return;
        }
        if (pos == c) {
            printf("Voltando, posicao %d\n", --pos);
            doryr(n, k, e1, e2, e3, e4, e5, pos, m, ++dist, -1);
            return;
        }
    } 
    else {
        if (pos > 0) {
            printf("Voltando, posicao %d\n", --pos);
            doryr(n, k, e1, e2, e3, e4, e5, pos, m, ++dist, -1);
            return;
        }
        if (pos == 0) {
            doryr(n, k, e1, e2, e3, e4, e5, pos, ++m, dist, 1);
            return;
        }
    }
}

int main() {
    int n, k;
    int e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;

    scanf("%d", &n);
    scanf("%d", &k);

    if (k > 0) scanf("%d", &e1);
    if (k > 1) scanf("%d", &e2);
    if (k > 2) scanf("%d", &e3);
    if (k > 3) scanf("%d", &e4);
    if (k > 4) scanf("%d", &e5);

    doryr(n, k, e1, e2, e3, e4, e5, 0, 0, 0, 1);

    return 0;
}