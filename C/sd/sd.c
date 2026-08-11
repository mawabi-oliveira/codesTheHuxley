#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    float vm = 0;
    float vc = 0;
    scanf("%f %f", &vm, &vc);
    float multa;
    int pontos;

    if (vc > vm && vc <= vm * 1.2) {
    multa = 85.13;
    pontos = 4;
    } 
    else if (vc > vm * 1.2 && vc <= vm * 1.5) {
    multa = 127.69;
    pontos = 5;
    } 
    else if (vc > vm * 1.5) {
    multa = 574.62;
    pontos = 7;
    } 
    else {
    multa = 0.0;
    pontos = 0;
}

    printf("%.2f\n%d\n", multa, pontos);


	return 0;
}