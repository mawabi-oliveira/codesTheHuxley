#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lvl;
    int potencia;
    scanf("%d", &lvl);
    if(lvl >= 1 && lvl <=20){
        potencia = 20 + (lvl * lvl * lvl);
    }
    else if(lvl >= 21 && lvl <=40){
        potencia = 8000 + (lvl - 10)*(lvl -10);
    }
    else if(lvl >= 41 && lvl <=60){
        potencia = 9000 + (5*lvl);
    }
    else if(lvl >= 61 && lvl <=80){
        potencia = 9300 + (2*lvl);
    }
    else if(lvl >=81 && lvl <=100){
        potencia =9500 + lvl;
    }

    printf("Potencia de : %d W", potencia);
	return 0;
}